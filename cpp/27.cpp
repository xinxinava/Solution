//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int len = 0;
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
		if (val != (*i)) { 
			nums[len] = *i;
			len++;
		}
	}
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++) 
		cout << *i << " ";
	cout << endl;
	return len;
}
//
//int main()
//{
//	vector<int> v;
//	int val;
//	int x;
//	while (cin >> x && x >= 0) {
//		v.push_back(x);
//	}
//
//	cout << "��Ҫ�Ƴ�������" << endl;
//	cin >> val;
//
//	cout << removeElement(v, val);
//
//	return 0;
//}