// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> resultVec;
		if (nums.size() == 0)
		{
			return resultVec;
		}

		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j <= nums.size() - 1; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					resultVec.push_back(i);
					resultVec.push_back(j);
					return resultVec;
				}
			}
		}

		return resultVec;
	}
};

int main()
{
    std::cout << "Hello World!\n";
    system("pause");
}

