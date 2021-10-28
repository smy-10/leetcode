// twoSum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

 

示例 1：

输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
示例 2：

输入：nums = [3,2,4], target = 6
输出：[1,2]
示例 3：

输入：nums = [3,3], target = 6
输出：[0,1]
 

提示：

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
只会存在一个有效答案
进阶：你可以想出一个时间复杂度小于 O(n2) 的算法吗？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>

#include <vector>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
#ifdef _AA
		for (auto i = 0; i < nums.size(); i++)
		{
			for (auto j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					return vector<int>{i, j};
				}
			}
		}
#endif // 0

		unordered_map<int, int> hashTable;

		for (auto i = 0; i < nums.size(); i++)
		{
			auto it = hashTable.find(target - nums[i]);
			if (it != hashTable.end())
			{
				return vector<int>{it->second, i};
			}
			hashTable[nums[i]] = i;
		}

		return vector<int>{};
	}
};

int main()
{
	Solution s;

	vector<int> vec{1,3,5,6,4};
	auto a = s.twoSum(vec, 8);

    std::cout << "Hello World!\n";
}

