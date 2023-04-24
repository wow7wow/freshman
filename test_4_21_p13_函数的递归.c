#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//             递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。
//递归的主要思考方式在于：把大事化小



// int main()
// {
// 	printf("hehe\n");
// 	main();                                                    //main函数自己调用自己
// 	return 0;
// }                                                           //这样会报错，会发生栈溢出



//栈区：用于存放局部变量--函数形参
//堆区：动态开辟的内存--malloc、calloc函数等等
//静态区：用于存放全局变量、static修饰的变量等等
//任何一次的函数调用，都要在栈区申请一段空间，当打印hehe又要申请一段空间，反复调用，直到栈区空间占满，报错--栈溢出 stack overflow
//https://stackoverflow.com/ 这个网站是程序员的知乎





//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4.

// void print(int n)//1234
// {
// 	if(n>9)                                                    //说明这个数至少是两位及以上的数
// 	{
// 		print(n/10);                                           
// //假设这个数是1234，则除10以后商是123，余数是4              //到这里之后要再次调用print函数，此时n/10=123…4，括号内放的是商--即为再次调用print函数的实参
//                                                             //运行进去，n=123仍然大于9，所以继续进入if语句中，再次调用print函数，此时n/10=12…3，即实参为12
//                                                             //运行进去，n=12仍然大于9，继续进入if中，再次调用print函数，实参为n/10=1…2--即形参为1
//                                                             //运行进去，n=1小于9，跳过if，直接打印该值模10，即1
//                                                             //即拆分，先将123打印出来，再打印4
// 	}
// 	printf("%d ", n%10);                                       //上面放商，下面放余数，即模值
// }
// 
// 
// int main()
// {
// 	unsigned int num = 0;
// 	scanf("%d", &num);//1234
// 	//递归
// 	print(num);                                                //这个是自己设的函数名，目的是打印num中的每一位
// 	                                                           //print(1234)
// 	                                                           //print(123) 4    拆分，先打印123再打印4，
// 	                                                           //print(12) 3 4   拆分，先打印12再打印3
// 	                                                           //print(1) 2 3 4  拆分，直接打印1
// 	
// 	return 0;
// }





#include <string.h>
//编写函数不允许创建临时变量，求字符串的长度。
 
////int my_strlen(char* str)                                     //当创建临时变量时的写法    形参内容是，数组的第一个元素的地址
////{                                                            
////	int count = 0;                                             //设置临时变量--计算字符长度
////	while(*str != '\0')                                        //*str 对指针变量解引用操作--此时内容为指针变量所指示的地址单元的内容--意思是当指向的数组单元内容不为\0截止标识符时，则字符长度+1
////	{
////		count++;                                               //字符长度+1
////		str++;                                                 //指针变量内容+1，指向实参的第二个元素位置----相当于指针向后平移，直到找到\n这个结束标识符时结束循环
////	}
////	return count;                                              //返回字长
////}
//
//采用递归的方法
                                                               //把大事化小
                                                               //my_strlen("bit");
                                                               //1+my_strlen("it");
                                                               //1+1+my_strlen("t");
                                                               //1+1+1+my_strlen("")
                                                               //1+1+1+0
                                                               //3
//int my_strlen(char* str)                                     //不创建临时变量----count，而是采用递归的方式
//{
//	if(*str != '\0')                                           //当指向的首地址不是结束标志\n时，返回1+my_strlen(str+1)
//		return 1+my_strlen(str+1);                             //即将字符数结果+1，并使指针变量+1指向第二个元素，再次调用函数，再判断
//                                                             //相当于调用了4次函数，前三次函数返回值都是1，最后一次为0，最终函数返回值int len=1+1+1+0=3
//	else
//		return 0;
//}
// 
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);                                   //求字符串长度
//	//printf("%d\n", len);
//
//	                                                           //模拟实现了一个strlen函数
//	int len = my_strlen(arr);                                  //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//
//	return 0;
//}





//求n的阶乘。（不考虑溢出）

//循环的方式
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
// 
// 
// 递归的方式
//int Fac2(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);                                    //当n>1时，n!=n*（n-1）！
//}
//
// 
// 
// 主函数
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//
//	return 0;
//}





//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ....前两个数之和=第三个数的值

//描述第n个斐波那契数的时候
//int count = 0;
//int Fib(int n)
//{
//	if(n==3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}                                                            //这样的执行结果很慢，它的效率很低
//
// 
// 
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//
//
//
// 
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发 ----先想这个函数怎么用，再去想这个函数怎么实现
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

// void test(int n)
// {
// 	if(n<10000)
// 	{
// 		test(n+1);
// 	}
// }
// int main()
// {
// 	test(1);
// 	return 0;
// }
//这里也会栈溢出





//数组的相关内容

//
//int main()
//{
//	//创建一个数组-存放整型-10个
//	//int arr[10] = {1,2,3};                                    //不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5] = {'a', 98};                                 //数组的个数大小必须用常量表示
//                                                              //这个地方放98，调试的时候显示的仍是b，因为这个数组的数据类型是char--字符类型
//                                                              //所以98放进去后，对应ASCII码值转换的数就是小写字母b
//	//char arr3[5] = "ab";                                      //注意：字符串是双引号并且是没有大括号的的{ }
//                                                              //但是其他的内容，是要用大括号括起来的{ }
//                                                              //字符串放进去的内容是ab000,注意第3个0是\n表示的0，后面两个才是默认初始化的0
//	char arr4[] = "abcdef";                                     //未指定大小时，必须对其初始化，此时括号内的内容实际上是7，因为还有一个“\n”
//	printf("%d\n" , sizeof(arr4));
//                                                              //sizeof 计算 arr4所占空间的大小
//                                                              //“\n”不算是字符内容，但它占了字节空间，所以是算一个单独的元素的
//	                                                            //7个元素每个元素是char， 7*1 = 7
//	printf("%d\n" , strlen(arr4));                              
//	                                                            //strlen 求字符串的长度--'\0'之前的字符个数
//                                                              //找到'\0'时停止，并且是不算'\n'，所以是6
//	                                                            //[a b c d e f \0]
//	                                                            //6
// //注意的点
//                                                              //1. strlen 和 sizeof没有什么关联
//                                                              //2. strlen 是求字符串长度的 -- 只能针对字符串求长度 -- 库函数 -- 使用得引头文件
//                                                              //3. sizeof 计算变量、数组、类型的大小--单位是字节 -- 操作符
//
//
// 
//int main()
//{
//	char arr1[] = "abc";                                       //a b c \n
//	char arr2[] = {'a', 'b', 'c'};                             //a b c
//	printf("%d\n", sizeof(arr1));                              //4         sizeof只关心占空间的大小
//	printf("%d\n", sizeof(arr2));                              //3
//	printf("%d\n", strlen(arr1));                              //3         这个是只计算字节的长度，遇到'\0'才停止，遇不到就一直取直到遇到为止
//	printf("%d\n", strlen(arr2));                              //随机值    因为没有'\0'
//	return 0;
//}





//一维数组

//int main()
//{
//// 	char arr[] = "abcdef";                                 //[a][b][c][d][e][f][\0]
//// 	                                                       //printf("%c\n", arr[3]);要访问元素d，则对应下标为3
//                                                             //访问数组是以下标的形式访问的
//// 	int i = 0;
//// 	int len = strlen(arr);
//// 	for(i=0; i<len; i++)
//// 	{
//// 		printf("%c ", arr[i]);
//// 	}
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)                                        //将所有元素都打印
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}





//一堆数组

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);                 //把每个元素的地址打印出来，打印地址是用的%p
//                                                             //会发现每个元素的地址相差十进制的4
//                                                             //每个元素都是整型int，占用4个字节----即一个元素的大小是4个字节
//                                                             //地址也是由低到高依次存放，所以数组的元素存放是连续存放的
//	}
//	return 0;
//}





//二维数组的存放
//以数列的形式存放，前行后列，元素内容都是用的大括号{ }
//当二维数组不完全初始化时，后面也是默认的为0
//二维数组的使用，同样使用下标来使用的

//int main()
//{
//	int arr[3][4] = {{1,2,3},{4,5}};                           //3行4列的数组
//	                                                           //1 2 3 0
//	                                                           //4 5 0 0
//	                                                           //0 0 0 0
//
//	int i = 0;                                                 //如----打印3行4列的所有元素
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];                                           //5行6列
//	//int arr[] = {1,2,3,4};                                   //初始化
//	//int arr[][4] = {{1,2,3,4},{5,6,7,8}};                    //二维数组----列是一定不能省略的，但是行可以省略。
//  //int arr[3][4] = {1,2,3,4,5}                              //这里是3行4列，所以第一行应该是1234
//                                                             //                  第二行应该是5000
//	                                                           //                  第三行应该是0000
//                                                             //它是将一行放满之后，再把剩余的内容放到下一行去
//                                                             //那么如何将第一行放123，第二行放45呢
//                                                             //可以采用一维数组初始化的方式，见上面的代码，加上个大括号{ }就行了
//	return 0;
//}





//二维数组在内存中的存储--打印每个元素的地址
//同样也是递增的，每个地址相差4
//也可以理解为访问第一行时是：arr[0][j]， arr[1][j]这样的，类比于一维数组arr[i]

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}