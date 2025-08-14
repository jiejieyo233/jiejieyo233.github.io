#include <vector>
#include<unordered_map>
class Solution {
public:
    int closestMeetingNode(std::vector<int>& edges, int node1, int node2) {
        std::unordered_map<int,int> both;
        int min=INT_MAX;
        int n1_next=edges[node1],n2_next=edges[node2];
        for(int i=0;i<edges.size();i++)
        {
            both.insert(n1_next,i);
            n1_next=edges[n1_next];
            if(n1_next==-1)
                break;
        }
        for(int i=0;i<edges.size();i++)
        {
            if(both.find(n2_next)!=both.end())
                min=(both.find(n2_next)->second+i)<min?both.find(n2_next)->second+i:min;
            n2_next=edges[n2_next];
            if(n1_next==-1)
                break;
        }

    }
};