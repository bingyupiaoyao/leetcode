/************************************************************************/
/* 
Author:        bingyupiaoyao
Email:         wulingpku520@gmail.com  
Time:          2016/04/06

Total Accepted: 47644 Total Submissions: 213244 Difficulty: Hard

Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2.

For example,
Given:
s1 = "aabcc",
s2 = "dbbca",

When s3 = "aadbbcbcac", return true.
When s3 = "aadbbbaccc", return false.

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
    bool isInterleave(string s1, string s2, string s3)
    {
        int n = s1.size();
        int m = s2.size();
        int k = s3.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        if (n + m != k)
        {
            return false;
        }

        for (int i = 0; i <= n && i <= k; i++)
        {
            if (i == 0)
            {
                dp[i][0] = true;
                continue;
            }

            dp[i][0] = (dp[i - 1][0] && s1[i - 1] == s3[i - 1]);
        }

        for (int i = 1; i <= m && i <= k; i++)
        {
            dp[0][i] = (dp[0][i - 1] && s2[i - 1] == s3[i - 1]);
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] = (dp[i - 1][j] && (s1[i - 1] == s3[i + j - 1]))
                    || (dp[i][j - 1] && (s2[j - 1] == s3[i + j - 1]));
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
