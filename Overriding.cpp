//program to demonstrate the concept of overriding
//for the overriding need single level inheritance and upcasting

using namespace std;
#include<iostream>

class Base
{
	public:
	
	       int i,j;
		   Base()
		   {
			   i = 11;
			   j = 0;
		   }
		   virtual void fun()             //if you are not used virtual keyword then call fun of base
		   {
			   cout<<"Base fun\n";
		   }
		   void gun()
		   {
			   cout<<"Base gun\n";
		   }
		   virtual void sun()
		   {
			   cout<<"Base sun\n";
		   }
		   void mun()
		   {
			   cout<<"Base mun\n";
		   }
};
class Derived : public Base
{
	public:
	   
	       int i;
		   Derived()
		   {
			   i = 21;
		   }
		   void fun()
		   {
			   cout<<"Derived fun\n";
		   }
		   	void gun()
		   {
			   cout<<"Derived gun\n";
		   }
		   virtual void run()
		   {
			   cout<<"Derived run\n";
		   }
		   void mun()
		   {
			   cout<<"Derived mun\n";
		   }
};
int main()
{
	Base *bp = NULL;            //	Base class pointer 
	Derived dobj;
	
	cout<<"size of Base class"<<"\t"<<sizeof(Base)<<"\n";        //size = 4(vptr)+4+(i)+4(j) = 12 byte
	cout<<"size of Derived class"<<"\t"<<sizeof(Derived)<<"\n";  //size = 4(vptr)+4+(i)+4(j)+4(i) = 16 byte
	
	bp = &dobj;     //upcasting (base class pointer points to derived class object
	
	bp->fun();         //derived fun
	bp->gun();          //Base gun
	bp->sun();
	bp->mun();
	
	return 0;
}
	/*
	output 
	size of Base class      12
size of Derived class   16
Derived fun
Base gun
Base sun
Base mun
*/