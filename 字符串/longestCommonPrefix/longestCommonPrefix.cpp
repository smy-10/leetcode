// longestCommonPrefix.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

 

示例 1：

输入：strs = ["flower","flow","flight"]
输出："fl"
示例 2：

输入：strs = ["dog","racecar","car"]
输出：""
解释：输入不存在公共前缀。
 

提示：

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] 仅由小写英文字母组成

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-common-prefix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.empty())
		{
			return "";
		}

		int minLength = 201; //题目说最长为200
		for (auto i = 0; i < strs.size(); i++)
		{
			if (strs[i].length() < minLength)
			{
				minLength = strs[i].length();
			}
		}

		int pos = 0;
		for (auto i = 0; i < minLength; i++)
		{
			char s = strs[0][i];
			for (auto j = 0; j < strs.size(); j++)
			{
				if (strs[j][i] != s)
				{
					return strs[j].substr(0, i);
				}
			}
		}

		return strs[0].substr(0, minLength);
	}
};

int main()
{
	Solution s;

	string a = "abcd";
	string b = "abcd";
	string c = "abcdf";

	vector<string> t;
	t.push_back(a);
	t.push_back(b);
	t.push_back(c);

	auto r = s.longestCommonPrefix(t);

    std::cout << "Hello World!\n";
}
