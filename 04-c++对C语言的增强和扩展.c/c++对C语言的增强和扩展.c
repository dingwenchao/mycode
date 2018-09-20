#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>


//1、全局变量检测增强

int a;
int a = 10;

//2、函数检测增强 返回值没有检测 形参类型没有检测 函数调用参数个数没有检测

getRexts(w, h)
{
	return w*h;
}
void test01()
{
	printf("%d\n", getRexts(10, 10, 10));
}

//3、类型转换检测增强

void test02()
{
	char *p = malloc(32);
}


//4、struct增强

struct person
{
	int age;
	//void func();//C语言下 结构体不能有函数
};

void  test03()
{
	struct person p;//创建结构体时 必须加关键字struct
	p.age = 100;
}


//5、bool类型扩展 C语言下没有这个类型


//6、三目运算符增强

void  test04()
{
	int a = 10;
	int b = 20;
	
	printf("ret= %d\n", a > b ? a : b);

	*(a > b ? &a : &b) = 100;//C语言下返回的是值

	printf("a= %d\n", a);
	printf("b= %d\n", b);
}


//7、const增强
//全局const

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
