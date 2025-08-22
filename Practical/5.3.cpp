#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[20],t;
	int i,l;
	
	cout<<"enter a string:";
	cin>>a;
	
	l=strlen(a);
	
	for(i=0;i<l/2;i++){
		if(a[i]!=a[l-1-i]){
		cout<<"Not palindrome";
			break;
		}
	}
	if(i==l/2){
		cout<<"Palindrome";
	}
	return 0;
}
