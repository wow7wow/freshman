#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	//strlen
//	return 0;
//}





#include <string.h>
// 
// int main()
// {
// 	char arr1[] = "bit";
// 	char arr2[20] = "###########";                             //  bit\0########
// 	strcpy(arr2, arr1);
// 	printf("%s\n", arr2);
// 	
// 	                                                           //strcpy - string copy - 字符串拷贝
// 	                                                           //strlen - string length - 字符串长度有关
// 	return 0;
// }

//memset
//memory - 内存 set -设置
//
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	                                                           //***** world
//                                                               //这里因为没有主动将\n放进去，所以是打印出的以上结果
//	return 0;
//}






//设计函数找出两数最大值
 
//定义函数
//形参-形式参数-形式上参数
//int get_max(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(100, 300+1);
//	max = get_max(100, get_max(3, 7));
//
//	printf("max = %d\n", max);
//
//	return 0;
//}






//设计一个函数，交换两数的值

// swap1不能完成任务
//
//进入函数是fn+f11
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//
//
//void Swap1(int x, int y)                                     // void是无返回值，空的意思
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)                                 //注意指针类型接收，参数--指针变量的设置
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int tmp = 0;
//	//
//	printf("a=%d b=%d\n", a, b);
//  //调用Swap1函数-传值调用
//	Swap1(a, b);
// 
// 
// 
//  // 正确写法：
//  //调用Swap2函数
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}
// 
// 
// 





//何时使用传址调用？
//当要用内部函数访问外部数据时，要用传址调用





//打印100-200之间的素数，是素数返回1，不是素数返回0

#include <math.h>
//
//int is_prime(int n)//9
//{
//	                                                           //要先生成2->n-1这些数，又因为n=a*b=i*i,所以a,b中一定有一个数是小于n开平方的i的。
//                                                             //所以要从2到n-1依次去判断，能不能被整除，若能则不是素数
//                                                             //素数是只能被1及其本身整除的数
//	int j = 0;
//	for(j=2; j<=sqrt(n); j++)                                  //
//	{
//		if(n%j == 0)                                           //若能被整除则不是素数，只要发现一个，则直接返回0值结束函数内容，转到主函数的判断中
//			return 0;
//	}
//	return 1;                                                  //直到所有的都不能满足被整除时，会结束for循环，即证明是素数，随后返回1，进入主函数中
//}
//
//
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}





//写一个函数判断一年是不是闰年

//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0) || (y%400==0))
//		return 1;
//	else
//		return 0;
//}
//  
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}





// 写一个函数，找二分整型数
//                                                             //写函数的一个特点
//                                                             //先写这个函数怎么用，在写函数的具体内容--即如何实现
//总结：要注意的地方--函数内部，想求数组元素的个数是做不到的。 //那么该如何实现呢？--将元素个数在函数体外算出后，设置为实参，然后送到函数体中

//                 //本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;                                              //确定这组元素的左下标
//	int right = sz-1;                                          //确定这组元素的右下标
//
//	while(left<=right)                                         //这里判断条件一定是小于等于，否则进不去会漏一种情况
//	{
//		int mid = (left+right)/2;                              //找到这组元素的中间下标，从这里开始是一次二分查找
//                                                             //这一步特别重要，不能放到循环外面去，因为每一次二分查找都要求得中间元素的坐标。
//                                                             //若放到外面则是只求了一次中间元素的坐标
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1; 
//		}
//		else
//		{
//			return mid;
//		}                                                      //到这里为止是一次二分查找的结束位置
//	}
//	return -1;                                                 //当上面的循环找完了，还是没有找到时则返回-1
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标。找不到的返回-1
//	//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);                       //当这个地方放到函数体内时，sz的值不会是我们想要的而是会显示为1
//                                                             //这是因为，当函数的实参是以数组的形式传入函数体时，就不能用上一行的方法来求sz了
//                                                             //数组是一段空间，当它在传参时，不是将整个数组内容都传过去了，而是仅仅传入数组第一个元素的地址
//                                                             //即此时实参里面的数组名仅代表数组首元素的地址
//                                                             //此时函数体中的形参，虽然看上去是数组的形式，但它实际上是指向数组第一个元素的指针
//                                                             //而一个指针在32位中，是占用4个字节的，所以4/4=1，即原来错误显示sz=1,就无法显示数组的个数
//                                                             //所以在函数内部就不能求数组的个数了，所以将其放在函数体的外面求
//                                                             //主动将sz设置为函数的参数进而传进去
//	//                     传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr, k, sz);                       //如果后面的函数参数中没有sz，则会一直显示找不到指定的数字
//	if(ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

 
 


//写一个函数，每调用一次这个函数，就会将num的值+1

//void Add(int* p)
//{
//	(*p)++;                                                    //特别注意，++的优先级比较高，在没有括号的前提下*p++--是作用于p的，而不是作用于*p的就不会改变指针的内容，所以要加括号
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}





//链式访问
//把一个函数的返回值作为另外一个函数的参数。


//int main()
//{
//	int len = 0;
//	//1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2    第二种将第一种的两步，写在一起了，就是链式访问
//	printf("%d\n", strlen("abc"));
//	return 0;
//}



//打印的结果是4321
// printf的返回值是打印的字符的个数
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));              //最内打印出的结果是43--而返回结果是2--两个字符，即printf（"%d",2）
//                                                             //往外一层的结果是432--而返回结果是1--一个字符，即printf（"%d",1）
//                                                             //最外层结果是4321--返回值是1--一个字符
//
//	return 0;
//}





//函数的声明和定义
//#include "test_4_19_p12_加法函数的声明.h" 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

