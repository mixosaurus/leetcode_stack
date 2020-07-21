#include <iostream>
#include "solution.h"

using namespace std;

ListNode* Solution::oddEvenList(ListNode* head) {
	if (head == nullptr) {
		return nullptr;
	}
	ListNode* odd = head;
	//����������ͷ�ڵ�
	ListNode* oddHead = odd;
	ListNode* even = head->next;
	//ż��������ͷ�ڵ�
	ListNode* evenHead = even;
	//ѭ������Ϊ��Ϊԭ������Ϊ������ż���������
	//even!=nullptr��Ӧ����Ϊż�������even->next!=nullptr��Ӧ����Ϊ�������
	while (even!= nullptr && even->next!= nullptr) {
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	//����һ��ѭ��ִ�����λ��ֲ��������odd����even��ǰ��
	odd->next = evenHead;
	return head;
}
