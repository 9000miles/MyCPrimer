// MyCPrimer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define  _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
void Print(int array[5])
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d  ", array[i]);
	}
}

void Printf(int *p, int length)
{
	int i = 0;
	while (i < length)
	{
		printf("%d  ", *(p + i));
		i++;
	}
}

char const * GetStr1()
{
	const	char *p1 = "efgh";
	return p1;
}

char const * GetStr2()
{
	const 	char *p2 = "efgh1";
	return p2;
}
void ArrayTest()
{
	int i = 0, j = 0;
	printf("&i:  %d\n", &i);//18937600
	int a[] = { 46,346,464,264,3 };
	//Print(a);
	Printf(a, 5);
	printf("\n--------------\n");

	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	//Print(a);
	Printf(a, 5);
}

int GetMem(char **myp1, int *mylen1, char **myp2, int *mylen2)
{
	int ret = 0;
	char *temp1, *temp2;
	temp1 = (char *)malloc(100);
	strcpy(temp1, "temp11111111");

	*mylen1 = strlen(temp1);
	*myp1 = temp1;

	temp2 = (char *)malloc(100);
	strcpy(temp2, "temp2222222");

	*mylen2 = strlen(temp2);
	*myp2 = temp2;

	return ret;
}

int main()
{
	//const char *p1 = NULL;
	//const char *p2 = NULL;
	//p1 = GetStr1();
	//p2 = GetStr2();
	//printf("p1: %s,    p2: %s\n", p1, p2);
	//printf("p1: %d,    p2: %d\n", p1, p2);

	int ret = 0;
	char *p1 = NULL;
	int len1 = 0;
	char *p2 = NULL;
	int len2 = 0;

	ret = GetMem(&p1, &len1, &p2, &len2);
	printf("p1:%s\n", p1);
	printf("p2:%s\n", p2);

	if (p1 != NULL)
	{
		free(p1);
		p1 = NULL;
	}

	if (p2 != NULL)
	{
		free(p2);
		p2 = NULL;
	}
	system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示:
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件