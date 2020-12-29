//Demo upcasting and problem without using virtual function 
//When we use Base class's pointer to hold Derived class's object, base class pointer or reference will always call the base version of the function

#include<iostream>
using namespace std;

class Base 
{
public:
       void Display()
	   {
		   cout<<"Inside Display of Base class\n";
	   }
};

class Derived: public Base
{
  public:
        void Display()
	   {
		   cout<<"Inside Display of derived class\n";
	   }
           
};
int main()
{
Base *base_pointer = new Derived;         //upcasting
base_pointer->Display();
return 0;

}
//output :Inside Display of Base class