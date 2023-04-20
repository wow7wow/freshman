//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int reg = 1;
//	scanf("%d",& n);//注意scanf后面""不要加\n
//	for (i = 1; i <= n; i++)
//	{
//		reg = reg * i;
//	}
//	printf("reg=%d\n", reg);
//	return 0;
//}
//计算1！+2！+3！=9
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int reg = 1;
//	int sum = 0;
//	//1+2+6=9 
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			reg = reg * i;
//			//算的是n的阶乘
//		}
//		sum = sum + reg;
//	}
//	//reg=1*1=1
//	//reg=1*1*2=2
//	//reg=2*1*2*3=12
//	//加起来15
//	printf("sum=%d\n", sum);
//	return 0;
//}//结果为9
// 正确结果如下
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int reg = 1;
//	int sum = 0;
//	//1+2+6=9 
//	for (n = 1; n <= 3; n++)
//	{
//		reg = 1;
//		for (i = 1; i <= n; i++)
//		{
//			reg = reg * i;
//			//算的是n的阶乘
//		}
//		sum = sum + reg;
//	}
//	//reg=1*1=1
//	//reg=1*1*2=2
//	//reg=1*1*2*3=6
//	//加起来9
//	printf("sum=%d\n", sum);
//	return 0;
//}//结果为9
// 优化,如下
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int reg = 1;
//	int sum = 0;
//	//1+2+6=9 
//	for (n = 1; n <= 3; n++)
//	{
//		reg = reg * n;
//		//算的是n的阶乘
//		sum = sum + reg;
//	}
//	//reg=1*1=1
//	//reg=1*1*2=2
//	//reg=2*1*2*3=12
//	//加起来15
//	printf("sum=%d\n", sum);
//	return 0;
//}//结果为9
////#include <stdio.h>
////int main()
////{
////	int i = 10;
////	do
////	{
////		printf("%d\n", i);
////	} while (i < 10);
////	return 0;
////}
//////循环至少执行一次，使用的场景有限，所以不是经常使用。
//// do while循环中的break和continue
////#include <stdio.h>
////int main()
////{
////	int i = 10;
////
////	do
////	{
////		if (5 == i)
////			break;
////		printf("%d\n", i);
////	} while (i < 10);
////
////	return 0;
////}//1.2.3.4
//
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//
//    do
//    {
//        if (5 == i)
//            continue;
//        printf("%d\n", i);
//    }
//    while (i < 10);
//
//    return 0;
//}
////1.2.3.4后面死循环

////请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)//判断语句写的赋值，0为假，循环进不去
//        k++;
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//    //代码4-使用多余一个变量控制循环
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }//2个
//
//    ////代码3
//    //int i = 0;
//    //int j = 0;
//    ////如果省略掉初始化部分，这里打印多少个hehe?
//    //for (; i < 10; i++)
//    //{
//    //    for (; j < 10; j++)
//    //    {
//    //        printf("%d=hehe\n",j);
//    //    }
//    //}//10个
//    ////代码2
//    //int i = 0;
//    //int j = 0;
//    ////这里打印多少个hehe?
//    //for (i = 0; i < 10; i++)
//    //{
//    //    for (j = 0; j < 10; j++)
//    //    {
//    //        printf("hehe\n");
//    //    }
//    //}//100个
//    return 0;
//}

//int main()
//{
//    //代码1
//    for (;;)
//    {
//        printf("hehe\n");
//    }
//for循环中的初始化部分，判断部分，调整部分是可以省略的，但是不建议初学时省略，容易导致问题。
//for循环的 判断部分若被省略，则判断条件恒为真，会陷入死循环
////1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
////2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。
//int i = 0;
////前闭后开的写法
//for (i = 0; i < 10; i++)
//{
//}
////两边都是闭区间
//for (i = 0; i <= 9; i++)
//{
//}

//// 代码2,continue在for循环中应用
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

////代码1,break在for循环中应用
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

////使用for循环 在屏幕上打印1-10的数字
//int main()
//{
//	int i = 0;
//	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')//注意这里是字符0和字符9，要参照ASCII码表去对应看
//            continue;
//        putchar(ch);
//    }
//    return 0;
////这个代码的作用是：只打印数字字符，跳过其他字符的.
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);//         password和getchar是输入函数，其数据是从输入缓冲区中读取的
//
//
//	////因为此时密码是以字符串的形式输入的，所以当输入123456时，在缓冲区中实际上是输入的'123456\n'
//	////当scanf将字符串'123456',读出后，此时缓冲区中还剩余一个'\n'   所以后面getchar读取时实际上是将'\n'读出了，而它对应的ASCII码值是10，所以ret中内容不是'Y'，输出放弃确认
//	////将'\n'读走即可
//	//getchar();//此时可输入123456然后正常执行
//	////但若此时输入123456 ABCD则又会出错，中间是个空格
//	////这是因为scanf函数只能读取空格之前的内容
//	////若此时写一个getchar则会读一个空格符，然后ret对应的getchar接着读后面的A 而不是我们要输入的Y，
//	////换句话说就是此时下一条指令执行之前，输入缓冲区的内容还未清空
//	////那么如何清空呢？只要执行一个getchar循环语句，确保这条指令直到读到'\n'之后再执行下一条指令即可。    这样输入缓冲区才清空了，才能输入我们想要的Y/N
//	////参考如下
//	while ((ch = getchar() != '\n'))
//	{
//		;//意思是个空语句,一直循环
//	}
//	printf("请确认(Y?N?):");
//	ret = getchar();//Y/N              这样会有问题，因为在调试时发现，输入密码后要按一个回车，而这一步ret的值显示为10
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	/*printf("%d\n", '\n');//            而10代表什么内容呢，如下所示*/
//	//'\n'对应的ASCII码值是10进制中的10
//	return 0;
//}

//#include <stdio.h>
////int main()
////{
////    int ch = 0;
////    while ((ch = getchar()) != EOF)
////        putchar(ch);
////    return 0;
////}
////这里的代码适当的修改是可以用来清理缓冲区的.
//
//
////代码2
//#include <stdio.h>
//int main()
//{
//    char ch = '\0';
//    while ((ch = getchar()) != EOF)//end of file文件结束标志
//    {
//        if (ch < '0' || ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}
////这个代码的作用是：只打印数字字符，跳过其他字符的、

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//这个结果是1,2,3,4，_
//他会陷入死循环，即在循环中遇到continue则不执行continue之后的循环内容，而是直接转到循环入口while处，进入下一次循环。相当于跳过了本次循环
//如，要顺序输入1-10中1.2.3.4.6.7.8.9.10，要跳过5，则可用continue语句,相关程序如下
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//break 代码实例
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//所以：while中的break是用于永久终止循环的。

////屏幕上打印1-10的数字。
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}