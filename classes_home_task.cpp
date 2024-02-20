#include <iostream>
using namespace std;
class BankAccount{
    public:
     string account_num;
     double balance=0;
     string getAccountNumber(string account_num);
     double getBalance(double balance);
     double deposit(double amount);
     double withdraw(double amount);
     void display();
};
string BankAccount::getAccountNumber(string account_num){
    return account_num;
}
double BankAccount::getBalance(double balance){
    return balance;
}
double BankAccount::deposit(double amount){
    if(amount < 0){
        cout << "Please enter the right amount" << endl;
    }else{
    BankAccount::balance=amount + BankAccount::balance;
    return BankAccount::balance;
    }
}
double BankAccount::withdraw(double amount){
    if(amount > BankAccount::balance){
        cout << "You do not have enough balance" << endl;
        return BankAccount::balance;
    }else{
        BankAccount::balance=(-amount + BankAccount::balance);
        return BankAccount::balance;
    }
}
void BankAccount::display(){
    cout << BankAccount::account_num << endl;
    cout << BankAccount::balance << endl;
}
class Transaction{
    public:
    double initialize1(BankAccount &b1,BankAccount &b2){
      b1.account_num="bilal1718";
      b1.balance=3000;
      return b1.balance;
    };
    double initialize2(BankAccount &b1,BankAccount &b2){
      b2.account_num="umer123";
      b2.balance=2000;
      return b2.balance;
    };
    double execute1(BankAccount &sender,BankAccount &reciever,double amount){
        return sender.withdraw(amount);
    }
     double execute2(BankAccount &sender,BankAccount &reciever,double amount){
        return reciever.deposit(amount);
    }
    void display(BankAccount &sender,BankAccount &reciever,double amount){
        cout << "The Amount to be Transferred: " << amount << endl;
        cout << "The sender account after sending: " <<sender.withdraw(amount) << endl;
        cout <<"The reciever account after recieving: "<< reciever.deposit(amount) << endl;

    }
};

int main(){
    BankAccount b1;
    BankAccount b2;
    BankAccount b3;
    double amount=1000;
    b1.account_num="bilal1718";
    b1.balance=1000;
    cout << b1.getAccountNumber(b1.account_num) << endl;
    cout << b1.getBalance(b1.balance) << endl;
    cout << b1.deposit(900) << endl;
    cout << b1.withdraw(2000) << endl;
    b1.display();
    Transaction t1;
    cout <<"The initialize balance of sender: " <<t1.initialize1(b2,b3) << endl;
    cout << "The initialize balance of receicer " <<t1.initialize2(b2,b3) << endl;
    t1.display(b2,b3,amount);
   return 0;
}