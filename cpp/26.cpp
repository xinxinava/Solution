#include<iostream>
#include<vector>
using namespace std;

//һ��ͨ�� ����
int removeDuplicates(vector<int>& nums) {
	int numsLen = nums.size();
	if (numsLen == 0 || numsLen == 1)
		return numsLen;
	int len = 1;
	for (vector<int>::iterator i = nums.begin(); i != nums.end()-1; i++) {
		if (*i != *(i + 1)) {
			nums[len] = *(i + 1 );
			len++;
		}
	}
	//for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
	//	cout << *i << " ";
	//}
	//cout << endl;
	return len;
}
//11112222
//int main()
//{
//	vector<int> v;
//	int x;
//	while (cin >> x && x >= 0) {//������С��0ʱֹͣ���룬�������Ϊ����һ���˳�ѭ������������ʵ���ݿ����Ǹ���
//		v.push_back(x);
//	}
//	cout << removeDuplicates(v);
//
//	return 0;
//
//}