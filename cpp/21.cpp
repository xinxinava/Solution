#include<iostream>
using namespace std;


//main函数似乎写错了，一时间摸不到头脑，但是主要的函数似乎写对了，LeetCode上已通过
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (l1 == NULL && l2 == NULL)
		return NULL;
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;
	//p指向l1或者l2中第一个数小的那个，f指向要返回的链表的头节点，r指向链表的尾节点，rt相当于搬运工
	ListNode *f = new ListNode(0);
	ListNode *r = f, *rt = NULL;
	ListNode *p = l1, *q = l2;

	while (p != NULL && q != NULL) {
		if (p->val < q->val) {
			rt = p;
			r->next = rt;
			r = rt;
			p = p->next;
		}
		else {
			rt = q;
			r->next = rt;
			r = rt;
			q = q->next;
		}
		
	}
	r->next = NULL;
	if (p != NULL)
		r->next = p;
	if (q != NULL)
		r->next = q;
	return f->next;
}

//int main()
//{
//	//头插法建立链表输入0及0以下结束
//	ListNode *l1 = new ListNode(0);
//	ListNode *l2 = new ListNode(0);
//	int x;
//	cout << "l1中的数据输入" << endl;
//	while (cin >> x) {
//
//		if (x > 0) {
//			ListNode *s = new ListNode(x);
//			s->next = l1->next;
//			l1->next = s;
//		}
//		else {
//			break;
//		}
//	}
//	int y;
//	cout << "l2中的数据输入" << endl;
//	while (cin >> y) {
//		if (y > 0) {
//			ListNode *s = new ListNode(y);
//			s->next = l2->next;
//			l2->next = s;
//		}
//		else {
//			break;
//		}
//	}
//	ListNode *f = mergeTwoLists(l1->next, l2->next);
//	while (f != NULL) {
//		cout << f->val << " ";
//		f = f->next;
//	}
//
//	return 0;
//}