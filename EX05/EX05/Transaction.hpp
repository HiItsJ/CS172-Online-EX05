//
//  Transaction.hpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Transaction_hpp
#define Transaction_hpp

#include <stdio.h>
#include <string>
#include "Date.hpp"
using namespace std;

class Transaction{
    Date date;
    char type;
    double amount;
    double transactionBalance;
    string description;
public:
    Transaction(char type, double amount, double balance, string description);
    Date getDate();
    char getType();
    double getAmount();
    double getBalance();
    string getDescription();
    void setDate(int y, int m, int d);
    void setType(char t);
    void setAmount(double a);
    void setBalance(double b);
    void setDescription(string d);
};

#endif /* Transaction_hpp */
