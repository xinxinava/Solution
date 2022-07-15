//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

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
//	cout << "需要移除的数据" << endl;
//	cin >> val;
//
//	cout << removeElement(v, val);
//
//	return 0;
//}