// lengthOfLastWord.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中最后一个单词的长度。

单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

 

示例 1：

输入：s = "Hello World"
输出：5
示例 2：

输入：s = "   fly me   to   the moon  "
输出：4
示例 3：

输入：s = "luffy is still joyboy"
输出：6
 

提示：

1 <= s.length <= 104
s 仅有英文字母和空格 ' ' 组成
s 中至少存在一个单词
通过次数247,958提交次数661,076

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/length-of-last-word
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>

using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) 
	{
		if (s.empty())
		{
			return 0;
		}

		string removeSpaceStr;
		for (auto i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				if (i + 1 < s.size() && s[i + 1] == ' ')
				{
					continue;
				}
				if (!removeSpaceStr.empty() && i + 1 < s.size())
				{
					removeSpaceStr.push_back(s[i]);
				}

			}
			else
				removeSpaceStr.push_back(s[i]);
		}
		int index = 0;
		for (auto i = 0; i < removeSpaceStr.size(); i++)
		{
			if (removeSpaceStr[i] == ' ')
				index = i;
		}
		if (index == 0)
			return removeSpaceStr.size();

		return removeSpaceStr.size() - index - 1;
	}
};

int main()
{
	Solution s;
	auto a = s.lengthOfLastWord("a");

    std::cout << "Hello World!\n";
}
