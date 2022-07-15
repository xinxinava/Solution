//实现 strStr() 函数。
//
//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置(从0开始)。
//如果不存在，则返回 - 1。

#include<iostream>
#include<string>
using namespace std;

//剪枝，因为字符串可能会很长，容易造成超时，将不必要的分支排除可以节省时间

int strStr(string haystack, string needle) {
	int lenh = haystack.length();
	int lenn = needle.length();
	if (lenn == 0)
		return 0;
	for (int i = 0; i < lenh; i++) {
		if (i + lenn > lenh)
			return -1;
		if (haystack[i] == needle[0]) {
			int j;
			for (j = 1; j < lenn; j++) {
				if (haystack[i + j] != needle[j])
					break;
			}
			if (j == lenn)
				return i;
		}
	}
	return -1;
}

//int main()
//{
//	string s1, s2;
//	while (cin >> s1 && cin >> s2) {
//		cout << strStr(s1, s2) << endl;
//	}
//	return 0;
//}