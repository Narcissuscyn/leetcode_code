//#include<iostream>
//using namespace std;
//#include<stack>
//class Solution {
//public:
//	int longestValidParentheses(string s) {
//		if (s == "")return 0;
//		int l = s.length();
//		stack<int> st;
//		for (int i = 0; i<l; i++)
//		{
//			if (s[i] == '(')
//			{
//				st.push(i);
//			}
//			else
//			{
//				if (!st.empty() && s[st.top()] == '(')//注意这个地方的判断条件，!st.empty()是一定要放在前面的，对栈的top,pop操作一定要保证不是空战
//				{
//					st.pop();
//				}
//				else
//				{
//					st.push(i);
//				}
//			}
//		}
//		if (st.empty())return l;
//		int last = l, current = 0, max_ = 0;
//		while (!st.empty())
//		{
//			current = st.top();
//			st.pop();
//			int num = last - current - 1;
//			if (max_<(num))max_ = num;
//			last = current;
//		}
//		if (max_<last)max_ = last;
//
//		return max_;
//	}
//};
//
//int main()
//{
//	Solution solver;
//	solver.longestValidParentheses(")()())");
//	return 0;
//}