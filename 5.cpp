//#include<string>
//// bool isP[1000][1000]={};
//#include<iostream>
//#include<math.h>
//using namespace std;
//class Solution {
//public:
//	string longestPalindrome(string s) {
//
//		if (s.length()<1 || s == "")return "";
//		int str_len = s.length(), start = 0, end = 0;
//
//		for (int i = 0; i<str_len; i++)
//		{
//			// isP[i][i]=1;
//			int len1 = basicP(s, i, i);
//			int len2 = basicP(s, i, i + 1);
//			int len = (len1<len2) ? len2 : len1;
//			if (len > end - start) {
//				start = i - (len - 1) / 2;
//				end = i + len / 2;
//			}
//
//		}
//		return s.substr(start, end+1);
//
//	}
//
//	int basicP(string s, int left, int right)
//	{
//		int l = left, r = right;
//
//		while (l >= 0 && r<s.length() && s[l] == s[r])
//		{
//			l--;
//			r++;
//		}
//		return r - l - 1;
//	}
//};
//
//int main()
//{
//	Solution solver;
//	string a=solver.longestPalindrome("babad");
//
//	return 0;
//}