#include "include.h"
#include "Class.h"
int main()
{
	library a;
    //library a(18, "Lina", "Kostenko"); - this a variant with constructor with parameters
    a.SetX(18);
    a.SetY("Taras ");
    a.SetZ("Shevchenko ");
    a.toString();

    cout << "------------------------------------------------" << endl;

    Myclass *myclass;
    Myclass  c;
    myclass = &c;
    c.SetM(&c);
    c.PRINT();
    //c.SetM(18);
    
}
