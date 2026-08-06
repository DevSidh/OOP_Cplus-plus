//using (::) scope resolution operator

#include<iostream>
using namespace std;

class animal1{
public:
    virtual void run(){
        cout<<"animal1 is running "<<endl;
    }
};

class animal2{
public:
    virtual void run(){
        cout<<"animal2 is running"<<endl;
    }
};

class cat: public animal1, public animal2{
public:
    void run() override{
        cout<<"cat is running"<<endl;
    }
};


int main(){
    cat c;
    c.run();
}