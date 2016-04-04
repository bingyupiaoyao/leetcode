/************************************************************************/
/* 
Author:        bingyupiaoyao
Email:         wulingpku520@gmail.com  
Time:          2016/04/04

Total Accepted: 82568 Total Submissions: 330173 Difficulty: Medium

Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

For example, given
s = "leetcode",
dict = ["leet", "code"].

Return true because "leetcode" can be segmented as "leet code".

Subscribe to see which companies asked this question
*/
/************************************************************************/

#include<iostream>
#include <string>
#include <map>
#include <unordered_set>
using namespace std;

/************************************************************************/
/*
sequence DP
DP[i]: the previous i numbers of character whether legal
dp[i] = Or(dp[j]) j < i, j+1 ~ i is legal word
dp[0] = true
dp[n]
*/
/************************************************************************/
class Solution01
{
public:
    bool wordBreak(string s, unordered_set<string>& wordDict)
    {
        if (s.length() == 0 || wordDict.size() == 0)
        {
            return false;
        }

        vector<int>dp(s.length() + 1, false);
        dp[0] = true;
        for (int i = 1; i < s.length() + 1; ++i)
        {
            bool ftemp = false;
            for (int j = 0; j < i; ++j)
            {
                if (!dp[j])
                {
                    continue;
                }
                string temp = s.substr(j, i - j);
                if (wordDict.find(temp) == wordDict.end())
                {
                    continue;
                }
                else
                {
                    ftemp = true;
                    break;
                }
            }
            dp[i] = ftemp;
        }
        return dp[s.length()];
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
