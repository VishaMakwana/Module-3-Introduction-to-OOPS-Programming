#include<iostream>
using namespace std;
/*Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants.*/
int main(){
    int age =20;
    float height=5.9;
    char grade='A';

    const double PI=3.14159;
    int nextage =age + 1;
    float circle =PI *5 * 5;

    cout <<"Age :"<<age<<endl;
    cout <<"height:"<<height<<endl;
    cout<<"grade"<<grade<<endl;
    cout<<"next age :"<<nextage<<endl;
    cout<<"circle of area"<<circle<<endl;
    return 0;
}