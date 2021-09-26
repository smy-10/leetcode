// merge.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
	{
		for (auto i = 0; i < n; i++)
		{
			nums1[m + i] = nums2[i];
		}

		sort(nums1.begin() ,nums1.end());
	}
};

int main()
{
	Solution s;
	vector<int> num1{1,2,3,0,0,0};
	vector<int> nnum2{2,5,6};
	s.merge(num1, 3, nnum2, 3);

    std::cout << "Hello World!\n";
}


