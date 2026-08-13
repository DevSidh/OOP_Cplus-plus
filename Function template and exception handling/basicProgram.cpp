#include<iostream>
using namespace std;

template <class T>
void sum(T a, T b){
    cout << a + b << endl;
}

int main(){
    sum<double>(1, 3.4);
    sum(1, 4);
    sum(string("HI"), string(" hello"));
    return 0;
}