//
//  Account.cpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//
#include <iostream>
#include "Account.hpp"

Account::Account(){
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}
Account::Account(int i, double b, string n){
    id = i;
    balance = b;
    name = n;
}
int Account::getID(){
    return id;
}
double Account::getBalance(){
    return balance;
}
double Account::getAnnualInterestRate(){
    return annualInterestRate;
}
void Account::setID(int i){
    id = i;
}
void Account::setBalance(double b){
    balance = b;
}
void Account::setAnnualInterestRate(double a){
    annualInterestRate = a;
}
double Account::getMonthlyInterestRate(){
    return annualInterestRate/12;
}
void Account::withdraw(double amount){
    balance -= amount;
    string description = "User withdrew "+to_string(amount)+" from the account and now has "+to_string(balance)+" remaining.";
    Transaction* t = new Transaction('W', amount, balance, description);
    transactions.push_back(*t);
    delete t;
}
void Account::deposit(double amount){
    balance += amount;
    string description = "User deposited "+to_string(amount)+" to the account and now has "+to_string(balance)+" remaining.";
    Transaction* t = new Transaction('D', amount, balance, description);
    transactions.push_back(*t);
    delete t;
}
void Account::printAccountSummary(){
    cout<<name<<"\'s account:\nInterest Rate = "<<annualInterestRate<<"\nBalance = "<<balance<<"Transactions = ";
    for (int i=0; i<transactions.size(); i++){
        cout<<"("<<transactions.at(i).getDescription()<<") ";
    }
}
