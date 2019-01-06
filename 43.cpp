//#include<string>
//using namespace std;
//class Solution {
//public:
//	string multiply(string num1, string num2) {
//		int l1 = num1.length(), l2 = num2.length();
//		int sum = 0;
//		string ans(l1 + l2, '0');//创建固定长度的string，并初始化为'0'
//								 // int k=0;
//		for (int i = l1 - 1; i >= 0; i--)
//		{
//			for (int j = l2 - 1; j >= 0; j--)
//			{
//				int mul = (num1[j] - '0')*(num2[i] - '0');
//				int sum = ans[i + j + 1] - '0' + mul;
//				ans[i + j] += sum / 10;
//				ans[i + j + 1]= sum % 10+'0' ;
//			}
//		}
//
//		for (int i = 0; i<ans.length(); i++)
//		{
//			if (ans[i] != '0' || i == ans.length() - 1)return ans.substr(i);
//		}
//		return "0";
//	}
//};
//
//int main()
//{
//	Solution solver;
//	solver.multiply("123", "456");
//	return 0;
//}

