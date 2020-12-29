using namespace std;
#include <iostream>

class Base
{
public:
       void show()
	   {
		   cout<<"Base class"<<"\n";
	   }

};

class Derived : public Base
{
public:
       void show()
	   {
		   cout<<"Derived class"<<"\n";
	   }

};

int main()
{
Base b;
Derived d;
b.show();

d.show();

return 0;
}

/*
output 
Base class
Derived class
*/