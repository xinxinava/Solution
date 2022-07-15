#include<iostream>
#include<string>
using namespace std;
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000

//×¢Òâµ¥¸ö×Ö·û
int num(char a)
{
	switch (a)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}

int romanToInt(string s)
{
	long sum = 0;
	int len = s.length();
	if (len == 0)
		return 0;
	if (len == 1)
		return num(s[0]);
	for (int i = 0; i < len - 1; i++)
	{
		int a = num(s[i]);
		int b = num(s[i + 1]);
		//cout << a << endl;
		if (a < b)
		{
			sum = sum + (b - a);
			i++;
		}
		else
			sum = sum + a;
	}
	if (num(s[len - 2]) >= num(s[len - 1]))
		sum = sum + num(s[len - 1]);
	return (int)sum;
}
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		cout << romanToInt(s);
//	}
//	return 0;
//}