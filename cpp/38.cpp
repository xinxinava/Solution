//一个让人摸不到头脑的报数

//报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。其前五项如下：
//
//1.     1
//2.     11
//3.     21
//4.     1211
//5.     111221
//1 被读作  "one 1"  ("一个一"), 即 11。
//11 被读作 "two 1s" ("两个一"）, 即 21。
//	21 被读作 "one 2", "one 1" （"一个二", "一个一"), 即 1211。
//
//	给定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。
//
//	注意：整数顺序将表示为一个字符串。

#include<iostream>
#include<string>
using namespace std;

//参靠别人的，看着很舒服
string countAndSay(int n) {
	string s = "1";
	for (int i = 1; i < n; i++) {
		int len = s.length();
		int count = 0;
		char c = s[0];
		string temp = "";
		for (int j = 0; j < len; j++) {
			if (s[j] != c) {
				temp += to_string(count) + c;
				c = s[j];
				count = 1;
			}
			else
				count++;
			if (j == len - 1)
				temp += to_string(count) + c;
		}
		s = temp;
		//cout << "s[" << i + 1 << "]:" << s << endl;
	}
	return s;
}

//我自己写的，虽然通过了，但感觉自己写成了一坨，明显可以简化
//string countAndSay(int n) {
//	string s1 = "1";
//	string s2 = "11";
//	if (n == 1)
//		return s1;
//	if (n == 2)
//		return s2;
//	string s = s2;
//	for (int i = 3; i <= n; i++) {
//		int len = s.length();
//	//	cout << "len:" << len << endl;
//		int count = 1;
//		string m = "";
//
//		if (s[len - 1] == s[len - 2]) {
//			for (int j = 1; j < len; j++) {
//
//				if (s[j - 1] == s[j] && j != len - 1)
//					count++;
//				else if (s[j - 1] != s[j] && j == len - 1)
//				{
//					char se1[2] = { s[j - 1],0 };
//					string se2 = se1;
//					m = m + to_string(count) + se2;
//					count = 1;
//				}
//				else if (j == len - 1) {
//					count++;
//					char se1[2] = { s[j - 1],0 };
//					string se2 = se1;
//					m = m + to_string(count) + se2;
//					count = 1;
//				}
//				else {
//					char se1[2] = { s[j - 1],0 };
//					string se2 = se1;
//					m = m + to_string(count) + se2;
//					count = 1;
//				}
//			}
//		}
//		else {
//			for (int j = 1; j < len; j++) {
//
//				if (s[j - 1] == s[j] && j != len - 1)
//					count++;
//				else if (s[j - 1] != s[j] && j == len - 1)
//				{
//					char se1[2] = { s[j - 1],0 };
//					string se2 = se1;
//					m = m + to_string(count) + se2;
//					count = 1;
//				}
//				else if (j == len - 1) {
//					count++;
//					char se1[2] = { s[j - 1],0 };
//					string se2 = se1;
//					m = m + to_string(count) + se2;
//					count = 1;
//				}
//				else {
//					char se1[2] = { s[j - 1],0 };
//					string se2 = se1;
//					m = m + to_string(count) + se2;
//					count = 1;
//				}
//			}
//			m = m + "1" + s[len - 1];
//		}
//		s = m;
//		//cout << "s[" << i << "]:" << s << endl;
//	}
//	return s;
//}

int main()
{
	int n;
	while (cin >> n) {
		cout << countAndSay(n) << endl;
		cout << "继续输入：" << endl;
	}
	return 0;
}