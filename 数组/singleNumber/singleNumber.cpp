// singleNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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

