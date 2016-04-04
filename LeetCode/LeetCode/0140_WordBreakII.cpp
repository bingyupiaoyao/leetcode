/************************************************************************/
/* 
Author:        bingyupiaoyao
Email:         wulingpku520@gmail.com  
最后修改时间:        2016/04/04

Total Accepted: 53898 Total Submissions: 275210 Difficulty: Hard

Given a string s and a dictionary of words dict, add spaces in s to construct a sentence where each word is a valid dictionary word.

Return all such possible sentences.

For example, given
s = "catsanddog",
dict = ["cat", "cats", "and", "sand", "dog"].

A solution is ["cats and dog", "cat sand dog"].

Subscribe to see which companies asked this question

Hide Tags
Dynamic Programming Backtracking
*/
/************************************************************************/

#include<iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_set>
using namespace std;

/************************************************************************/
/*

*/
/************************************************************************/
class Solution01
{
public:
    vector<string> wordBreak(string s, unordered_set<string> &dict)
    {
        map<string, vector<string>> mem;
        return wordBreakHelper(s, dict, mem);
    }
private:
    vector<string> wordBreakHelper(string& s, unordered_set<string>&dic, map<string, vector<string>>& mem)
    {
        //return, memorize
        if (mem.find(s) != mem.end())
        {
            return mem.at(s);
        }
        int n = s.size();
        vector<string>results;
        if (n <= 0)
        {
            return results;
        }

        // Recursive
        for (int len = 1; len <= n; ++len)
        {
            string subfix = s.substr(0, len);// pos, len
            if (dic.find(subfix) != dic.end())
            {
                if (len == n)
                {
                    results.push_back(subfix);
                }
                else
                {
                    string remain = s.substr(len);
                    vector<string> vecRemains = std::move(wordBreakHelper(remain, dic, mem));
                    for (string str : vecRemains)
                    {
                        results.push_back(subfix + " " + str);
                    }
                }
            }
        }
        mem.insert(mem.end(), pair<string, vector<string>>(s, results));
        return results;
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
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    unordered_set<string>vec = { "a","aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa" };
    //Output

    cout << "----------solution01----------"<< endl;
    //Solution01
    Solution01 solution01;
    solution01.wordBreak(input, vec);
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
