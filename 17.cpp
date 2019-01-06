//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//
//	string getchars(char c)
//	{
//		switch (c)
//		{
//		case '2':return "abc";
//		case '3':return "def";
//		case '4':return "ghi";
//		case '5':return "jkl";
//		case '6':return "mno";
//		case '7':return "pqrs";
//		case '8':return "tuv";
//		case '9':return "wxyz";
//		default: break;
//		}
//	}
//	vector<string> letterCombinations(string digits) {
//		vector<string>a;
//		if (digits == "")
//		{
//			return a;
//		}
//		return letterCore((char*)digits.data(), digits.length() - 1);
//	}
//
//	vector<string> letterCore(char* str, int char_pos)
//	{
//		vector<string> results, temp;
//		string chars = getchars(*(str + char_pos));
//		if (char_pos == 0)
//		{
//			string a = "";
//			for (int i = 0; i<chars.length(); i++)
//			{
//				//cout << chars[i] << endl;
//				results.push_back(a+chars[i]);
//			}
//
//		}
//		else
//		{
//			temp = letterCore(str, char_pos - 1);
//			for (int i = 0; i<temp.size(); i++)
//			{
//				for (int j = 0; j<chars.length(); j++)
//				{
//					results.push_back(temp.at(i) + chars[j]);
//				}
//			}
//		}
//
//		return results;
//
//	}
//};
//
//int main()
//{
//	Solution solver;
//	
//	solver.letterCombinations("23");
//	return 0;
//}