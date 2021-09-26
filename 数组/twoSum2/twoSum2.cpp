// twoSum2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) 
	{
		for (auto i = 0; i < numbers.size(); i++)
		{
			for (auto j = i + 1; j < numbers.size(); j++)
			{
				if (numbers[i] + numbers[j] == target)
				{
					return vector<int>{i + 1, j + 1};
				}
			}
		}

		return vector<int>{0};
	}
};

int main()
{
	Solution s;

	vector<int> t{0,0,3,4};
	auto a = s.twoSum(t, 0);

    std::cout << "Hello World!\n";
}

