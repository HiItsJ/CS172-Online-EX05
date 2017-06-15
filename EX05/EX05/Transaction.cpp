//
//  Transaction.cpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "Transaction.hpp"

Transaction::Transaction(char type, double amount, double balance, string description){
    this->type = type;
    this->amount = amount;
    transactionBalance = balance;
    this->description = description;
}
Date Transaction::getDate(){
    return date;
}
char Transaction::getType(){
    return type;
}
double Transaction::getAmount(){
    return amount;
}
double Transaction::getBalance(){
    return transactionBalance;
}
string Transaction::getDescription(){
    return description;
}
void Transaction::setDate(int y, int m, int d){
    date = Date(y, m, d);
}
void Transaction::setType(char t){
    type = t;
}
void Transaction::setAmount(double a){
    amount = a;
}
void Transaction::setBalance(double b){
    transactionBalance = b;
}
void Transaction::setDescription(string d){
    description = d;
}
