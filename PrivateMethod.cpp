using namespace std;
#include <iostream>

class Base
{
public:
      virtual void show()
	   {
		   cout<<"Base class"<<"\n";
	   }

};

class Derived : public Base
{
private:
      virtual void show()
	   {
		   cout<<"Derived class"<<"\n";
	   }

};

int main()
{
Base *bp = NULL;
Derived d;
bp = &d;
bp->show();

return 0;
}

//output :Derived class