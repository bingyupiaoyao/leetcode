/************************************************************************/
/* 
Author:        bingyupiaoyao
Email:         wulingpku520@gmail.com  
Time:          2016/04/05

Total Accepted: 49283 Total Submissions: 172157 Difficulty: Hard

Given a string S and a string T, count the number of distinct subsequences of T in S.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ACE" is a subsequence of "ABCDE" while "AEC" is not).

Here is an example:
S = "rabbbit", T = "rabbit"

Return 3.

Subscribe to see which companies asked this question

Hide Tags
Dynamic Programming String
*/
/************************************************************************/

#include<iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

/************************************************************************/
/*

*/
/************************************************************************/
class Solution01
{
public:
    int numDistinct(string s, string t)
    {
        int n = s.size();
        int m = t.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 1;
        }

        for (int j = 1; j <= m; j++)
        {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s[i - 1] == t[j - 1])
                {
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
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
