// SearchInsertPosition.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。

 

示例 1:

输入: nums = [1,3,5,6], target = 5
输出: 2
示例 2:

输入: nums = [1,3,5,6], target = 2
输出: 1
示例 3:

输入: nums = [1,3,5,6], target = 7
输出: 4
示例 4:

输入: nums = [1,3,5,6], target = 0
输出: 0
示例 5:

输入: nums = [1], target = 0
输出: 0
 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/search-insert-position
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target)
	{
		int low = 0;
		int heigh = nums.size() - 1;

		while (low <= heigh)
		{
			int middle = (heigh - low) / 2 + low;

			if (nums[middle] == target)
			{
				return middle;
			}
			else if (nums[middle] < target)
			{
				low = middle + 1;
			}
			else
			{
				heigh = middle - 1;
			}
		}

		return low;
	}
};


int main()
{
	Solution s;
	vector<int> vec = { 1,3,5,6 };
	auto a = s.searchInsert(vec, 2);

    std::cout << "Hello World!\n";
}

