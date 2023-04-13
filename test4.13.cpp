//#define_CRT_SECURE_NO_WARNINGS 
#include <stdio.h>//包含一个叫stdio.h的文件，即标准输入输出函数：std-standard input output
int main( )
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//c语言规定-变量要定义在当前代码块的最前面
	//输入数据-使用输入函数scanf
	scanf_s("%d%d", & num1, &num2);//取地址符号&
	sum = num1 + num2;
	printf("sum=%d/n", sum);//引号里面是要打印的内容；百分号加数字是为了说明数据类型，在这里是十进制数
	return 0;
}

///*int main()*///主函数-程序的入口-有且仅有一个
//		  //int 是整型的意思
//		  //main 前面的int表示-main 函数调用返回一个整型值
//{
//	
//	/*short age = 20;
//	float weight = 95.6;//向内存申请2个字节来存20，是个16bit。可能被认为是double类型，只需改为95.6f即可*/
//	/*printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double)); *///显示每个数据类型占存储空间的大小
//	                                  //C语言规定sizeof(long)>=sizeof（int）
//	/*printf("%d\n", sizeof(char));*/
//	/*double d = 3.14;
//	printf("%lf\n", d);*/// 打印双浮点数 - 两位小数
//	/*return 0;*/
//	/*float f = 5.0;
//	printf("%f\n", f);*///打印单浮点数-小数
//	/*long num = 100;
//	printf("%d\n", num);*/
//	/*int age = 20;
//	printf("%d\n", age);*///%d表示打印十进制数据
//	//char ch = 'A';//内存
//	//printf("%C\n", ch);//%C表示打印字符格式的数据
//	/*return 0;*/
//	/*printf("hehe\n");//在这里输入要完成的任务
//	                   //后面斜杠加n-表示要换行
//	return 0;*///返回整数0
//}