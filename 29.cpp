//class Solution {
//public:
//	int divide(int dividend, int divisor) {
//
//		int flag = 1;
//		int num = 0;
//		if (dividend<0 && divisor>0)
//		{
//			flag = -1;
//			dividend = -dividend;
//		}
//		if (dividend>0 && divisor<0)
//		{
//			flag = -1;
//			divisor = -divisor;
//		}
//		if (divisor != -1|| divisor!=1)
//		{
//			while ((dividend<0 && dividend <= divisor) || (dividend >= divisor))
//			{
//				dividend -= divisor;
//				num++;
//				if (dividend == 0)break;
//			}
//		}
//		else
//		{
//			if (dividend<0)
//				num = -dividend;
//			else
//				num = dividend;
//		}
//		if (flag == 1)
//		{
//			return num;
//		}
//		else
//		{
//			return -num;
//		}
//
//	}
//};
//
//int main()
//{
//	Solution solver;
//	solver.divide(-2147483648,-1);
//	return 0;
//}