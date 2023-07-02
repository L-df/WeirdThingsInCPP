

#include <iostream>


using namespace std;
struct EmptyStruct
{
	EmptyStruct()
	{
		cout << "Object Constructed" << endl;
	}	

	~EmptyStruct()
	{
		cout << "Object Destroyed" << endl;
	}
};



int main()
{
	{
		EmptyStruct R;

		cout << "Size of struct with no members: " << sizeof(R) << " bytes" << endl;
	}	
}
