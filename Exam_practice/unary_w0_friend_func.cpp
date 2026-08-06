#include<iostream>
using namespace std;

class counter{
public:
    int count;
    counter(int count){
        this->count=count;
    }
    counter operator++(){
        count++;
        return *this;
    }
};

int main(){
    counter c(4);
    ++c;
    cout<<c.count<<endl;
}