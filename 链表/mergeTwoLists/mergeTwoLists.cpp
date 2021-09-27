// mergeTwoLists.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

 

示例 1：


输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]
示例 2：

输入：l1 = [], l2 = []
输出：[]
示例 3：

输入：l1 = [], l2 = [0]
输出：[0]
 

提示：

两个链表的节点数目范围是 [0, 50]
-100 <= Node.val <= 100
l1 和 l2 均按 非递减顺序 排列
通过次数713,935提交次数1,070,051

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-sorted-lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* mergedList = new ListNode();
        ListNode* currentPtr = mergedList;
        
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val)
            {
                currentPtr->next = l1;
                l1 = l1->next;
            }
            else
            {
                currentPtr->next = l2;
                l2 = l2->next;
            }
            currentPtr = currentPtr->next;
        }

        if (l1 == nullptr)
        {
            currentPtr->next = l2;
        }
        else
        {
            currentPtr->next = l1;
        }

        return mergedList->next;
    }
};

int main()
{
    Solution s;

    ListNode* aHead = new ListNode(1);
    ListNode* a1 = new ListNode(2);
    ListNode* a2 = new ListNode(3);
    ListNode* a3 = new ListNode(5);

    aHead->next = a1;
    a1->next = a2;
    a2->next = a3;

	ListNode* bHead = new ListNode(1);
	ListNode* b1 = new ListNode(3);
	ListNode* b2 = new ListNode(6);
	ListNode* b3 = new ListNode(9);

	bHead->next = b1;
	b1->next = b2;
	b2->next = b3;

    auto a = s.mergeTwoLists(aHead, bHead);
    std::cout << "Hello World!\n";
}
