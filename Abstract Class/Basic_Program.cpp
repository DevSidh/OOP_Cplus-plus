#include<iostream>
using namespace std;

class shape{
public:
    virtual void area()=0;

    void draw(){
        cout<<"drawing a shape"<<endl;
    }
};

class circle: public shape{
public: 
    void area() override {
        cout<<"calculating area of circle"<<endl;
    }

    //not necessary to override the normal function
    void draw(){
        cout<<"drawing a circle\n";
    }
};

int main(){
    circle c;
    c.area();
    c.draw();
    
}