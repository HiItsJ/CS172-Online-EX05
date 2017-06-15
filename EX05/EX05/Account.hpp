//
//  Account.hpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <vector>
#include "Transaction.hpp"

class Account{
    int id;
    double balance;
    static double annualInterestRate;
    string name;
    vector<Transaction> transactions;
public:
    Account();
    Account(int i, double b, string n);
    int getID();
    double getBalance();
    double getAnnualInterestRate();
    void setID(int i);
    void setBalance(double b);
    void setAnnualInterestRate(double a);
    double getMonthlyInterestRate();
    void withdraw(double amount);
    void deposit(double amount);
    void printAccountSummary();
};

#endif /* Account_hpp */
