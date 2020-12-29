//program to demonstrate the concept of private virtual function with friend concept 
//our function is private we can not access it outside the class ,so we can declare main function as friend function in the class

using namespace std;
#include<iostream>

class Base
{
	private:                               //error: 'virtual void Base::fun()' is private within this context to avoid these error use friend concept
	
	       int i,j;
	
		   virtual void fun()             //if you are not used virtual keyword then call fun of base
		   {
			   cout<<"Base fun\n";
		   }
		   void gun()
		   {
			   cout<<"Base gun\n";
		   }
		   friend int main();
};
class Derived : public Base
{
	public:
	   
	       int i;
		  
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
size of Base class      12
size of Derived class   16
Derived fun
Base gun

*/