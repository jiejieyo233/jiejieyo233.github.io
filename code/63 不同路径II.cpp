#include<iostream>
#include<vector>
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int row=obstacleGrid.size();
    int col=obstacleGrid[0].size();
    printf("%d,%d",row,col);
    int ans[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(obstacleGrid[i][j]==1)
            ans[i][j]=0;
            else if(i==0&j==0)
            ans[i][j]=1;
            else if(i==0)
            ans[i][j]=ans[i][j-1];
            else if(j==0)
            ans[i][j]=ans[i-1][j];
            else
            ans[i][j]=ans[i-1][j]+ans[i][j-1];
        }
    }
    return ans[row-1][col-1];
    }
};