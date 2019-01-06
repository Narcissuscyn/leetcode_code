//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		vector<vector<int>>result;
//		sort(nums.begin(), nums.end());
//		int len = nums.size();
//		for (int i = 0; i<len; i++)
//		{
//			if (i > 0 && nums[i] == nums[i - 1])continue;
//
//			int l = 1,r = len - 1;
//
//			while (l<r)
//			{
//				int tmp = nums[l] + nums[r] + nums[i];
//				if (tmp == 0)
//				{
//					vector<int>a;
//					a.push_back(nums[i]);
//					a.push_back(nums[l]);
//					a.push_back(nums[r]);
//					result.push_back(a);
//					l += 1;
//					r += 1;
//
//					while ((l<r) &&(nums[l]==nums[l-1]))
//					{
//						l++;
//					}
//					while ((l<r) && (nums[r]==nums[r+1]))
//					{
//						r--;
//					}
//				}
//				else if(tmp<0)
//				{
//					l++;
//				}
//				else
//				{
//					r--;
//				}
//
//			}
//		}
//		return result;
//	}
//};
//
//
//int main()
//{
//	vector<int>a;
//	a.push_back(-1);
//	a.push_back(0);
//	a.push_back(1);
//	a.push_back(2);
//	a.push_back(-1);
//	a.push_back(-4);
//	Solution solver;
//	solver.threeSum(a);
//	return 0;
//}