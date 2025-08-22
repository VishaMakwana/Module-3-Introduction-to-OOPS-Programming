#include<iostream>
using namespace std;
/*1. Grade Calculator 
o Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions. 
o Objective: Practice conditional statements (if-else).*/

int main(){
    int marks;
    cout<<"Entr the marks";
    cin>>marks;

    if(marks >=90){
        cout<<"Gread: A"<<endl;
    }
    else if(marks >=75){
        cout<<"Gread: B"<<endl;
    }
   else if (marks >=60){
        cout<<"Gread: C"<<endl;
    }
    else if (marks >=40){
        cout<<"Gread: D"<<endl;
    }
    else {
       cout<<"Grade: fail"<<endl;
    }
    return 0;
}