#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;                                             //结束当前for循环体内容，执行打印
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;                                          //结束当前执行内容，继续重新进入for循环，随后执行a++
//		}
//		b = b-5;                                               //这一条在这里实际上是无效指令，没有被执行
//	}
//                                                             //break会跳到这里来，下一条指令指向打印函数
//	printf("%d\n", a);
//	return 0;
//}





//1-100之间出现多少个9

// 思路，只有可能个位或者十位上是数字9.   若个位上是9，则用这个数除以10，模值是9；若十位上是9.则用这个数除以10，商是9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	//9 19 29 39 .. 99 - 10
//	//90 91 92 .... 99 - 10
//	//
//	printf("count = %d\n", count);
//
//	return 0;
//}





//分数求和，计算1-1/2+1/3-1/4……+1/99-1/100的值并打印结果

// 错误写法如下
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int flag = 1;
//	for(i=1; i<=100; i++)                                      //这个循环是为了产生1-100的数作为分母，此后1/i即为每一项
//	{
//		sum += 1/i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}                                                            //错误原因1除以2商是0，所以后面的分数，实际上的结果全是0，因为保留的结果是商，而非我们想要的分数形式
//
// 
// 
//正确写法1：直接相加
//int main()
//{
//	int i = 0;
//	double sum = 0.0;                                          //加的和也应该是浮点型，故将数据类型改为double类型
//	int flag = 1;                                              //flag相当于符号位，用来改变正负
//	for(i=1; i<=100; i++)                                      //这个循环是为了产生1-100的数作为分母，此后1/i即为每一项
//                                                             //分数等同于小数，而要获得小数，必须保证符号两端至少有一个数是浮点型，如1.0/2
//	{
//		sum += flag*1.0/i;                                     //当算全加的时候，写作   sum += 1.0/i
//		flag = -flag;                                          //正负交替
//	}
//	//1/1+1/2+1/3...
//	//1+0+0+0.. = 1
//	printf("%lf\n", sum);                                      //双精度浮点类型%lf
//	return 0;
//}
//
// 
// 
//另一写法:先将奇数相加，再将偶数相加，二者和作差
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//	for(i=1; i<=100; i++)                                      //这个循环是为了产生1-100的数作为分母，此后1/i即为每一项
//	{
//		if (0 == i % 2)
//		{
//			sum1 += 1.0 / i;
//		}
//		else 
//			sum2 += 1.0 / i;
//	}
//	sum = sum2 - sum1;
//	printf("%lf\n", sum);
//	return 0;
//}





//总是求十个整数中的最大值 有负号

//这段代码是有问题的，因为，当数是负数时，此时msx初值又是赋予的0，那么任何一个负数都是小于0的，结果会显示0--会出错
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = 0;//最大值，为max，初值赋予0                     //这个地方要变
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//求出数的个数
//	for(i=0; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//
// 
// 
// 正确写法：
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];//最大值                                  //特别注意：将数组中的任意一个数赋予给初值
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}





//在屏幕上输出9*9乘法口诀表

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 .....
//....
//9*1=9 ....
//
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 1;//定义列
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);                         //若没有%-2d，则打印出来会错位。
//                                                                    // d前面加个数字2--%2d，表示打印出来的d是个两位数，当不够两位数时是输出的空格。
//                                                                    //但是这种形式是右对齐的，要想左对齐，前面还要加个负号--"%-2d"
//		}
//		printf("\n");
//	}
//	return 0;
//}





//猜数字游戏
//1. 电脑会生成一个随机数
//2. 猜数字

#include <stdlib.h>
#include <time.h>
//void menu()                                                  //菜单函数
//{
//	printf("**********************************\n");
//	printf("****   1. play    0.exit      ****\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//  //1. 生成一个随机数。                                      //rand 函数是一个随机数生成函数，要生成随机数要用rand函数，头文件是#include <stdlib.h>
//                                                             //rand函数生成的函数值是从0到RAND_MAX--对应16进制数0x7fff--对应十进制数32767，即随机数是0到32767这个范围
// 
//                                                             //在调用rand函数之前，要使用srand函数来生成随机数的初值。
//                                                             //即要先用srand()进行函数初值设定,括号内容只能是整型数据类型，若为一个固定值，则每次产生的随机值都是一样的，因此括号内要是一个变量
//
//                                                             //而要产生一个变量这里要引用一个时间函数time
//	                                                           //即拿时间戳来设置随机数的生成起始点
//	                                                           //time_t time(time_t *timer)    
//                                                             //time函数返回值的类型是time_t，本质是长整型转换来的。
//                                                             //后面括号内的内容是，time函数的参数类型，它是time_t类型的 *timer指针变量，不用管内容是什么，写一个空指针(NULL)
//	                                                           
//                                                             //又因为这里的srand要的是整型，所以(unsigned int)time（）强制转换time的数据类型即可。
//	int ret = 0;
//	int guess = 0;//接收猜的数字
// 
//	ret = rand()%100+1;//生成1-100之间随机数
//                                                             //因为随机值的范围是0到32767，所以将这个数模100， 得到的值无非是0到99这100个数字，此时将模值+1即可得到1-100这些数
//	                                                           //printf("%d\n", ret);//到这里为止，随机数就已经生成完毕了
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;//只有当猜对了才会停止
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));                           //srand函数的作用是为了调用rand函数，进而生成随机值   
//                                                             //但是若为srand(1)这种形式，他每次生成的随机值都是一样的.原因见上
//                                                             //所以在括号中（）要放一个随机数，并且数据类型要是整型。这里要引入时间戳的概念--time函数，头文件是#include <time.h>
//	                                                           //(unsigned int)time(NULL)这是时间戳函数.这是最终表达式，心路历程见上
//                                                             //而srand函数在主函数设置一次初值就可以了，因为它的作用就是生成随机数
//  do                                                         //游戏进来首先要执行一次，所以考虑用do-while循环 
//	{
//		menu();//先生成一个菜单函数
//		printf("请选择>:");
//		scanf("%d", &input);//输入选择进行游戏还是退出
//		switch(input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}//输入break时会跳到这里来，之后执行while循环
//	} while (input);//while循环的条件如何设置，想要反复的进行游戏，始终进入菜单即可
//	return 0;
//}





//goto语句，可以随意跳动。一般用在多次嵌套的深层次结构，一般尽量不用

//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}






#include <string.h>
//关机程序

//int main()
//{
//	char input[20] = {0};
//	                                                           //shutdown -s -t 60      有个命令函数，用于关机的意思，后面是设置时间的，中间有空格啊，要注意
//	                                                           //shutdown -a            是取消关机的意思
// 
//                                                             //system()- 执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
//                                                             //我是猪是一个字符串，要用char存起来
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)                           //比较两个字符串-strcmp()，这个函数如果返回值是0，则说明二者相等
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
// 
// 
//不用goto的写法：
//int main()
//{
	//char input[20] = {0};
	//                                                         //shutdown -s -t 60
	//                                                         //system()- 执行系统命令的
	//system("shutdown -s -t 60");
	//while(1)                                                 //这个代表死循环，只有满足if中的条件时，才会转到break，直接退出循环
	//{
	//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
	//	scanf("%s", input);
	//	if(strcmp(input, "我是猪") == 0)                       //比较两个字符串-strcmp()
	//	{
	//		system("shutdown -a");
	//		break;
	//	}
	//}
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	return 0;
//}





////代码1
////编写代码，演示多个字符从两端移动，向中间汇聚
//想在屏幕上输出一段字符串，要求从两边依次一个字符一个字符的出现

//int main()
//{
//                                                             //welcom to bit!!!!!!
//                                                             //###################
//                                                             //w#################!
//                                                             //we###############!!
//                                                             //wel#############!!!
//                                                             //......
//                                                             //welcom to bit!!!!!!
//                                                             //char arr[]="abc";
//                                                             //[a b c \n]
//                                                             // 0 1 2 3
//                                                             //\n 算字符长度，不算元素内容
//                                                             //此时用                    int  right=sizeof（arr1[])/sizeof(arr1[0])-1   算出来实际上是4-1=3，而非最右边的下标值
//                                                             //要得到右下标值，实际应该是int  right=sizeof（arr1[])/sizeof(arr1[0])-2               即4-2=2
//                                                             //为什么这里的数组要有'\n'，而下面的数组却不用'\n'呢？
//                                                             //因为这里定义的数组是，元素内容为一组字符串，所以要有字符串结束标志'\n'
//                                                             //            而下面的，元素内容是一组有序数列，故没有
//    char arr1[] = "welcom to bit!!!!!!";
//    char arr2[] = "###################";
//    int left = 0;
//    int right = strlen(arr1) - 1;                            //用该函数实现，求字符长度
//    printf("%s\n", arr2);
//    //while循环实现
//    while (left <= right)
//    {
//        Sleep(200);                                          //休息0.2秒,头文件是#include <windows.h>
//        system("cls");                                       //用于执行系统命令的一个函数,"cls"是清空屏幕的函数，头文件是#include <stdlib.h>
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//        //sleep函数休息
//    }
//
//  
// 
//    //for循环实现
//    char src[] = "welcom to china!!!!!!";
//    char target[] = "###################";
//    for (left = 0, right = strlen(src) - 1; left <= right;left++, right--)
//    {
//        Sleep(200);
//        system("cls");
//        target[left] = arr1[left];
//        target[right] = arr1[right];
//        printf("%s\n", target);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>





////代码2
////模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则,提示登录成，如果三次均输入错误，则退出程序。

//int main()
//{
//    char psw[10] = {0};
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        printf("please input:");
//        scanf("%s", psw);
//        //错误写法：if (psw == "123456)                           //注：   ==是不能用于判断字符串是否相等的，应该使用一个库函数strcmp
//        if (strcmp(psw, "12pw") == 0)                             //strcmp（a,b)是一个库函数，他会将括号内的内容传到strcmp中，当a>b时，strcmp中会显示一个大于1的数。当a=b时，会显示0.当a<b时，会显示一个小于1的数
//                                                                  //判断密码是否错误，若这两个数相等，则返回结果0，若不相等则继续执行for循环
//        {
//            printf("log in\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误\n");
//           
//        }
//    }
//    if (i == 3)
//        printf("exit\n");
//    return 0;
//}





#include <stdio.h>
//在一个有序数组中查找具体的某个数字n。（讲解二分查找）

////通常的写法，这样效率不高
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int i = 0;
////	int k = 7;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (i = 0; i < sz; i++)
////	{
////		if (arr[i] == k)
////		{
////			printf("找到了，下标是：%d\n", i);
////			break;
////		}
////	}
////	if (i == sz)
////		printf("找不到\n");
////	return 0;
////}
//
////买了一双鞋：10
////1 2 3 4 5 6 7 8 9 10...是一对有序数列
////0 1 2 3 4 5 6 7 8 9...对应下标
////猜，从中间开始猜 猜小了，往大的
////最坏的情况，要找n次
////推荐方法，折半查找算法或者二分查找算法
////第一次先算下标的中间值，再与要找的数比较，若比实际的小，则再找这个数与要找的数的中值
//// 要找的次数是log以2为底的n次方   n是所有的数字
// 
// 
// 
//二分查找法： 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =7;
//	int sz = sizeof(arr) / sizeof(arr[0]);                     //求得元素个数
//	int left = 0;//左下标
//	int right = sz - 1;                                        //右下标为元素个数-1
//	                                                           //现在要通过左右下标求得中间元素
//	//int mid = (left + right) / 2;                            //这里开始是二分查找的循环体
//	                                                           //要由下标元素求得实际数组内容
//	//if (arr[mid] > k)
//	//{
//	//	right = mid - 1;
//	//}
//	//else if (arr[mid] < k)
//	//{
//	//	left = mid + 1;
//	//}
//	//else
//	//{
//	//	printf("找到了，下标是：%d\n", mid);
//	//}
//	                                                           //以上为二分查找的循环体所有内容
//	//
//	while (left<=right)                                        //这个地方要特别注意
//	{
//		int mid = (left + right) / 2;                          //这里也是
//		                                                       //要由下标元素求得实际数组内容
//		if (arr[mid] > k)//                                    //+1
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)//                               //+1
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;//                                           //+1
//		}
//	}
//	                                                           //怎么设置循环条件？
//	                                                           //如果找不到要怎么办？
//	                                                           //1 2 3 4 5 6 8 9 10 11   要找7，明显找不到
//	                                                           //0 1 2 3 4 5 6 7 8  9    这是对应下标
//	if (left > right)//                                        //+1
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}