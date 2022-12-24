#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[40];
//	int i = 0;
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n = n / 6;
//	}
//	for (i=i-1;i >= 0;i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	long long a, b, c;
//	scanf("%lld%lld", &a, &b);
//	long long a1 = a;
//	long long b1 = b;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//
//	}
//	long long max = b;
//	long long min = a1 * b1 / max;
//	printf("%lld", max + min);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	while (n)
//	{
//		int m = n % 10;
//		if (m % 2 == 1)
//		{
//			m = 1;
//		}
//		else
//		{
//			m = 0;
//		}
//		sum=sum+m* pow(10, i);
//		i++;
//		n = n / 10;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	char arr[8000] = { 0 };
//	scanf("%s", arr);
//	//统计字符串CHN的个数
//	long long c = 0;
//	long long ch = 0;
//	long long chn = 0;
//	char* p = arr;
//	while (*p)
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch = ch + c;
//		else if (*p == 'N')
//			chn = chn + ch;
//		p++;//遍历字符串
//	}
//	printf("%lld\n", chn);
//	return 0;
//}
//int main()
//{
//	int h;
//	int m;
//	int k;
//	scanf("%d:%d %d", &h, &m, &k);
//	h = (h + (k + m) / 60) % 24;
//	m = (m + k) % 60;
//	printf("%02d:%02d", h, m);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", (n / 12) * 4 + 2);
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000]={0};
//	int num, i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &num);
//		arr[num] = num;
//	}
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", (n + 1) * n / 2);
//}
//int main()
//{
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[100];
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n = n / 6;
//	}
//	for (i--;i >= 0;i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1
//1    5   10   10    5    1

//int main()
//{
//	int n;
//	int arr[100][100] = { 0 };
//	scanf("%d", &n);
//	int i, j;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
//			}
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j <=i;j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int a = -1;
	int count = 0;
	//怎么更好的计算a的1 的个数呢？
	// a & (a - 1);这种方式可以每次把最右边的1给拿掉；
	while (a)
	{
		a = a&(a - 1);
		count++;
	}
	printf("1的个数：%d", count);

	return 0;
}