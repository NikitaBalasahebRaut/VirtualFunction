//program to demonstrate the concept of redefination

using namespace std;
#include<iostream>

class Base
{
	public:
	      
		   void fun()
		   {
			   cout<<"Base fun\n";
		   }
		   void gun()
		   {
			   cout<<"Base gun\n";
		   }
};
class Derived : public Base
{
	public:
	      
		   void fun()
		   {
			   cout<<"Derived fun\n";
		   }
		   
};

int main()
{
	Derived dobj;
	dobj.fun();
	dobj.Base::fun();
	return 0;
}

/*
output 
Derived fun
Base fun
*/