// twoSum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		if (nums.empty())
		{
			return nums;
		}

		for (auto i = 0; i < nums.size(); i++)
		{
			for (auto j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					return vector<int> { i, j};
				}
			}
		}

		return vector<int>();
	}
};

int main()
{
	Solution s;
	vector<int> t{ 46, 9, 12, 3, 6 };
	auto a = s.twoSum(t ,15);
	std::cout << "";
}
