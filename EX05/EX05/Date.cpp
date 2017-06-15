//
//  Date.cpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "Date.hpp"

Date::Date(){
    year = 1970;
    month = 1;
    day = 1;
}
Date::Date(int seconds){
    int daysPassed = seconds/86400;
    int monthsPassed = daysPassed/30; //about
    int yearsPassed = monthsPassed/12;
    
    year = 1970+yearsPassed;
    month = 1+(monthsPassed-(yearsPassed*12));
    day = 1+(daysPassed-(monthsPassed*30));
}
Date::Date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}
int Date::getYear(){
    return year;
}
int Date::getMonth(){
    return month;
}
int Date::getDay(){
    return day;
}
void Date::setDate(int elapseTime){
    int daysPassed = elapseTime/86400;
    int monthsPassed = daysPassed/30; //about
    int yearsPassed = monthsPassed/12;
    
    year += yearsPassed;
    month += monthsPassed-(yearsPassed*12);
    day += daysPassed-(monthsPassed*30);
}
