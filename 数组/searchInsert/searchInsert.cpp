// searchInsert.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

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
 

提示:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums 为无重复元素的升序排列数组
-104 <= target <= 104

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/search-insert-position
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

https://leetcode-cn.com/problems/search-insert-position/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) 
	{
		if (nums.size() == 0)
		{
			return 0;
		}

		vector<int> results;
		int index = 0;
		bool inserted = false;
		
		for (auto i = 0; i < nums.size(); i++)
		{
			if (nums[i] == target)
			{
				return i;
			}
			else if(nums[i] > target)
			{
				//static bool inserted = false;
				//尼玛leetcode不支持static, 我写的这个 案列是[1,3] target:2
				//本地返回1，在网页返回0
				if (inserted == false)
				{
					inserted = true;
					results.push_back(target);
					index = i;
				}
			}
			results.push_back(nums[i]);
		}

		if (target > nums[nums.size() - 1])
		{
			results.push_back(target);
			index = results.size() - 1;
		}

		nums = results;
		return index;
	}
};

int main()
{
	Solution s;
	vector<int> t { 1, 3};
	auto a =s.searchInsert(t,2);
    std::cout << "Hello World!\n";
}


