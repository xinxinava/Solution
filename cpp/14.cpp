#include<iostream>
#include<string>
#include<vector>
using namespace std;


struct StrSet
{
	string s;
	int len;
};
string longestCommonPrefix(vector<string>& strs) 
{
	int strsLen = strs.size();
	if (strsLen == 0)
		return "";
	if (strsLen == 1)
		return strs[0];
	vector<StrSet> v;
	StrSet ss;
	for (vector<string>::iterator i = strs.begin(); i != strs.end(); i++)//����vector��ÿ��string�ĳ��ȣ����ڱȽϳ���
	{
		ss.s = *i;
		ss.len = (*i).length();
		v.push_back(ss);
	}
	int minLen = v[0].len;
	for (vector<StrSet>::iterator i = v.begin(); i != v.end(); i++)//�ҳ�string������ַ��ĳ���
	{
	//	cout << (*i).s << " " << (*i).len << " " << endl;
		if (minLen > (*i).len)
			minLen = (*i).len;
	}
	//cout << minLen << endl;

	string res = "";
	int sum = 0;
	for (int i = 0; i < minLen ; i++)//�Ȱ�������ַ�����ѭ����ÿ��string��һ���ַ�һ���ַ��ıȽ�
	{
		int flag = 1;
		char m;
		for (int j = 0; j < strsLen-1; j++)//�ٰ���vector���ַ��������Ƚ�
		{
			m = strs[j][i];
			if (strs[j][i] != strs[j + 1][i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1 && sum == i)
		{
			sum++;
			char m1[2] = { m,0 };
			string s = m1;
			res = res + s;
		}
		else
			break;
	}

	return res;
}

//int main()
//{
//	vector<string> strs;
//	string s;
//	while ((cin >> s)&&(s != "#"))
//	{
//		strs.push_back(s);
//	}
//
//	cout << longestCommonPrefix(strs);
//
//	return 0;
//}