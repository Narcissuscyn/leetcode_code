//
// Created by Narcissus Chen on 2019-08-05.
//

//Longest Increasing Subsequence

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>nums) {
        return lengthofLIS(nums, INT_MIN, 0);
    }
//1.暴力递归
    int lengthofLIS(vector<int>nums, int prev, int curpos) {
        if (curpos == nums.size()) {
            return 0;
        }
        int taken = 0;
        if (nums[curpos] > prev) {
            taken = 1 + lengthofLIS(nums, nums[curpos], curpos + 1);//包含cur_pos
        }
        int nottaken = lengthofLIS(nums, prev, curpos + 1);//不包含cur_pos 注意这一句不能写到else里面
        return max(taken, nottaken);
    }
    //递归+记忆化搜索
    int lengthofLIS(vector<int>nums, vector<vector<int>>& memo,int prev, int curpos) {
        if (curpos == nums.size()) {
            return 0;
        }

        if(memo[prev+1][curpos]>-1)
            return memo[prev+1][curpos];
        int taken = 0;
        if (prev<0||nums[curpos] > nums[prev]) {
            taken = 1 + lengthofLIS(nums,memo ,curpos, curpos + 1);//包含cur_pos
        }
        //prev=-1时，nums的每个位置都会作为上升子序列的第一个元素，进行访问；
        int nottaken = lengthofLIS(nums, memo,prev, curpos + 1);//不包含cur_pos 注意这一句不能写到else里面

        memo[prev+1][curpos]=max(taken, nottaken);
        return memo[prev+1][curpos];
    }
//动态规划
    int lengthOfLIS3(vector<int>nums)
    {
        if(nums.size()<1)return 0;
        vector<int>dp(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int len=0;
        for(int i=0;i<nums.size();i++)
        {
            len=max(len,dp[i]);
        }
        return len+1;
    }

    //动态规划+二分查找

    int lengthOfLIS4(vector<int>nums)
    {
        if(nums.size()<1)return 0;
        vector<int>dp(nums.size(),0);
        int index=0;
        dp[0]=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(dp[index]<nums[i])
            {
                dp[++index]=nums[i];
            }
            else
            {
                int start=0,end=index;
                int mid=(start+end)/2;
                while (start<end)
                {
                    if(dp[mid]>=nums[i])
                        end=mid;
                    else
                        start=mid+1;
                    mid=(start+end)/2;
                }
                dp[start]=nums[i];
            }
        }
        return index+1;
    }
};


int main() {
    vector<int>arr={10,9,2,5,3,4};
    Solution solver;

    cout<<solver.lengthofLIS(arr,INT_MIN,0)<<endl;
    vector<vector<int>> memo(arr.size(),vector<int>(arr.size(),-1));
    cout<<solver.lengthofLIS(arr,memo,-1,0)<<endl;//注意这里传入-1的目的是保证从每个位置都作为开始位置递归访问一次

    cout<<solver.lengthOfLIS3(arr)<<endl;
    cout<<solver.lengthOfLIS4(arr);

    return 0;
}