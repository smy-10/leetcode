// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

std::string replace(const std::string& str, const std::string& curStr, const std::string& toStr)
{
    std::string s = str;

    for (auto i = 0; i < s.size(); i++)
    {
        auto pos = s.find(curStr, i);
        if (pos != std::string::npos)
        {
            s = s.replace(pos, curStr.size(), toStr);
        }
        else
        {
            break;;
        }
    }

    return s;
}

int romanToInt(std::string s) 
{
    if (s.empty())
    {
        return 0;
    }
    s = replace(s, "IV", "a");
    s = replace(s, "IX", "b");
    s = replace(s, "XL", "c");
    s = replace(s, "XC", "d");
    s = replace(s, "CD", "e");
    s = replace(s, "CM", "f");

    int value = 0;
    for (auto i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == 'I') value += 1;
        else if (c == 'V') value += 5;
        else if (c == 'X') value += 10;
        else if (c == 'L') value += 50;
		else if (c == 'C') value += 100;
        else if (c == 'D') value += 500;
	    else if (c == 'M') value += 1000;
        else if (c == 'a') value += 4;
		else if (c == 'b') value += 9;
		else if (c == 'c') value += 40;
        else if (c == 'd') value += 90;
        else if (c == 'e') value += 400;
        else if (c == 'f') value += 900;
    }

    return value;
}

int main()
{
    std::cout << "Hello World!\n";
    system("pause");
}

