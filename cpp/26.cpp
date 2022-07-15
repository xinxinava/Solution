#include<iostream>
#include<vector>
using namespace std;

//一次通过 开心
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
//	while (cin >> x && x >= 0) {//当数据小于0时停止输入，这仅仅是为了找一个退出循环的条件，其实数据可以是负数
//		v.push_back(x);
//	}
//	cout << removeDuplicates(v);
//
//	return 0;
//
//}