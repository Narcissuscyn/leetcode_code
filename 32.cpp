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
//				if (!st.empty() && s[st.top()] == '(')//ע������ط����ж�������!st.empty()��һ��Ҫ����ǰ��ģ���ջ��top,pop����һ��Ҫ��֤���ǿ�ս
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