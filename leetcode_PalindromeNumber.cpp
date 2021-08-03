// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "math.h"
#include <vector>
#include <string>

/*

回文数
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。

 

示例 1：

输入：x = 121
输出：true
示例 2：

输入：x = -121
输出：false
解释：从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3：

输入：x = 10
输出：false
解释：从右向左读, 为 01 。因此它不是一个回文数。
示例 4：

输入：x = -101
输出：false
 

提示：

-231 <= x <= 231 - 1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution {
public:
	bool isPalindrome(int x) {

		static int rangeValue = pow(2, 31) - 1;
		if (x <= -rangeValue || x >= rangeValue - 1)
		{
			return false;
		}

        std::string numStr = std::to_string(x);
        
        if (numStr.empty())
        {
            return false;
        }
            
        std::vector<char> leftVec;
        std::vector<char> rightVec;

        for (auto i = 0; i < numStr.size(); i++)
        {
            if (i < numStr.size() / 2)
            {
                leftVec.push_back(numStr[i]);
            }
            else if(i == numStr.size() / 2 && numStr.size() % 2 != 0)
            {
                continue;
            }
            else
            {
                rightVec.push_back(numStr[i]);
            }
        }

        if (leftVec.size() != rightVec.size())
        {
            return false;
        }

        for (auto i = 0; i < leftVec.size(); i++)
        {
            if (leftVec[i] != rightVec[leftVec.size()- 1 - i])
            {
                return false;
            }
        }

        return true;

	}
};

int main()
{
    Solution s;
    bool r = s.isPalindrome(-101);

    std::cout << "Hello World!:" << r << std::endl;
    
    system("pause");
}

