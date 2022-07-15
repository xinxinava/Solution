#include<iostream>
#include<string>
using namespace std;

//�����������ջ����ע����ĿҪ����ַ���Ҳ����Ч�ַ���
//ע�ⵥ���ַ��Լ�ջΪ�յ��ַ���û�б���������
//���������кܳ����ַ������������ռ���Կ���һ�㣬��Ȼͦ�˷ѿռ�

bool isValid(string s)
{
	int len = s.length();
	if (len == 0)//���ַ���������true
		return true;
	int stack[10000];
	int top = -1;
	int flag = 0;//����һ�������������Ϊ�յ����ַ���δ������ɵ����
	for (int i = 0; i < len; i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			top++;
			stack[top] = s[i];
			flag = 1;
		}
		if (s[i] == ')')
			if (top >= 0 && stack[top] == '(')
				top--;
			else {flag = 0;break;}
				
		if (s[i] == ']')
			if (top >= 0 && stack[top] == '[')
				top--;
			else { flag = 0; break; }
		if (s[i] == '}')
			if (top >= 0 && stack[top] == '{')
				top--;
			else { flag = 0; break; }
	}
	if (top == -1 && flag==1)
		return true;
	else
		return false;

}
//
//int main()
//{
//	string s;
//	while (cin >> s) 
//	{
//		cout << isValid(s) << endl;
//	}
//	return 0;
//}