// removeNthFromEnd.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
19. 删除链表的倒数第 N 个结点
给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

进阶：你能尝试使用一趟扫描实现吗？



示例 1：


输入：head = [1,2,3,4,5], n = 2
输出：[1,2,3,5]
示例 2：

输入：head = [1], n = 1
输出：[]
示例 3：

输入：head = [1,2], n = 1
输出：[1]


提示：

链表中结点的数目为 sz
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
通过次数554,781提交次
*/
#include <iostream>

/**
 * Definition for singly-linked list.
 * */
 struct ListNode {
 int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
 ListNode(int x) : val(x), next(nullptr) {}
 ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int length = 0;

        ListNode* t = head;
        while (t != nullptr)
        {
            ++length;
            t = t->next;
        }
        int removeIndex = length - n + 1;
        
        ListNode* result = new ListNode(0, head);
        t = result;
        
        for (auto i = 1; i < removeIndex; i++)
        {
            t = t->next;
        }
        t->next = t->next->next;

        return result->next;
    }
};

int main()
{
    ListNode a(1);
    ListNode a1(2);
    ListNode a2(3);
    ListNode a3(4);
    ListNode a4(5);

    a.next = &a1;
    //a1.next = &a2;
   // a2.next = &a3;
   // a3.next = &a4;
    Solution s;
    auto t = s.removeNthFromEnd(&a, 2);

    std::cout << "Hello World!\n";
}