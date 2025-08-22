#include<iostream>
using namespace std;
/*o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
operators. Perform operations using each type of operator and display the results. 
o Objective: Reinforce understanding of different types of operators in C++.*/

int main (){
    int a=15,b=4;
    cout<<"Additional "<<(a+b)<<endl;
    cout<<"subtraction "<<(a-b)<<endl;
    cout<<"Multipication "<<(a*b)<<endl;
    cout<<"Divition "<<(a/b)<<endl;
    cout<<"Moduius "<<(a%b)<<endl;

    cout<<"is a > b "<<(a > b)<<endl;
    cout<<"is a == b "<<(a == b)<<endl;

    cout<<"logical AND"<<(a > 14 && b < 5)<<endl;
    cout<<"logical OR"<<(a > 10 || b < 5)<<endl;

    double div =(double)a/b;
    cout<<"divition with type casting"<<div<<endl;
    return 0;
}