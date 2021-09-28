// reverseList.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
 

示例 1：


输入：head = [1,2,3,4,5]
输出：[5,4,3,2,1]
示例 2：


输入：head = [1,2]
输出：[2,1]
示例 3：

输入：head = []
输出：[]
 

提示：

链表中节点的数目范围是 [0, 5000]
-5000 <= Node.val <= 5000
 

进阶：链表可以选用迭代或递归方式完成反转。你能否用两种方法解决这道题？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-linked-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>
#include <stack>

//  Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        std::stack<ListNode*> listNodeStack;

        ListNode* currentPtr = head;
        while (currentPtr != nullptr)
        {
            listNodeStack.push(currentPtr);
            currentPtr = currentPtr->next;
        }

        ListNode* reversedList = new ListNode(0);
        currentPtr = reversedList;
        while (!listNodeStack.empty())
        {
			ListNode* t = listNodeStack.top();
			listNodeStack.pop();
			t->next = nullptr;

			currentPtr->next = t;
			currentPtr = currentPtr->next;
        }

        return reversedList->next;
    }
    
    ListNode* reverseList2(ListNode* head)
    {
        ListNode* prePtr = nullptr;
        ListNode* currentPtr = head;

        while (currentPtr != nullptr)
        {
            ListNode* nextPtr = currentPtr->next;
            currentPtr->next = prePtr;
            prePtr = currentPtr;
            currentPtr = nextPtr;
        }

        return prePtr;
    }
};

int main()
{
    Solution s;

    ListNode* head = new ListNode(0);
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);

    head->next = a;
    a->next = b;
    b->next = c;

    auto r = s.reverseList2(head);

    std::cout << "Hello World!\n";
}
