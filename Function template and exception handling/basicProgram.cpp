#include<iostream>
#include<string>
using namespace std;

template <class T1,class T2>
void display(T1 a,T2 b){
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(){
    display(1.0f, 3.4f);
    display(1, 4);
    display(string("HI"), 2);
    return 0;
}