//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Solution {
//public:
//	int firstMissingPositive(vector<int>& nums) {
//		int len = nums.size();
//		for (int i = 0; i<len; i++)
//		{
//			if (nums[i]>0 && nums[i] <= len&&nums[i] != i + 1 && nums[i] != nums[nums[i] - 1])
//			{
//				//std::swap(nums[i], nums[nums[i] - 1]);
//				 int temp=nums[i];
//				 nums[i]=nums[nums[i]-1];
//				 nums[nums[i]-1]=temp;
//				i--;
//			}
//		}
//		for (int i = 0; i<len; i++)
//		{
//			if (nums[i] != i + 1)return i + 1;
//		}
//		return len + 1;
//	}
//};
//
//int main()
//
//{
//	vector<int> nums = { 3, 4, -1, 1 };
//	Solution solver;
//	solver.firstMissingPositive(nums);
//	return 0;
//}