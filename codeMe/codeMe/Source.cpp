#include <iostream>
#include <string>

using namespace std;

class country
{
public :
	int a;
	string cname;
	
	country()
	{


	}
	country(int icountryno, string iname )
	{
		a = icountryno;
		cname = iname;
	}

	~country()
	{


	}

	void print()
	{
		cout << "Position of the country: "<< a << endl;
		cout << "Name of the country :"<< cname << endl;

	}

};






//
//int main()
//{
//	//Assigement operator 
//	country c1(10,"usa");
//	country c2(20, "India");
//	c1.print();
//	c2.print();
//
//	c1 = c2;
//
//	// copy constructor 
//
//	country * c3 = new country();
//	country * c4 = c3;
//
//	return 0;
//}

