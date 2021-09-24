// Pascal'sTriangle2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和。



 

示例 1:

输入: rowIndex = 3
输出: [1,3,3,1]
示例 2:

输入: rowIndex = 0
输出: [1]
示例 3:

输入: rowIndex = 1
输出: [1,1]
 

提示:

0 <= rowIndex <= 33
 

进阶：

你可以优化你的算法到 O(rowIndex) 空间复杂度吗？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/pascals-triangle-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex)
	{
		rowIndex++;

		vector<vector<int>> result;
		for (auto i = 0; i < rowIndex; i++)
		{
			vector<int> vec;
			for (auto j = 0; j < i + 1; j++)
			{
				if (j == 0 || j == i)
				{
					vec.push_back(1);
				}
				else
				{
					vec.push_back(result[i - 1][j - 1] + result[i - 1][j]);
				}
			}
			result.push_back(vec);
		}

		return result[rowIndex - 1];
	}
};

int main()
{
	Solution s;
	auto a = s.getRow(0);

	std::cout << "Hello World!\n";
}

