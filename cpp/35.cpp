//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
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
//		cout << "目标值" << endl;
//		cin >> t;
//		cout << searchInsert(v, t) << endl;
//		v.clear();
//	}
//	return 0;
//}