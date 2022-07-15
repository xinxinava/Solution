#include<iostream>
#include<string>
using namespace std;

//这里采用数组栈处理，注意题目要求空字符串也是有效字符串
//注意单个字符以及栈为空但字符串没有遍历完的情况
//测试数据有很长的字符串，因此数组空间可以开大一点，虽然挺浪费空间

bool isValid(string s)
{
	int len = s.length();
	if (len == 0)//空字符串，返回true
		return true;
	int stack[10000];
	int top = -1;
	int flag = 0;//设置一个变量标记数组为空但是字符串未遍历完成的情况
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