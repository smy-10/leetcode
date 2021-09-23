// plusOne.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

 

示例 1：

输入：digits = [1,2,3]
输出：[1,2,4]
解释：输入数组表示数字 123。
示例 2：

输入：digits = [4,3,2,1]
输出：[4,3,2,2]
解释：输入数组表示数字 4321。
示例 3：

输入：digits = [0]
输出：[1]
 

提示：

1 <= digits.length <= 100
0 <= digits[i] <= 9

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/plus-one
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

https://leetcode-cn.com/problems/plus-one/
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits)
	{
		if (digits.empty())
		{
			return digits;
		}

		int tailIndex = digits.size() - 1;

		if (digits[tailIndex] < 9)
		{
			digits[tailIndex] += 1;
		}
		else
		{
			bool canPlusOne = true;
			for (auto i = tailIndex; i >= 0; i--)
			{
				if (digits[i] == 9 && canPlusOne)
				{
					canPlusOne = true;
					digits[i] = 0;
				}
				else
				{
					if (canPlusOne)
					{
						digits[i] += 1;
						canPlusOne = false;
					}
				}
			}
		}

		if (digits[0] == 0)
		{
			digits.insert(digits.begin(), 1);
		}

		return digits;
	}
};

int main()
{
	Solution s;
	vector<int> t{ 9,9,9,9 };
	auto a = s.plusOne(t);

    std::cout << "Hello World!\n";
}