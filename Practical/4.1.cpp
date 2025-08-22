#include<iostream>
using namespace std;
/*1. Simple Calculator Using Functions 
o Write a C++ program that defines functions for basic arithmetic operations (add, 
subtract, multiply, divide). The main function should call these based on user input. 
o Objective: Practice defining and using functions in C++.*/

int add(int a,int b){
    
    return a+b;
}
int  subtraction(int a,int b){

     return a-b;
}
int multiply(int a, int b){
    
    return a*b;
}
int  divition(int a, int b){
    
    return a/b;
}
int main(){
    int a,b, choice;

    cout<<"Enter the number:";
    cin>>a>>b;

    cout<<"Enter your choice";
    cin>>choice;

    switch(choice){
    case 1:
    cout<<"Result ="<<add(a,b);
    break;

    case 2:
    cout<<"Result ="<<subtraction(a,b);
    break;

    case 3:
    cout<<"Result ="<<multiply(a,b);
    break;

    case 4:
    cout<<"Result ="<<divition(a,b);
    break;

    default:
     cout<<"Invalid choice";
    }

    return 0;
}