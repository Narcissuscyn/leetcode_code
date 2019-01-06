//#include<iostream>
//using namespace std;
//#include<vector>
//
//class Solution {
//public:
//	vector<string> generateParenthesis(int n) {
//		vector<string> results;
//		generateCore(results, "", 0, 0, n);
//		return results;
//	}
//
//	void generateCore(vector<string> &results, string cur, int open = 0, int close = 0, int max = 0)
//	{
//		if (cur.length() == 2 * max)
//		{
//			results.push_back(cur);
//		}
//
//		if (open<max)
//		{
//			generateCore(results, cur + '(', open + 1, close, max);
//		}
//
//		if (open>close)
//		{
//			generateCore(results, cur + ')', open, close + 1, max);
//		}
//	}
//};
//
//
//int main()
//{
//	Solution solver;
//	solver.generateParenthesis(3);
//	return 0;
//}