#include<iostream>
using namespace std;

//ע��int ��������Խ��

bool isPalindrome(int x)
{
	if (x < 0)
		return false;
	long temp = x; //����Ϊlong���ͱ���Խ��
	long sum = 0;
	while (temp) 
	{
		sum = sum * 10 + temp % 10;
		temp = temp / 10;
		if(sum > INT_MAX ||sum <INT_MIN)
			return false;
	}
	if (x == sum)
		return true;
	else
		return false;
}
//
//int main()
//{
//	int x;
//	while (cin >> x)
//	{
//		cout << isPalindrome(x);
//	}
//	return 0;
//}