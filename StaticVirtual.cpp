//program to demonstrate the concept of static virtual function
//we can not create stati virtual function because static related to the class and virtual concept related to object
//thse program generate error   ---->error: member 'fun' cannot be declared both 'virtual' and 'static'

using namespace std;
#include<iostream>

class Base
{
	public:
	
		   static virtual void fun()          //error: member 'fun' cannot be declared both 'virtual' and 'static'   
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
		   	void gun()
		   {
			   cout<<"Derived gun\n";
		   }
};
int main()
{
	Base *bp = NULL;            //	Base class pointer 
	Derived dobj;
	
	cout<<"size of Base class"<<"\t"<<sizeof(Base)<<"\n";        
	cout<<"size of Derived class"<<"\t"<<sizeof(Derived)<<"\n";  
	
	bp = &dobj;     //upcasting (base class pointer points to derived class object
	
	bp->fun();         //derived fun
	bp->gun();          //Base gun
	
	
	return 0;
}

//output error: member 'fun' cannot be declared both 'virtual' and 'static'