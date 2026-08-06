//using (::) scope resolution operator

#include<iostream>
using namespace std;

class animal{
public:
    void run(){
        cout<<"animal is running "<<endl;
    }
};

class cat: public animal{
public:
    void run(){
        cout<<"cat is running"<<endl;
    }
};

int main(){
    cat c;
    c.run();
    c.animal::run();
}