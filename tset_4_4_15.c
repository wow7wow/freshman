#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x , int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//int arr[10] = { 0 };//初始化数组，整型类型。元素个数为10，元素内容为0
	//arr[4];//[ ]--方括号是下标引用操作符
	int a = 10;
	int b = 20;
	int sum = Add(a,b);//( )--是函数调用操作符
	printf("%d\n", sum);
	return 0;
}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//条件操作符也是三目操作符   exp1   ?    exp2    :     exp3
//	printf("max=%d\n",max );
//	a = 100;
//	max = (a > b ? a : b);
//	printf("max=%d\n", max);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	//真 --非0
//	//假 --0
//	//&& --逻辑与，全1为1，有0为0
//	//|| --逻辑或，有1为1，全0为0
//	int a = 3;//a=3
//	int b = 5;//b=5
//	int c = a && b;//它并不会转换成二进制后按位与，而是直接读取a非0即为逻辑真为1，  b也非0也为1，  1与1后仍为逻辑真，所以c为1
//	printf("c=%d\n", c);//c=1
//	a = 0;//a=0
//	int d = a && b;
//	printf("c=%d\n", d);//c=0
//	int f = a || b;//逻辑或
//	printf("c=%d\n", f);//f=1
//	return 0;
//}


//int main()
//{
//	//int a = 3.14;//这样会报错，因为3.14是double双浮点数类型的，转换为整型的数据类型，会发生数据丢失
//	int a = (3.14);//加上括号后( )，可以强制数据类型转换，即程序可以继续执行，而不会报错。
//	return 0;
//	//一般不使用强制类型转换，因为会发生数据丢失
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//后置减减，先赋值再减        怎么记：从左往右，谁离得近，先看谁
//	printf("%d\n", a);//9
//	printf("%d\n", b);//10
//	b = --a;//前置减减，先减再赋值
//	printf("%d\n", a);//8
//	printf("%d\n", b);//8
//	//int a = 10;
//	//int b = a++;//后置++，是先使a赋值到b，即b=10，再使a+1，即a=11
//	//printf("%d\n", b);//b=10
//	//printf("%d\n", a);//a=11
//	//b = ++a;//前置++，是使a+1,即a=112,再将a赋值到b，即b=12
//	//printf("%d\n", b);//12
//	//printf("%d\n", a);//12
//	return 0;
//}

//int main()
//{
//	int a = 0; 
//	         //0000 0000 0000 0000 0000 0000 0000 0000
//	int b = ~a;
//	         //1111 1111 1111 1111 1111 1111 1111 1111
//	         //b在这里是有符号的整型，故最高位表示的是符号位，最高位为0表示的是正数，最高位为1表示的是负数
//	         //~--按位取反（二进制）
//	         //我们使用的printf函数，打印出来的是这个数的原码
//	         //原码符号位不变，其他位按位取反，得到的是反码
//	         //反码+1得到补码
//	         // a=0000 0000 0000 0000 0000 0000 0000 0000  ----这里是a        对应的二进制数
//	         //~a=1111 1111 1111 1111 1111 1111 1111 1111  ----这里是a按位取反对应的二进制数，对应的是b的补码形式，由于printf函数打印的是b这个数的原码，所以要对补码进行转换，即补码→反码→原码
//	         //   1111 1111 1111 1111 1111 1111 1111 1110  ----这里是b的反码形式，即由补码-1所得
//	         // b=1000 0000 0000 0000 0000 0000 0000 0001  ----这里是b的原码形式，即由反码保持最高位-符号位不变，其余取反所得，对应二进制数为-1
//	printf("%d\n", b);//结果是-1    原因是原码、反码、补码
//	//负数在内存中存储时是二进制的补码
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(arr));//4*6=24计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6计算单个元素的大小
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("较大值是： % d\n", max);
//	return 0;
//}


//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}