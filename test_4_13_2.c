#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
////特别注意：在对枚举常量赋值时。每个枚举常量之后用逗号“，”隔开，最后一个枚举常量之后无符号
////且大括号回括时，后面是加的分号“；”
//int main ()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	/*BLUE = 6;*///会报错，因为小写的color是个变量可以对其赋值，但BLUE是枚举常量，它是不能被改变的。
//	return 0;
//}


////枚举举例
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET
//};//特别注意这里的分号；
//  //括号中的MALE,FEMALE,SECRET是枚举常量
//int main()
//{
//    enum Sex s = FEMALE;
//    //枚举常量演示
//    printf("%d\n", MALE);//0
//    printf("%d\n", FEMALE);//1
//    printf("%d\n", SECRET);//2
//    return 0;
//}



//int main()
//{
//    //字面常量演示
//    3.14;//字面常量
//    1000;//字面常量
//
//    //const 修饰的常变量
//    const float pai = 3.14f;   //这里的pai是const修饰的常变量
//    pai = 5.14;//是不能直接修改的！
//    return 0;
//}
 

////#define的标识符常量 演示
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	//const-常属性
//	const int n = 10;
//	//n是变量，但const赋予它了常属性，故说它是常变量
//	//怎么理解？  n仍然是个变量，它不能用于通常意义上的必需要写常量的地方。但是n它本身已具备了常属性，即不能被改变
//	//int arr[n] = { 0 };//在这里会报错，因为括号内要填一个常量，虽然n具有了常属性，但其仍为一个变量
//	int arr[10] = { 0 };
//	//n = 20;//在这里仍然会报错，因为n已经被赋予了常属性，不能再赋值为20
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	//const-常属性
//	//const-修饰的常变量
//	 const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}
// 
// 
//int main()
//{
//	//const-常属性
//	//const-修饰的常变量
//	int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}
// 
// 
//int main()
//{
//	int num = 4;
//	printf("%d\n", num);
//	return 0;
//}