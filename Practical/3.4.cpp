#include<iostream>
using namespace std;
/*4. Nested Control Structures 
o Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
o Objective: Learn nested control structures.*/

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}