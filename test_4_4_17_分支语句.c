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
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        //�����break�����ڽ���Ƕ���ڵ�Switch�ģ��ʳ���������ִ��case4
//        }
//    case 4:
//        m++;
//        break;
//    //�ر�ע�⣬��δ����breakʱ������case�����˳��ִ�У�������ֱ������
//    //���ڱ���������������Ӧ��Ϊm=5,n=3
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}



//switch������ʾ
//switch��������ڶ��֧�����
//switch�����ж� case���ڽ���     ��case�� �����ڱ����------���ͳ������ʽ����int��������          break�ǳ���
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
//        printf("�������\n");
//        break;
//    //д���淶����Switch case������һ������break
//    //default��Ϊ��˵�����������ֵ����case�ķ�Χ��ʱ�������ֵ
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
//        printf("����һ\n");
//        break;
//    case 2:
//        printf("���ڶ�\n");
//        break;
//    case 3:
//        printf("������\n");
//        break;
//    case 4:
//        printf("������\n");
//        break;
//    case 5:
//        printf("������\n");
//        break;
//    case 6:
//        printf("������\n");
//        break;
//    case 7:
//        printf("������\n");
//        break;
//    }
//    return 0;
//}

////���1-100�е�����
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)//�ж���������Զ�֮���ģֵ�Ƿ�Ϊһ
//			printf("i=%d\n", i);
//		i++;
//	}
//	//������һд�����жϲ����
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 != 0)//�ж���������Զ�֮���ģֵ�Ƿ�Ϊһ
//			printf("a=%d\n", a);
//		a++;
//	}
//	//������һд����ֱ�Ӽӵ�2
//	int c = 1;
//	while (c <= 100)
//	{
//		if (c % 2 == 1)//�ж���������Զ�֮���ģֵ�Ƿ�Ϊһ
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
////��������Ľ����ʲô��û�У���Ϊһ��else��Ӧһ��if���Ҷ�Ӧ��else������Ǹ�δƥ���if 
//// ���ҵ�if else���ƶ������ʱ��Ҫ�ô�����{ }����������д�ɴ�������ʽ
////��ȷ�������
////�ʵ���ʹ��{}����ʹ������߼����������
////���������Ҫ
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
////ע����д��ʽ��5==num����Ϊ�˱��⡰=����==�����������Ÿ����
////��һ����Խ�����д���
//    return 0;
//}

//#include <stdio.h>
//    //����1
//    int main()
//    {
//        int age = 0;
//        scanf("%d", &age);
//        if (age < 18)
//        {
//            printf("δ����\n");
//        }
//    }
//    //����2
//#include <stdio.h>
//    int main()
//    {
//        int age = 0;
//        scanf("%d", &age);
//        if (age < 18)
//        {
//            printf("δ����\n");
//        }
//        else
//        {
//            printf("����\n");
//        }
//    }
//    //����3
//#include <stdio.h>
//    int main()
//    {
//        int age = 0;
//        scanf("%d", &age);
//        if (age < 18)
//        {
//            printf("����\n");
//        }
//        else if (age >= 18 && age < 30)
//        {
//            printf("����\n");
//        }
//        else if (age >= 30 && age < 50)
//        {
//            printf("����\n");
//        }
//        else if (age >= 50 && age < 80)
//        {
//            printf("����\n");
//        }
//        else
//        {
//            printf("������\n");
//        }
//
//    }