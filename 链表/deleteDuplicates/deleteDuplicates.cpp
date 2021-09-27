// deleteDuplicates.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
存在一个按升序排列的链表，给你这个链表的头节点 head ，请你删除所有重复的元素，使每个元素 只出现一次 。

返回同样按升序排列的结果链表。

 

示例 1：


输入：head = [1,1,2]
输出：[1,2]
示例 2：


输入：head = [1,1,2,3,3]
输出：[1,2,3]
 

提示：

链表中节点数目在范围 [0, 300] 内
-100 <= Node.val <= 100
题目数据保证链表已经按升序排列

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>


//Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* currentPtr = head;    

        while (currentPtr != nullptr && currentPtr->next != nullptr)
        {
            if (currentPtr->val == currentPtr->next->val)
            {
                //skip
                currentPtr->next = currentPtr->next->next;
            }
            else
            {
                currentPtr = currentPtr->next;
            }
        }

        return head;
	}
};

int main()
{
    ListNode* head = new ListNode(1);
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    
    head->next = a;
    a->next = b;

    Solution s;
   auto r = s.deleteDuplicates(head);

    std::cout << "Hello World!\n";
}
