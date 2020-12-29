#include <iostream>
using namespace std;

class Base
{
public:

~Base()
{
  cout<<"Base class Destructor\n";
}
};

class Derived: public Base
{
public:

~Derived()
{
  cout<<"Derived class destructor\n";
}
};

int main()
{
Base* b = new Derived; // Upcasting
delete b;
}
//output : Base class Destructor