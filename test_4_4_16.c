#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//ָ���СΪ4
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10; //4���ֽ�     ��10���������a��Ӧ�ĵ�ַ��Ԫ��ȥ
//	int* p = &a;//ȡ��ַ      ��a��Ӧ�ĵ�ַ�浽p������ȥ��p����ʱָ�����
//	            //��һ�ֱ�����������ŵ�ַ�ġ���ָ�������ָ���������int ��Ӧint*          char��Ӧchar*
//	*p = 20;    //            ��20�����ַΪ*p�ĵ�Ԫ��ȥ                                �����ڼ��Ѱַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	//*���������ò������������ҵ�ָ�����p����Ӧ�ĵ�ַ����
//	//ȡ��ַ��%p
//
//	return 0;
//}

////������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X, Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX
//	int a = 10;
//	int b = 20;
//	//������ʽ
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ ʹ�õĸ����
//	max = MAX(a,b);
//	//max=(a>b?a:b);���Ǻ�ִ�е����ݣ�����Ŀ������ 
//	printf("max=%d\n", max);
//	return 0;
//}

//#define MAX 100
////define ���Զ����-������
//int main()
//{
//	int a = MAX;
//	return 0;
//}

//extern int Add(int, int);
////�����ⲿ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//static ����ȫ�ֱ���
//	//extern--���������ⲿ����
//	//�ı���ȫ�ֱ�����������
//	//�þ�̬��ȫ�ֱ�����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã������ڳ�������Ӧ��ԭ�ļ�֮��ĵط�ʹ��
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	//static���ξֲ�����
//	//�ֲ��������������ڱ䳤
//	//����������������Ҳû������
//	//������仯��fn+f10����--����--����--���뺯����fn+f11
//	static int g = 1;//��a����Ϊһ����̬�ľֲ�����
//	g++;
//	printf("g=%d\n", g);
//	//�����2,3,4,5,6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	int g = 1;
//	g++;
//	printf("g=%d\n", g);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////������Ӧ��Ϊ5��g=2

//int main()
//{
//	//�ؼ���
//	//default --Ĭ��
//	//enum    --ö��
//	//extern  --�����ⲿ����
//	//register--�Ĵ����ؼ���
//	//typedef --���Ͷ���
//	typedef unsigned int u_int;
//	//unsigned int num =20; --����д�Ƚ��鷳�����Կ��Խ���unsigned int ���Ͷ�������
//	u_int num2 = 20;//����ʽ������ͬ
//	
//	int b = 20;
//	register int c = 30;
//	//register��a����Ϊ�Ĵ���������������淴��ʹ��ʱ�Ŀ��ٷ���
//	
//	
//	int d = 40;// ����ı������з�������
//	signed int f = 50;
//	//���ǰ���signed һ��ʡ�ԣ������Ƕ����з�����
//	//��Ӧ���޷��Ŷ���Ϊunsigned
//	unsigned int num = 1;
//	//�ⶨ��ľ���һ���޷�������Ĭ��Ϊ����
//	
//	
//	int a = 10;
//	//���a�Ǿֲ���������������{ }�ڲ������ã�����������ŷ�Χ���Զ�ʧЧ����Ҳ�����Զ�����
//	auto int a = 10;
//	//ͨ��ÿ���ֲ�����֮ǰ����auto������ һ��ʡ�Բ�д
//	return 0;
//}