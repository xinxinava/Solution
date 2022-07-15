#include<iostream>
using namespace std;


//main�����ƺ�д���ˣ�һʱ��������ͷ�ԣ�������Ҫ�ĺ����ƺ�д���ˣ�LeetCode����ͨ��
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
	//pָ��l1����l2�е�һ����С���Ǹ���fָ��Ҫ���ص������ͷ�ڵ㣬rָ�������β�ڵ㣬rt�൱�ڰ��˹�
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
//	//ͷ�巨������������0��0���½���
//	ListNode *l1 = new ListNode(0);
//	ListNode *l2 = new ListNode(0);
//	int x;
//	cout << "l1�е���������" << endl;
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
//	cout << "l2�е���������" << endl;
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