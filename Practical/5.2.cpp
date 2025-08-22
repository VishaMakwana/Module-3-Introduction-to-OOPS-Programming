#include<iostream>
using namespace std;
/*Matrix Addition 
o Write a C++ program to perform matrix addition on two 2x2 matrices. 
o Objective: Practice multi-dimensional arrays. */

int main(){
    int A[2][2],B[2][2],C[2][2];

    cout<<"enter the first matrices 2x2\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>A[i][j];
        }
    }

    cout<<"enter the second matrices 2x2\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>B[i][j];
        }
    }

    cout<<"enter the Addition matrices 2x2\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

     cout<<"enter the result matrices 2x2\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}