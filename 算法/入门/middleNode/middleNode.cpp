// middleNode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
给定一个头结点为 head 的非空单链表，返回链表的中间结点。

如果有两个中间结点，则返回第二个中间结点。

 

示例 1：

输入：[1,2,3,4,5]
输出：此列表中的结点 3 (序列化形式：[3,4,5])
返回的结点值为 3 。 (测评系统对该结点序列化表述是 [3,4,5])。
注意，我们返回了一个 ListNode 类型的对象 ans，这样：
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
示例 2：

输入：[1,2,3,4,5,6]
输出：此列表中的结点 4 (序列化形式：[4,5,6])
由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。
 

提示：

给定链表的结点数介于 1 和 100 之间。
通过次数162,664提交次数230,370

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/middle-of-the-linked-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
	ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr)
        {
            length++;
            temp = temp->next;
        }

        int middleIndex = ceil(length / 2);

        int index = 0;
        while (head != nullptr)
        {   
            if (index == middleIndex)
            {
                break;
            }
            ++index;
            head = head->next;
        }
        return head;
	}
};

int main()
{
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    Solution s;
    s.middleNode(&a);

    std::cout << "Hello World!\n";
}
