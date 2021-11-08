// isPowerOfTwo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给你一个整数 n，请你判断该整数是否是 2 的幂次方。如果是，返回 true ；否则，返回 false 。

如果存在一个整数 x 使得 n == 2x ，则认为 n 是 2 的幂次方。

 

示例 1：

输入：n = 1
输出：true
解释：20 = 1
示例 2：

输入：n = 16
输出：true
解释：24 = 16
示例 3：

输入：n = 3
输出：false
示例 4：

输入：n = 4
输出：true
示例 5：

输入：n = 5
输出：false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/power-of-two
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>

class Solution {
public:
	bool isPowerOfTwo(int n)
	{
		if (n == 1 || n == 2)
			return true;
		
		while (n > 2)
		{
			int t = n % 2;
			if (t != 0)
			{
				return false;
			}
			n = n / 2;
			
			if (n == 2)
				return true;
		}

		return false;
	}
};

int main()
{
	Solution s;
	auto a  = s.isPowerOfTwo(2);

    std::cout << "Hello World!\n";
}
