// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "math.h"
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <functional>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};


	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		std::vector<ListNode*> vec;
		while (l1)
		{
			vec.push_back(l1);
			l1 = l1->next;
		}
		while (l2)
		{
			vec.push_back(l2);
			l2 = l2->next;
		}

		if (vec.empty())
			return nullptr;

		std::sort(vec.begin(), vec.end(), [](ListNode* a, ListNode* b)
			{
				return a->val < b->val;
			});

		ListNode* head = vec[0];
		head->next = nullptr;
		for (auto i = 1; i < vec.size(); i++)
		{
			ListNode* p = new ListNode();
			p = head;

			while (p->next != nullptr)
				p = p->next;

			vec[i]->next = nullptr;
			p->next = vec[i];
		}
		return head;
};

int main()
{
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(4);


	ListNode* l4 = new ListNode(1);
	ListNode* l5 = new ListNode(3);
	ListNode* l6 = new ListNode(4);


	l1->next = l2;
	l2->next = l3;
	
	l4->next = l5;
	l5->next = l6;

	mergeTwoLists(l1, l4);

    
    system("pause");
}

