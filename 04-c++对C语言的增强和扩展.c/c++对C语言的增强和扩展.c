#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


//1��ȫ�ֱ��������ǿ

int a;
int a = 10;

//2�����������ǿ ����ֵû�м�� �β�����û�м�� �������ò�������û�м��

getRexts(w, h)
{
	return w*h;
}
void test01()
{
	printf("%d\n", getRexts(10, 10, 10));
}

//3������ת�������ǿ

void test02()
{
	char *p = malloc(32);
}


//4��struct��ǿ

struct person
{
	int age;
	//void func();//C������ �ṹ�岻���к���
};

void  test03()
{
	struct person p;//�����ṹ��ʱ ����ӹؼ���struct
	p.age = 100;
}


//5��bool������չ C������û���������


//6����Ŀ�������ǿ

void  test04()
{
	int a = 10;
	int b = 20;
	
	printf("ret= %d\n", a > b ? a : b);

	*(a > b ? &a : &b) = 100;//C�����·��ص���ֵ

	printf("a= %d\n", a);
	printf("b= %d\n", b);
}


//7��const��ǿ
//ȫ��const

const int m_A = 100;

void test05()
{
	const int m_B = 100;

	int *p = &m_B;
	*p = 200;

	printf("%d\n", m_B);
}


int main()
{

	//test01();

	//test04();

	test05();

	system("pause");
	return EXIT_SUCCESS;
}
