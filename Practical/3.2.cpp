#include<iostream>
using namespace std;
/*2. Number Guessing Game 
o Write a C++ program that asks the user to guess a number between 1 and 100. The 
program should provide hints if the guess is too high or too low. Use loops to allow 
the user multiple attempts. 
o Objective: Understand while loops and conditional logic. 
3. Multiplication Table 
o Write a C++ program to display the multiplication table of a given numbe*/

int main(){
    int num=50;
    int guess;

    cout<<"Guess a number between 1 and 100";
    cin>>guess;
    while(guess !=num){
        if(guess>num){
            cout<<"too hight";
        }
        else{
            cout<<"too low:";  
        }
        cin>>guess;
    }
    cout<<"you guess number"<<endl;
    return 0;
}