//
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	string convert(string s, int numRows) {
//		int len = s.length();
//		string *results = new string[numRows];
//		int count = -1;
//		for (int j = 0; j<len; j++)
//		{
//			count++;
//			int m = j % (2 * numRows - 1);
//			if (count == numRows)
//			{
//				count = -1;
//				for (int i = numRows - 2; i>0; i--)
//				{
//					if (j<len)
//					{
//						results[i] = results[i] + s[j];
//						j++;
//					}
//				}
//				j--;
//			}
//			else
//			{
//				results[m] = results[m] + s[j];
//			}
//
//		}
//		string r = "";
//		for (int i = 0; i<numRows; i++)
//		{
//			r = r + results[i];
//		}
//		return r;
//	}
//};
//
//int main()
//{
//	Solution solver;
//	solver.convert("PAYPALISHIRING", 3);
//	return 0;
//}