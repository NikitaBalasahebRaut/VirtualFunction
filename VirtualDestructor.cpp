//program to demonstrate the concept of virtual destructor

using namespace std;
#include<iostream>

class Base
{
   public:
        
		int i,j;
		Base()
		{
			cout<<"Base constructor\n";
		}
		virtual ~Base()                    //if not use virtual keyword it will not print dirived destructor
		{
			cout<<"Base Destructor\n";
		}
};

class Derived : public Base
{
	public:
	
	      int x,y;
		  
		  Derived()
		  {
			  cout<<"Derived constructor\n";
		  }
		  ~ Derived()
		  {
			  cout<<"Derived destructor\n";
		  }

};
int main()
{
	cout<<"size of Base class"<<"\t"<<sizeof(Base)<<"\n";
	cout<<"size of derived class"<<"\t"<<sizeof(Derived)<<"\n";
	
	Base *bp = new Derived();
	delete bp;
	

return 0;
}

/*
output 
size of Base class      12
size of derived class   20
Base constructor
Derived constructor
Derived destructor
Base Destructor
*/