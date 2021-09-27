// deleteDuplicates.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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
