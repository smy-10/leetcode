// reverseWords.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
557. 反转字符串中的单词 III
给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。



示例：

输入："Let's take LeetCode contest"
输出："s'teL ekat edoCteeL tsetnoc"


提示：

在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:

	vector<string> splitWorlds(const string& s)
	{
		std::string o_str = s;
		std::vector<std::string> str_list;
		int comma_n = 0;
		do
		{
			std::string tmp_s = "";
			comma_n = o_str.find(" ");
			if (-1 == comma_n)
			{
				tmp_s = o_str.substr(0, o_str.length());
				str_list.push_back(tmp_s);
				break;
			}
			tmp_s = o_str.substr(0, comma_n);
			o_str.erase(0, comma_n + 1);
			str_list.push_back(tmp_s);
		} while (true);

		return str_list;
	}

	void reverseString(string& s)
	{
		int left = 0;
		int right = s.size() - 1;

		while (left < right)
		{
			char temp = s[right];
			s[right] = s[left];
			s[left] = temp;

			left++;
			right--;
		}
	}

	string reverseWords(string s)
	{
		auto words = splitWorlds(s);
	
		string newWords;
		for (auto i = 0; i < words.size(); i++)
		{
			reverseString(words.at(i));
			newWords += words.at(i);
			
			if (i != words.size() - 1)
			{
				newWords += " ";
			}
		}

		return newWords;
	}
};

int main()
{
	Solution s;
	s.reverseWords("Let's take LeetCode contest");

    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
