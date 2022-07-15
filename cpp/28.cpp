//ʵ�� strStr() ������
//
//����һ�� haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ��(��0��ʼ)��
//��������ڣ��򷵻� - 1��

#include<iostream>
#include<string>
using namespace std;

//��֦����Ϊ�ַ������ܻ�ܳ���������ɳ�ʱ��������Ҫ�ķ�֧�ų����Խ�ʡʱ��

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