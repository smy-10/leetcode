// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(std::string s) 
{
    if (s.empty())
        return false;

    std::stack<char> str;

    for (auto i = 0; i < s.size(); i++)
    {
        if (s[i] == '{')
            str.push('}');
        else if (s[i] == '[')
            str.push(']');
        else if (s[i] == '(')
            str.push(')');
        else if (str.empty())
            return false;
        else
        {		
			if (str.top() != s[i])
				return false;
            str.pop();
        }
    }
    
    return str.empty();
}

int main()
{
    std::cout << "Hello World!\n";
    system("pause");
}

