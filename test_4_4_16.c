#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//指针大小为4
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10; //4个字节     将10这个数放入a对应的地址单元中去
//	int* p = &a;//取地址      将a对应的地址存到p变量中去，p变量时指针变量
//	            //有一种变量是用来存放地址的——指针变量，指针变量类型int 对应int*          char对应char*
//	*p = 20;    //            将20放入地址为*p的单元中去                                类似于间接寻址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	//*——解引用操作符，用于找到指针变量p所对应的地址内容
//	//取地址是%p
//
//	return 0;
//}

////函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X, Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式 使用的更简便
//	max = MAX(a,b);
//	//max=(a>b?a:b);这是宏执行的内容，三字目操作符 
//	printf("max=%d\n", max);
//	return 0;
//}

//#define MAX 100
////define 可以定义宏-带参数
//int main()
//{
//	int a = MAX;
//	return 0;
//}

//extern int Add(int, int);
////声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//static 修饰全局变量
//	//extern--用于声明外部符号
//	//改变了全局变量的作用域
//	//让静态的全局变量，只能在自己所在的源文件内部使用，不能在出了它对应的原文件之外的地方使用
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	//static修饰局部变量
//	//局部变量的生命周期变长
//	//出了他的作用域他也没有销毁
//	//看具体变化，fn+f10调试--窗口--监视--进入函数按fn+f11
//	static int g = 1;//将a定义为一个静态的局部变量
//	g++;
//	printf("g=%d\n", g);
//	//结果是2,3,4,5,6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	int g = 1;
//	g++;
//	printf("g=%d\n", g);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////这个结果应该为5个g=2

//int main()
//{
//	//关键字
//	//default --默认
//	//enum    --枚举
//	//extern  --引入外部符号
//	//register--寄存器关键字
//	//typedef --类型定义
//	typedef unsigned int u_int;
//	//unsigned int num =20; --这样写比较麻烦，所以可以进行unsigned int 类型定义如下
//	u_int num2 = 20;//与上式意义相同
//	
//	int b = 20;
//	register int c = 30;
//	//register把a定义为寄存器变量，方便后面反复使用时的快速访问
//	
//	
//	int d = 40;// 定义的变量是有符号整型
//	signed int f = 50;
//	//这个前面的signed 一般省略，作用是定义有符号数
//	//对应的无符号定义为unsigned
//	unsigned int num = 1;
//	//这定义的就是一个无符号数，默认为正数
//	
//	
//	int a = 10;
//	//这个a是局部变量，仅在括号{ }内部有作用，但其出了括号范围会自动失效，故也叫其自动变量
//	auto int a = 10;
//	//通常每个局部变量之前都有auto，但是 一般省略不写
//	return 0;
//}