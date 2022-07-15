#include<iostream>
using namespace std;

//重要的是注意数据越界问题
//int类型的数据范围 -2147483648~2147483647
int reverse(int x)
{
	if (x == 0)
		return 0;
	long sum = 0;
	while (x)
	{
		sum = sum * 10 + x / 10;
		x = x / 10;
		if (sum > INT_MAX || sum < INT_MIN)
			return 0;
	}
	return (int)sum;
}

//int main()
//{
//	int x;
//	while (cin >> x) 
//	{
//		cout << reverse(x);
//	}
//	return 0;
//}
