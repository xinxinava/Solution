//һ������������ͷ�Եı���

//����������һ���������У��������е�������˳����б������õ���һ��������ǰ�������£�
//
//1.     1
//2.     11
//3.     21
//4.     1211
//5.     111221
//1 ������  "one 1"  ("һ��һ"), �� 11��
//11 ������ "two 1s" ("����һ"��, �� 21��
//	21 ������ "one 2", "one 1" ��"һ����", "һ��һ"), �� 1211��
//
//	����һ�������� n��1 �� n �� 30��������������еĵ� n �
//
//	ע�⣺����˳�򽫱�ʾΪһ���ַ�����

#include<iostream>
#include<string>
using namespace std;

//�ο����˵ģ����ź����
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

//���Լ�д�ģ���Ȼͨ���ˣ����о��Լ�д����һ�磬���Կ��Լ�
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
		cout << "�������룺" << endl;
	}
	return 0;
}