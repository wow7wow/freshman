//#define_CRT_SECURE_NO_WARNINGS 
#include <stdio.h>//����һ����stdio.h���ļ�������׼�������������std-standard input output
int main( )
{
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//c���Թ涨-����Ҫ�����ڵ�ǰ��������ǰ��
	//��������-ʹ�����뺯��scanf
	scanf_s("%d%d", & num1, &num2);//ȡ��ַ����&
	sum = num1 + num2;
	printf("sum=%d/n", sum);//����������Ҫ��ӡ�����ݣ��ٷֺż�������Ϊ��˵���������ͣ���������ʮ������
	return 0;
}

///*int main()*///������-��������-���ҽ���һ��
//		  //int �����͵���˼
//		  //main ǰ���int��ʾ-main �������÷���һ������ֵ
//{
//	
//	/*short age = 20;
//	float weight = 95.6;//���ڴ�����2���ֽ�����20���Ǹ�16bit�����ܱ���Ϊ��double���ͣ�ֻ���Ϊ95.6f����*/
//	/*printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double)); *///��ʾÿ����������ռ�洢�ռ�Ĵ�С
//	                                  //C���Թ涨sizeof(long)>=sizeof��int��
//	/*printf("%d\n", sizeof(char));*/
//	/*double d = 3.14;
//	printf("%lf\n", d);*/// ��ӡ˫������ - ��λС��
//	/*return 0;*/
//	/*float f = 5.0;
//	printf("%f\n", f);*///��ӡ��������-С��
//	/*long num = 100;
//	printf("%d\n", num);*/
//	/*int age = 20;
//	printf("%d\n", age);*///%d��ʾ��ӡʮ��������
//	//char ch = 'A';//�ڴ�
//	//printf("%C\n", ch);//%C��ʾ��ӡ�ַ���ʽ������
//	/*return 0;*/
//	/*printf("hehe\n");//����������Ҫ��ɵ�����
//	                   //����б�ܼ�n-��ʾҪ����
//	return 0;*///��������0
//}