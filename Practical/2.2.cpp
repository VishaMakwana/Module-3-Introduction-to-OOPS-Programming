#include<iostream>
using namespace std;
/*Write a C++ program that performs both implicit and explicit type conversions and 
prints the results. 
o Objective: Practice type casting in C++.*/
int main(){
    int num =10;
    double price = 99.99;
  double result =num+ price;
  int newprice=(int)price;

 cout<<"original int "<<num<<endl;
 cout<<"original double "<<price<<endl;

 cout<<"After type conversion int to double "<<result<<endl;
 cout<<"After type conversion double to int "<<newprice<<endl;

    return 0;
}