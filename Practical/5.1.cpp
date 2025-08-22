#include<iostream>
using namespace std;
/*1. Array Sum and Average 
o Write a C++ program that accepts an array of integers, calculates the sum and 
average, and displays the results. 
o Objective: Understand basic array manipulation.*/

int main(){
    int n,sum=0;
    cout<<"Enter the Number";
    cin>>n;
    
    int arr[100];
    cout<<"Enter number";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum =sum+arr[i];
    }
    cout<<"sum"<<sum<<endl;
    cout<<"Average ="<<(float)sum/n<<endl;
    return 0;
}