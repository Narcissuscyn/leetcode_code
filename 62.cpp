//#include<memory.h>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	//递归方法虽然是对的，但是耗时
//	// int uniquePaths(int m, int n) {
//	//     if(m==1||n==1)return 1;
//	//     return uniquePaths(m-1,n)+uniquePaths(m,n-1);
//	// }
//
//	//int uniquePaths(int m, int n) {
//	//	if (m <= 0 || n <= 0)return 0;
//	//	if (m == 1 || n == 1)return 1;
//
//	//	int **dp = new int*[m];
//	//	for (int i = 0; i<m; i++)
//	//	{
//	//		dp[i] = new int[n];
//	//	}
//	//	dp[0][0] = 1;
//
//	//	for (int i = 0; i<m; i++)
//	//	{
//	//		for (int j = 0; j<n; j++)
//	//		{
//	//			if (i>0 && j>0)
//	//			{
//	//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//	//			}
//	//			else if (i>0)
//	//			{
//	//				dp[i][j] = dp[i - 1][j];
//	//			}
//	//			else if(j>0)
//	//			{
//	//				dp[i][j] = dp[i][j - 1];
//	//			}
//	//		}
//	//	}
//	//	return dp[m - 1][n - 1];
//	//}
//
//
//	//滚动数组的方法
//	int uniquePaths(int m, int n) {
//		int *dp=new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			dp[i] = 0;
//		}
//		dp[1] = 1;
//		for (int i = 1; i <= m; i++) {//按行滚动。
//			for (int j = 2; j <= n; j++) {
//				dp[j] += dp[j - 1];//dp[j]和dp[j-1]就正好可以对应其左边和上边元素
//			}
//		}
//		return dp[n];
//	}
//
//	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//		int m = obstacleGrid.size();
//		if (m <= 0)return 0;
//		int n = obstacleGrid[0].size();
//		if (n <= 0)return 0;
//
//		if (m == 1 || n == 1)return 1;
//
//		int **dp = new int*[m];
//		for (int i = 0; i<m; i++)
//		{
//			dp[i] = new int[n];
//		}
//
//		for (int i = 0; i<m; i++)
//		{
//			for (int j = 0; j<n; j++)
//			{
//				int last_i = 0, last_j = 0;
//				if (i - 1>=0 && obstacleGrid[i - 1][j] != 1)
//				{
//					last_i = dp[i - 1][j];
//				}
//
//				if (j - 1>=0 && obstacleGrid[i][j - 1] != 1)
//				{
//					last_j = dp[i][j - 1];
//				}
//				if (i == 0 && j == 0)dp[0][0] = 1;
//				else
//					dp[i][j] = last_i + last_j;
//			}
//		}
//		return dp[m - 1][n - 1];
//	}
//};
//
//
//int main()
//{
//	Solution solver;
//	vector<vector<int>> obstacleGrid = { {0,0,0} ,{0,1,0} ,{0,0,0} };
//	//obstacleGrid[0] = { 0,0,0 };
//	//obstacleGrid[1] = { 0,1,0 };
//	//obstacleGrid[2] = { 0,0,0 };
//	//solver.uniquePaths(3,4);
//	solver.uniquePathsWithObstacles(obstacleGrid);
//	return 0;
//}