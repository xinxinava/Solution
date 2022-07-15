#include<iostream>
using namespace std;

//注意int 类型数据越界

bool isPalindrome(int x)
{
	if (x < 0)
		return false;
	long temp = x; //定义为long类型避免越界
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