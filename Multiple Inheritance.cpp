
#include <iostream>
using namespace std;

class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show(){
            cout << "The value of Base1 is " << base1int<<endl;
            cout << "The value of Base2 is " << base2int<<endl;
            cout << "The value of Base3 is " << base3int<<endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};
/*
The derivations are like this..
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
int main()
{
    Derived hzf;
    hzf.set_base1int(25);
    hzf.set_base2int(5);
    hzf.set_base3int(15);
    hzf.show();
    
    return 0;
}
