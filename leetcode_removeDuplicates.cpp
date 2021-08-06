// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "math.h"
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <functional>


int removeDuplicates(std::vector<int>& nums) {

    std::sort(nums.begin(), nums.end());

    auto it = std::unique(nums.begin(), nums.end());

    nums.erase(it, nums.end());

    return nums.size();
}


int main()
{
    system("pause");
}

