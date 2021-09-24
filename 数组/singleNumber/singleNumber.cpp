// singleNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* 136. 只出现一次的数字
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:

输入: [2,2,1]
输出: 1
示例 2:

输入: [4,1,2,1,2]
输出: 4

https://leetcode-cn.com/problems/single-number/
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) 
	{
		if (nums.size() == 0)
		{
			return 0;
		}

		if (nums.size() < 3)
		{
			return nums[0];
		}

		sort(nums.begin(), nums.end());

		int num = nums[nums.size() - 1];
		for (auto i = 1; i < nums.size() - 1; i++)
		{
			if (nums[i] != nums[i - 1] && nums[i] != nums[i+1])
			{
				return nums[i];
			}
		}

		if (nums[0] != nums[1])
		{
			num = nums[0];
		}

		return num;
	}
};

int main()
{
	Solution s;
	vector<int> t{ 1,2,3,3,6,6,2 };
	auto a = s.singleNumber(t);
    std::cout << "Hello World!\n";
}

