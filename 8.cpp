//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	int myAtoi(string str) {
//		if (str == "")return 0;
//		int flag = 0;
//		long long results = 0;
//		for (int i = 0; i<str.length(); i++)
//		{
//			if (results != 0 && (str[i]<'0' || str[i]>'9'))break;
//			if (flag != 0 && (str[i]<'0' || str[i]>'9'))break;
//			if (str[i] != '-'&&str[i] != '+' && (str[i]<'0' || str[i]>'9'))
//			{
//				if (str[i] != ' '&&results == 0)return 0;
//				continue;
//			}
//			if (str[i] == '-') { flag = -1; continue; }
//			if (str[i] == '+') { flag = 1; continue; }
//			results = results * 10 + str[i] - '0';
//			if (results > 2147483648) break;
//		}
//
//		if ((flag >= 0) && results>INT_MAX)return INT_MAX;
//		if (flag == -1 && (flag*results<INT_MIN))return INT_MIN;
//		if (flag >= 0)return results;
//		else return flag*results;
//	}
//};
//int main()
//{
//	Solution solver;
//	solver.myAtoi("9223372036854775808");
//	return 0;
//}