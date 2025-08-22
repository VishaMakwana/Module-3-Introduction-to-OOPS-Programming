#include<iostream>
using namespace std;
/*1. Class for a Simple Calculator 
o Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions. 
o Objective: Introduce basic class structure*/


class calculator{
    public:
    int add(int a, int b){
        return a + b;
    }

    int subtraction(int a, int b){
        return a - b;
    }

    int multiply(int a, int b){
        return a * b;
    }

    float divition(int a, int b){
        if(b==0){
            cout<<"Error Division by zero"<<endl;
            return 0;
        }
        return (float)a/b;
    }
};

int main(){
    calculator calc;
    int x,y;
    cout<<"entrea the number";
    cin>>x>>y;

    cout<<"addition"<<calc.add(x,y)<<endl;
    cout<<"subtraction"<<calc.subtraction(x,y)<<endl;
    cout<<"Multipication"<<calc.multiply(x,y)<<endl;
    cout<<"divition"<<calc.divition(x,y)<<endl;

    return 0;
}