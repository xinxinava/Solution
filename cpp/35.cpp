//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int len = nums.size();
	if (len == 0 || target < nums[0])
		return 0;

	int i;
	for (i = 0; i < len; i++) {
		if (target <= nums[i])
			break;
	}
	return i;
}

//int main()
//{
//	vector<int> v;
//	int t;
//	int x;
//	while (1) {
//		while (cin >> x && x >= 0) {
//			v.push_back(x);
//		}
//
//		cout << "Ŀ��ֵ" << endl;
//		cin >> t;
//		cout << searchInsert(v, t) << endl;
//		v.clear();
//	}
//	return 0;
//}