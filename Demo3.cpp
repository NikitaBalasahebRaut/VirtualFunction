//Demo overriding = Single level inheritance+upcasting+virtual keyword
//Demo using virtual function
#include<iostream>
using namespace std;

class Base 
{
public:
       virtual void Display()
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
//output Inside Display of derived class