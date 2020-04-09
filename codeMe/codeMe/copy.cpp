#include <iostream>


class String
{
private:
		
	char* m_buffer;
	unsigned int m_size;

public:
	//constructor
	String(const char* str)
	{
		m_size = strlen(str);
		m_buffer = new char[m_size];
		memcpy(m_buffer, str, m_size);
		m_buffer[m_size] = 0;
	}

	// C ++  implicit copy constructor
	/*String(const String& other) : m_size(other.m_size), m_buffer(other.m_buffer)
	{


	}*/

	//copy constructor -  customized  by us 
	String(const String& other) : m_size(other.m_size)
	{
		m_buffer = new char[m_size];
		memcpy(m_buffer, other.m_buffer, m_size);
		m_buffer[m_size] = 0;
	}



	//Destructor
	~String()
	{
		delete[] m_buffer;

	}

	//operator overloading - [] overloaded
	char& operator[](int index)
	{
		return m_buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& other);




};

//operator overloading  - << overloaded 
std::ostream& operator<<(std::ostream& stream, const String& other)
{

	stream << other.m_buffer;
	return stream;

}

void printString(String str)
{
	std::cout << str << std::endl;
}

int main()
{
	String st = "rajakumar";
	String st1 = st;
	
	st1[3] = 'i';

	printString(st);
	printString(st1);


	std::cin.get();


}