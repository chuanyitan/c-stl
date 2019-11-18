
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include "MyVector.cpp"

//1  优化Teacher类, 属性变成 char *panme, 购置函数里面 分配内存
//2  优化Teacher类,析构函数 释放panme指向的内存空间
//3  优化Teacher类,避免浅拷贝 重载= 重写拷贝构造函数 
//4  优化Teacher类,在Teacher增加 << 
//5  在模板数组类中,存int char Teacher Teacher*(指针类型)

//=====>stl 容器的概念 


class Teacher
{
public:
	Teacher()
	{
		age = 33;
		strcpy(name, "");
	}

	Teacher(char *name, int age)
	{
		this->age = age;
		strcpy(this->name, name);
	}
	void printT()
	{
		cout << name << ", " << age << endl;
	}
private:
	int age;
	//char name[32];
	char *pName2;
};


void main()
{
	Teacher t1("t1", 31), t2("t2", 32), t3("t3", 33), t4("t4", 34);

	MyVector<Teacher> tArray(4);

	tArray[0] = t1;
	tArray[1] = t2;
	tArray[2] = t3;
	tArray[3] = t4;

	for (int i=0; i<4; i++)
	{
		Teacher tmp = tArray[i];
		tmp.printT();
	}
	cout << tArray;



	system("pause");
}
void main02()
{
	MyVector<char> myv1(10);
	myv1[0] = 'a';
	myv1[1] = 'b';
	myv1[2] = 'c';
	myv1[3] = 'd';

	cout << myv1;

	system("pause");
}

void main01()
{
	MyVector<int> myv1(10);

	for (int i=0; i<myv1.getLen(); i++)
	{
		myv1[i] = i+1;
		cout << myv1[i] << " ";
	}
	cout << endl;


	MyVector<int> myv2  = myv1;
	for (int i=0; i<myv2.getLen(); i++)
	{
		cout << myv2[i] << " ";
	}

	cout << myv2 << endl;
	
	cout<<"hello..."<<endl;
	system("pause");
	return ;
}