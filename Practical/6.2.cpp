#include<iostream>
using namespace std;
/*2. Class for Bank Account 
o Create a class BankAccount with data members like balance and member functions 
like deposit and withdraw. Implement encapsulation by keeping the data members 
private. 
o Objective: Understand encapsulation in classes. */

class BankAccount{
     private:
       double  balance;
    public:
     BankAccount(double intbalance){
        balance=intbalance;
     }
     void deposit(double amount){
        balance = balance + amount;
        cout<<"Deposite"<<amount <<"new balence"<<balance<<endl;
     }
     void withdraw(double amount){
        if(amount > balance){
            cout<<"insufficient balance !"<<endl;
        }
        else{
            balance =balance -amount;
            cout<<"Withdraw"<<amount<<"Ramaining balnce"<<balance<<endl;
        }
     }

     double getbalance(){
        return balance;
     }
};

int main(){
    BankAccount acc(1000);
    acc.deposit(5000);
    acc.withdraw(200);
    acc.withdraw(1500);

    cout<<"final balance "<<acc.getbalance()<<endl;

    return 0;
}