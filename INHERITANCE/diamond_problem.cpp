#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
public:
    void display(){
        cout<<"class d"<<endl;
    }
};

int main()
{
    D obj;

    obj.display();
    obj.A::display();
    obj.B::display();
    obj.C::display();

    return 0;
}