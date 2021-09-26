// isValid.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
 

示例 1：

输入：s = "()"
输出：true
示例 2：

输入：s = "()[]{}"
输出：true
示例 3：

输入：s = "(]"
输出：false
示例 4：

输入：s = "([)]"
输出：false
示例 5：

输入：s = "{[]}"
输出：true
 

提示：

1 <= s.length <= 104
s 仅由括号 '()[]{}' 组成
通过次数781,846提交次数1,757,186

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
	bool isValid(string s)
	{
		if (s.empty() || s.size() == 1)
		{
			return false;
		}

		stack<char> result;

		for (auto i = 0; i < s.size(); i++)
		{
			auto c = s[i];
			if (c == '{' || c == '[' || c == '(')
			{
				result.push(c);
			}
			else
			{
				if (result.size() > 0)
				{
					auto top = result.top();
					if ((top == '[' && c == ']')
						|| (top == '{' && c == '}')
						|| (top == '(' && c == ')'))
					{
						result.pop();
						continue;
					}
				}
				return false;
			}
		}

		return result.empty();
	}
};

int main()
{
	Solution s;

	auto a = s.isValid(")() {}");

    std::cout << "Hello World!\n";
}

