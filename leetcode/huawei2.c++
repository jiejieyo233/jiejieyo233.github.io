#include<iostream>
#include<vector>
int main()
{
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> matrix;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            matrix[i].push_back(getchar());
        }
    std::cout<<n;
}