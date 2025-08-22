#include<iostream>
using namespace std;

class reactangle{
    public:
    float length, width;

    float calculate(){
        return length*width;
    }
};

int main(){
    reactangle obj;
    cout<<"enter the length: ";
    cin>>obj.length;

    cout<<"enter the width :";
    cin>>obj.width;

    cout<<"Area of reactangle"<<obj.calculate();
    return 0;
}