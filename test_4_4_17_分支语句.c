//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        //这里的break是用于结束嵌套内的Switch的，故出来后会继续执行case4
//        }
//    case 4:
//        m++;
//        break;
//    //特别注意，当未出现break时，它的case语句是顺序执行，而不会直接跳出
//    //故在本例中最终输出结果应该为m=5,n=3
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}



//switch代码演示
//switch语句适用于多分支的情况
//switch用于判断 case用于进入     （case） 括号内必须接------整型常量表达式，即int数据类型          break是出口
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("weekday\n");
//        break;
//    case 6:
//    case 7:
//        printf("weekend\n");
//        break;
//    default:
//        printf("输出错误\n");
//        break;
//    //写法规范，在Switch case语句最后一条加上break
//    //default是为了说明，当输入的值不在case的范围内时，输出该值
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("星期一\n");
//        break;
//    case 2:
//        printf("星期二\n");
//        break;
//    case 3:
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//    }
//    return 0;
//}

////输出1-100中的奇数
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)//判断这个数除以二之后的模值是否为一
//			printf("i=%d\n", i);
//		i++;
//	}
//	//或者另一写法，判断不相等
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 != 0)//判断这个数除以二之后的模值是否为一
//			printf("a=%d\n", a);
//		a++;
//	}
//	//或者另一写法，直接加等2
//	int c = 1;
//	while (c <= 100)
//	{
//		if (c % 2 == 1)//判断这个数除以二之后的模值是否为一
//			printf("c=%d\n", c);
//		c+=2;
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}
////这样输出的结果是什么都没有，因为一个else对应一个if，且对应离else最近的那个未匹配的if 
//// 并且当if else控制多条语句时，要用大括号{ }括起来，即写成代码块的形式
////正确结果如下
////适当的使用{}可以使代码的逻辑更加清楚。
////代码风格很重要
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    int num = 1;
//    if (5 == num)
//    {
//        printf("hehe\n");
//    }
////注意书写形式：5==num，是为了避免“=”“==”这两个符号搞混淆
////故一般而言将常量写左边
//    return 0;
//}

//#include <stdio.h>
//    //代码1
//    int main()
//    {
//        int age = 0;
//        scanf("%d", &age);
//        if (age < 18)
//        {
//            printf("未成年\n");
//        }
//    }
//    //代码2
//#include <stdio.h>
//    int main()
//    {
//        int age = 0;
//        scanf("%d", &age);
//        if (age < 18)
//        {
//            printf("未成年\n");
//        }
//        else
//        {
//            printf("成年\n");
//        }
//    }
//    //代码3
//#include <stdio.h>
//    int main()
//    {
//        int age = 0;
//        scanf("%d", &age);
//        if (age < 18)
//        {
//            printf("少年\n");
//        }
//        else if (age >= 18 && age < 30)
//        {
//            printf("青年\n");
//        }
//        else if (age >= 30 && age < 50)
//        {
//            printf("中年\n");
//        }
//        else if (age >= 50 && age < 80)
//        {
//            printf("老年\n");
//        }
//        else
//        {
//            printf("老寿星\n");
//        }
//
//    }