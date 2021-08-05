// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
    if (strs.empty())
        return "";

    //找最长的string
    int maxLen = -1;
    int index = 0;
    for (int i = 0; i < strs.size(); i++)
    {
        if (maxLen < strs[i].size())
        {
            maxLen = strs[i].length();
            index = i;
        }
    }

    std::string maxLenStr = strs[index];

    std::string result;
    
    //最长string
    for (int i = 0; i < maxLenStr.size(); i++)
    {
        bool next = true;
        //与所有string, 每个字母挨个比较
        for (int j = 0; j < strs.size(); j++)
        {
            std::string str = strs[j];
            if (str == maxLenStr)
                continue;

            if (maxLenStr[i] != str[i])
            {
                next = false;
                break;
            }

        }

        if (next)
            result.push_back(maxLenStr[i]);
        else
            break;
    }

    return result;
}

int main()
{
    std::cout << "Hello World!\n";
    system("pause");
}

