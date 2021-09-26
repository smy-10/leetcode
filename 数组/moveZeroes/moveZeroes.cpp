// moveZeroes.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*

给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]
输出: [1,3,12,0,0]
说明:

必须在原数组上操作，不能拷贝额外的数组。
尽量减少操作次数。
通过次数483,245提交次数757,121

https://leetcode-cn.com/problems/move-zeroes/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) 
	{
		if (nums.empty())
		{
			return;
		}

		int i = 0;
		int j = 0;
	
		while (j < nums.size())
		{
			if (nums[j] != 0)
			{
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
				i++;
			}
			j++;
		}
	}
};

int main()
{
	Solution s;
	vector<int> t{ 1};
	s.moveZeroes(t);
	t; // 8,1,6,2,4,0,0
    std::cout << "Hello World!\n";
}

