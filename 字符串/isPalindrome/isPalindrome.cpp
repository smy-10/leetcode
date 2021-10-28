// isPalindrome.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
9. 回文数
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。



示例 1：

输入：x = 121
输出：true
示例 2：

输入：x = -121
输出：false
解释：从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3：

输入：x = 10
输出：false
解释：从右向左读, 为 01 。因此它不是一个回文数。
示例 4：

输入：x = -101
输出：false


提示：

-231 <= x <= 231 - 1
*/
#include <iostream>
#include <string>

class Solution {
public:
	bool isPalindrome(int x) 
	{
		std::string numStr = std::to_string(x);

		int left = 0;
		int right = numStr.size() - 1;

		for (left; left < right; left++,right--)
		{
			if (numStr[left] != numStr[right])
			{
				return false;
			}
		}
		return true;
	}
};

int main()
{
	Solution s;
	auto a = s.isPalindrome(10101);

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
