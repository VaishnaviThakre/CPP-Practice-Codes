/*Implement a class named "BankAccount" with private member variables accountNumber and balance. 
Write a constructor that initializes the account number to a unique value and the balance to 0. 
Implement functions to deposit and withdraw money from the account, updating the balance accordingly.*/

#include<iostream>

using namespace std;
class BankAccount{
	private:
		int accountNumber , balance;
		
	public:
		BankAccount(){
			accountNumber =0;
			balance=0;
		}

	 void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " into account number " << accountNumber << ".\n";
        } else {
            std::cout << "Invalid deposit amount. Please provide a positive value.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawn " << amount << " from account number " << accountNumber << ".\n";
            } else {
                cout << "Insufficient balance. Unable to withdraw " << amount << " from account number " << accountNumber << ".\n";
            }
        } else {
            cout << "Invalid withdrawal amount. Please provide a positive value.\n";
        }
    }
    
    int generateAccountNumber() {
       
        static int currentNumber = 0;
        return ++currentNumber;
    }
	
};

int main(){
	
	BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    account.withdraw(800);
    account.deposit(-200);
    return 0;

}
