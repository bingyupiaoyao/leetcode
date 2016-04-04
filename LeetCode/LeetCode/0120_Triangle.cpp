/************************************************************************/
/*
Author:             bingyupiaoyao
Email:              wulingpku520@gmail.com
Time:               2016/04/04

Total Accepted: 65930 Total Submissions: 221298 Difficulty: Medium

Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

[
[2],
[3,4],
[6,5,7],
[4,1,8,3]
]

The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.

Subscribe to see which companies asked this question

Hide Tags
Array Dynamic Programming
*/
/************************************************************************/

#include<iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

/************************************************************************/
/*
Top-down
dp[i][j]: min sum to level i and j'th
*/
/************************************************************************/
class Solution01
{
public:
    int minimumTotal(vector<vector<int>>& triangle)
    {
        if (triangle.size() == 0 || triangle[0].size() == 0)
        {
            return -1;
        }

        const int n = 260;
        vector<vector<int>>dp(n, vector<int>(n, INT_MAX));

        dp[0][0] = triangle[0][0];
        int m = triangle.size();
        for (int i = 1; i < m; ++i)
        {
            int k = triangle[i].size();
            for (int j = 0; j < k; j++)
            {
                dp[i][j] = (j == 0 ? dp[i - 1][j] : std::min(dp[i - 1][j - 1], dp[i - 1][j])) + triangle[i][j];
            }
        }

        return *std::min_element(dp[m - 1].begin(), dp[m - 1].end());
    }
private:

};

int main()
{
    //Input
    vector<vector<int>>input = { {-1},{2, 3},{1, -1, -3} };

    //Output

    cout << "----------solution01----------" << endl;
    //Solution01
    Solution01 solution01;
    solution01.minimumTotal(input);

    //Pause
    system("pause");
}