#include<iostream>
using namespace std;
/*3. Variable Scope 
o Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope. 
o Objective: Reinforce the concept of variable scope.*/

int var=50;
void show(){
    int a=30;
    cout<<"local variable"<<a<<endl;
    cout<<"gloable variable"<<var<<endl;
}

int mian(){
    int b=20;
    cout<<"local variable"<<b<<endl;
    cout<<"gloable variable"<<var<<endl;

    show();
    return 0;
}