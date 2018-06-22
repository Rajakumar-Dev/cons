#include <iostream>
#include<string>

using namespace std;


class Base
{
public:
	int age;
	string *name;
 
	Base(int iage, string iname)
	{
		age = iage;
		name = new string(iname);

	}

	void change (int iage, string iname)
	{
		age = iage;
		*name  = iname;

	}

	Base(const Base &p)
	{
		cout << "copy called "<<endl;
		name = new string(*p.name);
		age = p.age;
	}

		void disp()
	{
		cout << "My name is " <<*name << " and my age is " << age << endl;
	}

};

int main()
{
	Base obj1(10, "raj");
	obj1.disp();

	Base obj2 = obj1;
	obj2.disp();

	obj1.change(200, "pride");
	obj1.disp();
	obj2.disp();

	getchar();
}
