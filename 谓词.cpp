#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//一元谓词
class my20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

  vector<int>::iterator pos=find_if(v.begin(), v.end(), my20());

  if (pos != v.end())
  {
	  cout << "找到了位置：" << *pos << endl;
  }
  else
  {
	  cout << "未找到！！" << endl;
  }

}
//二元谓词

void myprintf(int val)
{
	cout << val << endl;
}

class my_printf
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

void test02()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprintf);
	cout << endl;

	sort(v.begin(), v.end(), my_printf());
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}