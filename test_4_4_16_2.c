//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////复杂对象--用结构体表示
////结构体由自己创建
////书名+价格+……
////
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
////特别注意，这里的分号不能掉，它是用于结束这个结构体的
////这里创造的是一本书的类型，书本身还未写明----即创建了一个结构体的类型
//
//int main()
//{
//	//利用结构体类型创造一个该类型的结构体变量
//	struct Book b1 = {"语言程序设计",55};
//	struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//                 .点操作符                       应用到结构体变量上，可以找到成员
//	//这样写有些麻烦，另一表达形式如下
//	//                ->箭头操作符                     应用到结构体指针上，可以指向成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//pb加箭头的操作符
//	printf("%s\n", (b1).name);
//	printf("%d\n", (b1).price);
//	//用大括号赋予具体值
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 15;
//	//更改书的价格，可以直接赋值，这是因为price是一个变量，但书的名字是一个数组，要用到strcpy-string copy这个库函数，即字符串拷贝函数，头文件名为<string.h>
//	printf("修改后的价格:%d\n",b1.price);
//	strcpy(b1.name, "C++");//两个操作数，将后面的赋值到前面去
//	printf("改名后的书名=%s\n", b1.name);
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//由平台决定字节大小，32-4  64-8
//	//将d的地址存放到指针变量p中去了，这个指针变量的数据类型是double，即*指向double类型
//	*pd = 5.81;
//	//*为解引用操作符，它将5.81赋值到指针变量p对应的地址中去了
//	printf("%lf\n", d);
//	//printf("%lf\n,*p);在这里结果是一样的，即*p对应的地址就是d的地址
//	return 0;
//}