// romanToInt.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。

 

示例 1:

输入: "III"
输出: 3
示例 2:

输入: "IV"
输出: 4
示例 3:

输入: "IX"
输出: 9
示例 4:

输入: "LVIII"
输出: 58
解释: L = 50, V= 5, III = 3.
示例 5:

输入: "MCMXCIV"
输出: 1994
解释: M = 1000, CM = 900, XC = 90, IV = 4.
 

提示：

1 <= s.length <= 15
s 仅含字符 ('I', 'V', 'X', 'L', 'C', 'D', 'M')
题目数据保证 s 是一个有效的罗马数字，且表示整数在范围 [1, 3999] 内
题目所给测试用例皆符合罗马数字书写规则，不会出现跨位等情况。
IL 和 IM 这样的例子并不符合题目要求，49 应该写作 XLIX，999 应该写作 CMXCIX 。
关于罗马数字的详尽书写规则，可以参考 罗马数字 - Mathematics 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/roman-to-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>
using namespace std;

class Solution {
public:

	void strReplace(string& str, const string& oldStr, const string& newStr)
	{
		for (string::size_type pos(0); pos != string::npos; pos += newStr.length())
		{
			pos = str.find(oldStr, pos);
			if (pos != string::npos)
				str.replace(pos, oldStr.length(), newStr);
			else
				break;
		}
	}

	int romanToInt(string s)
	{
		if (s.empty())
		{
			return 0;
		}

		strReplace(s, "IV", "a");
		strReplace(s, "IX", "b");
		strReplace(s, "XL", "c");
		strReplace(s, "XC", "d");
		strReplace(s, "CD", "e");
		strReplace(s, "CM", "f");

		int result = 0;
		for (auto i = 0; i < s.size(); i++)
		{
			if (s[i] == 'I')
			{
				result += 1;
				continue;
			}
			else if (s[i] == 'V')
			{
				result += 5;
				continue;
			}
			else if (s[i] == 'X')
			{
				result += 10;
				continue;
			}
			else if (s[i] == 'L')
			{
				result += 50;
				continue;
			}
			else if (s[i] == 'C')
			{
				result += 100;
				continue;
			}
			else if (s[i] == 'D')
			{
				result += 500;
				continue;
			}
			else if (s[i] == 'M')
			{
				result += 1000;
				continue;
			}
			else if (s[i] == 'a')
			{
				result += 4;
				continue;
			}
			else if (s[i] == 'b')
			{
				result += 9;
				continue;
			}
			else if (s[i] == 'c')
			{
				result += 40;
				continue;
			}
			else if (s[i] == 'd')
			{
				result += 90;
				continue;
			}
			else if (s[i] == 'e')
			{
				result += 400;
				continue;
			}
			else if (s[i] == 'f')
			{
				result += 900;
				continue;
			}
		}
		return result;
	}
};

int main()
{
	Solution s;
	auto a = s.romanToInt("LVIII");

    std::cout << "Hello World!\n";
}

