#include<vector>
#include<iostream>
#include <queue>

using namespace std;
struct MaxHeap{
    std::vector<int> data;

    void heapifyUp(int index)//上浮
    {
        while(1)
        {
            int parent=(index-1)/2;
            if(data[parent]>=data[index]) break;//已经满足条件
            std::swap(data[parent],data[index]);
            index=parent;
            if(index==0) break;
        }
    }

    void heapifyDown(int index)//下沉
    {
        int size=data.size();
        int maxium=index;
        while(1)
        {
            int left=index*2+1;
            int right=index*2+2;

            if(left<size&&data[maxium]<data[left])   maxium=left;
            if(right<size&&data[maxium]<data[right]) maxium=right;
            if(maxium==index) break;

            std::swap(data[maxium],data[index]);
            index=maxium;
        }
    }

    void pop()
    {
        if(data.empty()) return ;
        std::swap(data[0],data.back());
        data.pop_back();
        heapifyDown(0);
    }

    void push(int val)
    {
        data.push_back(val);
        heapifyUp(data.size()-1);
    }
    int top()
    {
        return data.empty()?-1:data[0];
    }
};

class Solution {
    public:
        int findMaximizedCapital(int k, int w, vector<int>& profits,
                                 vector<int>& capital) {
            int length = profits.size();
            std::vector<std::pair<int, int>> ipo;
            for (size_t i = 0; i < capital.size(); ++i) {
                ipo.emplace_back(capital[i], profits[i]);
            }
            MaxHeap project;
            std::sort(ipo.begin(), ipo.end(), [](const auto& a, const auto& b) 
            {
                return a.first < b.first;
            });
            // for (int i = 0; i < k; i++) {
            //     for (int j = 0; j < length; j++) {
            //         if (ipo[j].second != -1 && w>=ipo[j].second) {
            //             w=w+ipo[j].first;
            //             ipo[j].second = -1;
            //             break;
            //         }
            //     }
            // }
            int index=0;
            for(int i=0;i<k;i++)
            {
                while(index<length&&ipo[index].first<=w)
                {
                    project.push(ipo[index].second);
                    index++;
                }
                w+=project.top();
                project.pop();
            }
            return w;
        }
    };
