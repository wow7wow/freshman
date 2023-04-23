#define _CRT_SECURE_NO_WARNINGS
//这里的是函数的定义                                           //若写在函数调用的下面，且未声明，则会报错--正确1：写在函数调用前--正确2：在最上面声明函数 
															   //注：函数定义一般放在源文件--新建一个--add.c中
int Add(int x, int y)
{
	int z = x + y;
	return z;
}