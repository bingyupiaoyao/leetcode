/************************************************************************/
/* 
Author:        bingyupiaoyao
Email:         wulingpku520@gmail.com  
Time:          2016/04/05

Total Accepted: 55514 Total Submissions: 195560 Difficulty: Hard

Given two words word1 and word2, find the minimum number of steps required to convert word1 to word2. (each operation is counted as 1 step.)

You have the following 3 operations permitted on a word:

a) Insert a character
b) Delete a character
c) Replace a character

Subscribe to see which companies asked this question

Hide Tags
Dynamic Programming String

Hide Similar Problems
(M) One Edit Distance
*/
/************************************************************************/

#include<iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

/************************************************************************/
/*
*/
/************************************************************************/
class Solution01
{
public:
    int minDistance(string word1, string word2)
    {
        int n = word1.size();
        int m = word2.size();

        vector<vector<int>>dp(n + 1, vector<int>(m + 1, 0)); // 空间多一个

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = i;
        }

        for (int j = 0; j <= m; j++)
        {
            dp[0][j] = j;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int min = 0;
                if (word1[i - 1] == word2[j - 1])
                {
                    min = std::min(dp[i - 1][j - 1], dp[i - 1][j] + 1);
                    dp[i][j] = std::min(min, dp[i][j - 1] + 1);
                }
                else
                {
                    min = std::min(dp[i - 1][j - 1], dp[i - 1][j]);
                    dp[i][j] = std::min(min, dp[i][j - 1]) + 1;
                }
            }
        }

        return dp[n][m];
    }
private:

};

/************************************************************************/
/*

*/
/************************************************************************/
class Solution02
{
public:

private:

};

/************************************************************************/
/*

*/
/************************************************************************/
class Solution03
{
public:

private:

};

/************************************************************************/
/*

*/
/************************************************************************/
class Solution04
{
public:

private:

};


/************************************************************************/
/* Main*/
/************************************************************************/
int main()
{
    //Input

    //Output

    cout << "----------solution01----------"<< endl;
    //Solution01
    Solution01 solution01;
    
    cout << "----------solution02----------"<< endl;
    //Solution02
    Solution02 solution02;

    cout << "----------solution03----------"<< endl;
    //Solution03
    Solution03 solution03;

    cout << "----------solution04----------"<< endl;
    //Solution04
    Solution04 solution04;

    //Pause
    system("pause");
}
