#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�õݹ�дһ������ʹ�䵹������
// 
//int my_strlen(char* string) //�Լ������������鳤�Ⱥ���
//{
//	if (*string != '\0')
//		return 1 + my_strlen(string + 1);
//	else
//		return 0;
//}
//void reverse_string(char* string) //�ݹ鵹�����к���
//{
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	char temp = *string;
//	*string = *(string + right);
//	*(string + right) = '\0';
//
//	if (right > 1) //��ֻ��������һ������Ҫ����ʱ����Ҫ�����ݹ�
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
//	printf("����ǰ��%s\n", arr);
//	reverse_string(arr);
//	printf("�����%s\n", arr);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)���������е�ÿλ��֮��

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
//	printf("ÿλ��֮��Ϊ��%d", DigitSum(n));
//	return 0;
//}


//��дһ������ʵ��n��k�η�
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
//	printf("%d��%d�η�Ϊ��%d", n, k, pow(n, k));
//	return 0;
//}