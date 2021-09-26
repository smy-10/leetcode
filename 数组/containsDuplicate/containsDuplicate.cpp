// containsDuplicate.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个整数数组，判断是否存在重复元素。

如果存在一值在数组中出现至少两次，函数返回 true 。如果数组中每个元素都不相同，则返回 false 。

 

示例 1:

输入: [1,2,3,1]
输出: true
示例 2:

输入: [1,2,3,4]
输出: false
示例 3:

输入: [1,1,1,3,3,4,3,2,4,2]
输出: true


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) 
	{
		if (nums.empty())
		{
			return false;
		}

		vector<int> result;

		for (auto i = 0; i < nums.size(); i++)
		{
			auto iter = std::find(result.begin(), result.end(), nums[i]);
			if (iter == result.end())
			{
				result.push_back(nums[i]);
			}
			else
			{
				return true;
			}
		}

		return false;
	}
};

int main()
{
	Solution s;
	vector<int> t{ 1,5,2,3,4 };
	auto a = s.containsDuplicate(t);

    std::cout << "Hello World!\n";
}
