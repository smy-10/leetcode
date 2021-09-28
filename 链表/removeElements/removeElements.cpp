// removeElements.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
 

示例 1：


输入：head = [1,2,6,3,4,5,6], val = 6
输出：[1,2,3,4,5]
示例 2：

输入：head = [], val = 1
输出：[]
示例 3：

输入：head = [7,7,7,7], val = 7
输出：[]
 

提示：

列表中的节点数目在范围 [0, 104] 内
1 <= Node.val <= 50
0 <= val <= 50

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-linked-list-elements
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <iostream>


// Definition for singly-linked list.
 struct ListNode {
 int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
 ListNode(int x) : val(x), next(nullptr) {}
 ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* result = new ListNode(0, head);
        ListNode* currentPtr = result;

        while (currentPtr->next != nullptr)
        {
            if (currentPtr->next->val == val)
            {
                currentPtr->next = currentPtr->next->next;
            }
            else
            {
                currentPtr = currentPtr->next;
            }
        }

        return result->next;
    }
};

int main()
{
    Solution s;

    ListNode* head = new ListNode(1);
    ListNode* a1 = new ListNode(2);
    ListNode* a2 = new ListNode(3);
    ListNode* a3 = new ListNode(2);
    ListNode* a4 = new ListNode(2);
    ListNode* a5 = new ListNode(2);

    head->next = a1;
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;

    auto a = s.removeElements(head, 2);
    std::cout << "Hello World!\n";
}
