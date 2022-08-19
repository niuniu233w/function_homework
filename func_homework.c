#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//用递归写一个函数使其倒序排列
// 
//int my_strlen(char* string) //自己创建计算数组长度函数
//{
//	if (*string != '\0')
//		return 1 + my_strlen(string + 1);
//	else
//		return 0;
//}
//void reverse_string(char* string) //递归倒序排列函数
//{
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	char temp = *string;
//	*string = *(string + right);
//	*(string + right) = '\0';
//
//	if (right > 1) //当只有两个或一个数需要交换时不需要继续递归
//	{
//		reverse_string(string + 1);
//	}
//	*(string + right) = temp;
//
//}
//
//int main()
//{
//	char arr[20] = "0";
//	scanf("%s", arr);
//	printf("倒序前：%s\n", arr);
//	reverse_string(arr);
//	printf("倒序后：%s\n", arr);
//	return 0;
//}

//写一个递归函数DigitSum(n)，返回其中的每位数之和

//int DigitSum(int n)
//{
//	if (n / 10)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 3234;
//	printf("每位数之和为：%d", DigitSum(n));
//	return 0;
//}


//编写一个函数实现n的k次方
//int pow(int n, int k)
//{
//	if (k)
//		return n * pow(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d的%d次方为：%d", n, k, pow(n, k));
//	return 0;
//}