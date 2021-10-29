// intersect.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*
给定两个数组，编写一个函数来计算它们的交集。

 

示例 1：

输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2,2]
示例 2:

输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[4,9]
 

说明：

输出结果中每个元素出现的次数，应与元素在两个数组中出现次数的最小值一致。
我们可以不考虑输出结果的顺序。
进阶：

如果给定的数组已经排好序呢？你将如何优化你的算法？
如果 nums1 的大小比 nums2 小很多，哪种方法更优？
如果 nums2 的元素存储在磁盘上，内存是有限的，并且你不能一次加载所有的元素到内存中，你该怎么办？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/intersection-of-two-arrays-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
	{
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());

		int nums1Index = 0;
		int nums2Index = 0;

		vector<int> result;
		while (nums1Index < nums1.size() && nums2Index < nums2.size())
		{
			if (nums1[nums1Index] < nums2[nums2Index])
			{
				nums1Index++;
			}
			else if (nums1[nums1Index] > nums2[nums2Index])
			{
				nums2Index++;
			}
			else
			{
				result.push_back(nums1[nums1Index]);
				nums1Index++;
				nums2Index++;
			}
		}

		return result;
	}
};

int main()
{
	Solution s;
	vector<int> nums1 = { 2 };
	vector<int> nums2 = { 1,2,2,1 };
	auto a = s.intersect(nums1, nums2);

    std::cout << "Hello World!\n";
}

