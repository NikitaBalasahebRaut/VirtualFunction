//program to demonstrate the concept of overriding
//for the overriding need single level inheritance and upcasting

using namespace std;
#include<iostream>

class Base
{
	public:
	
	       //int i,j;
	
		   virtual void fun()             //if you are not used virtual keyword then call fun of base
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
	   
	      // int i;
		  
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
	
	cout<<"size of Base class"<<"\t"<<sizeof(Base)<<"\n";        //size = 4(for vptr)
	cout<<"size of Derived class"<<"\t"<<sizeof(Derived)<<"\n";  //size = 4(for vptr)
	
	bp = &dobj;     //upcasting (base class pointer points to derived class object
	
	bp->fun();         //derived fun
	bp->gun();          //Base gun
	
	
	return 0;
}

/*
output :
size of Base class      4
size of Derived class   4
Derived fun
Base gun
*/