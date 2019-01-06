//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//class Solution {
//public:
//	int threeSumClosest(vector<int>& nums, int target) {
//		std::sort(nums.begin(), nums.end());
//		int min_mar = 10000;
//		int sum = 0;
//		for (int i = 0; i<nums.size(); i++)
//		{
//			int j = i + 1, k = nums.size() - 1;
//			int cur_tar = target - nums.at(i);
//			while (j<k)
//			{
//				int temp = cur_tar - (nums.at(j) + nums.at(k));
//				if (abs(temp)<abs(min_mar))
//				{
//					min_mar = temp;
//					sum = nums.at(i) + nums.at(j) + nums.at(k);
//				}
//				if (nums.at(j) + nums.at(k)<cur_tar)
//				{
//					j++;
//				}
//				else
//				{
//					k--;
//				}
//			}
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	Solution solver;
//	vector<int> a;
//	a.push_back(-1);
//	a.push_back(2);
//	a.push_back(1);
//	a.push_back(-4);
//	solver.threeSumClosest(a, 2);
//	return 0;
//}