// firstUniqChar.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。

 

示例：

s = "leetcode"
返回 0

s = "loveleetcode"
返回 2
 

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/first-unique-character-in-a-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
#include <iostream>

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		static struct customStruct
		{
			char c;
			int index = 0;
			int pos = 0;
			customStruct() {}
			customStruct(const char& c, int index, int pos) :c(c), index(index), pos(pos){}
		};

		vector<customStruct> vec;
		customStruct t;
		int pos = 0;
		for (const auto& c : s)
		{
			auto it = std::find_if(vec.begin(), vec.end(),
				[=](const customStruct& param)-> bool
				{
					return c == param.c;
				});

			if (vec.end() == it)
			{
				vec.push_back(customStruct(c, 1, pos));
			}
			else
			{
				(customStruct*)(*it).index++;			
			}

			pos++;
		}

		for (auto& v : vec)
		{
			if (v.index == 1)
			{			
				return v.pos;
			}
		}

		return -1;
	}
};

int main()
{
	Solution s;
	auto a = s.firstUniqChar("loveleetcode");

    std::cout << "Hello World!\n";
}


