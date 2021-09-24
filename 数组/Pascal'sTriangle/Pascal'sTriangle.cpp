// Pascal'sTriangle.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和。



 

示例 1:

输入: numRows = 5
输出: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
示例 2:

输入: numRows = 1
输出: [[1]]
 

提示:

1 <= numRows <= 30

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/pascals-triangle
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) 
	{
		vector<vector<int>> result;
		for (auto i = 0; i < numRows; i++)
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

		return result;
	}
};

int main()
{
	Solution s;
	s.generate(5);

    std::cout << "Hello World!\n";
}

