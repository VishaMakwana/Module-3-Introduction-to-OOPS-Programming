#include<iostream>
using namespace std;
/*2. Factorial Calculation Using Recursion 
o Write a C++ program that calculates the factorial of a number using recursion. 
o Objective: Understand recursion in functions. */
int fact(int n);

int main()
{
	int num;
    cout<<"enter a number";
    cin>>num;
	cout<<"fact is"<<num<<"="<<fact(num);
	return 0;
}
int fact (int n)
{
	if(n == 0)
	{
		return 1;
	}
	
	int factnm1 = fact(n-1);
	int factn = factnm1 *n;
	return factn;
}
