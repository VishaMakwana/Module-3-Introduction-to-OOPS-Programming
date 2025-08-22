#include<iostream>
using namespace std;
/*3. Multiplication Table 
o Write a C++ program to display the multiplication table of a given number using a for 
loop. 
o Objective: Practice using loops. */
int main(){
int num;

cout<<"Enter a number";
cin>>num;

cout<<"Multipication of the number"<<num<<endl;

for(int i=1;i<=10;i++){
    
    cout<<num<<" x "<<i << "=" <<num*i<<endl;
}

cout<<"\n"<<endl;
return 0;

}