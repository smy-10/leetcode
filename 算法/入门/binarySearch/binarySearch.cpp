// binarySearch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。


示例 1:

输入: nums = [-1,0,3,5,9,12], target = 9
输出: 4
解释: 9 出现在 nums 中并且下标为 4
示例 2:

输入: nums = [-1,0,3,5,9,12], target = 2
输出: -1
解释: 2 不存在 nums 中因此返回 -1
 

提示：

你可以假设 nums 中的所有元素是不重复的。
n 将在 [1, 10000]之间。
nums 的每个元素都将在 [-9999, 9999]之间。
通过次数310,240提交次数560,744

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-search
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target)
	{
		if (nums.empty())
		{
			return -1;
		}

		int lowIndex = 0;
		int heighIndex = nums.size() - 1;
		
		while (lowIndex <= heighIndex)
		{		
			int middleIndex = (heighIndex - lowIndex) / 2 + lowIndex;
			int num = nums[middleIndex];
			if (num == target)
			{
				return middleIndex;
			}
			else if (num < target)
			{
				lowIndex = middleIndex + 1;
			}
			else
			{
				heighIndex = middleIndex - 1;
			}
		}

		return -1;
	}
};

int main()
{
	Solution s;
	
	vector<int> vec = {5};
	auto a = s.search(vec, 5);
    std::cout << "Hello World!\n";
}


