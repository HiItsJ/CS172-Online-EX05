//
//  Date.hpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

class Date{
    int year, month, day;
public:
    Date();
    Date(int seconds);
    Date(int y, int m, int d);
    int getYear();
    int getMonth();
    int getDay();
    void setDate(int elapseTime/*I assume it's in seconds*/);
};

#endif /* Date_hpp */
