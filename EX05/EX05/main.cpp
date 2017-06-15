//
//  main.cpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "vector.cpp"
#include "Account.cpp"

//EX05_01
template<typename T>
int linearSearch(const T list[], T Key, int arraySize){
    for (int i=0; i<arraySize; i++){
        if (Key == list[i]){
            return i;
        }
    }
    return -1;
}
//EX05_02
template<typename T>
bool isSorted(const T list[], int size){
    bool sorted = true;
    for (int i=0; i<size-1; i++){
        if (list[i]>list[i+1]){
            sorted = false;
        }
    }
    return sorted;
}
//EX05_04
template<typename T>
void shuffle(vector<T>& v){
    srand((unsigned)time(NULL));
    vector<T>* shuffledVector = new vector<T>(v.size());
    int range = v.size();
    T* tempList = new T[range];
    for (int i=0; i<range; i++){
        tempList[i] = v.at(i);
    }
    int* usedIndexes = new int[range];
    for (int i=0; i<range; i++){
        usedIndexes[i] = 0;
    }
    int randNum = rand() % range;
    for (int i=0; i<range; i++){
        while(usedIndexes[randNum] == 1){
            randNum = rand() % range;
        }
        shuffledVector->push_back(tempList[randNum]);
        for (int i=0; i<range; i++){
            cout<<"shuffledVector: "<<shuffledVector->at(i)<<endl;
        }
        usedIndexes[randNum] = 1;
        for (int i=0; i<range; i++){
            cout<<"indexes: "<<usedIndexes[i]<<endl;
        }
        cout<<endl;
    }
    v = *shuffledVector;
    delete [] tempList;
    delete shuffledVector;
}

int main(){
    int list[3] = {1, 2, 3};
    double list2[3] = {4, 5, 6};
    string list3[3] = {"abc", "def", "ghi"};
    cout<<"The Key is at index "<<linearSearch(list, 2, 3)<<endl;
    cout<<"The Key is at index "<<linearSearch(list2, double(6), 3)<<endl;
    cout<<"The Key is at index "<<linearSearch(list3, string("abc"), 3)<<endl;
    
    string list4[3] = {"xyz", "abc", "mno"};
    cout<<"Is list sorted (boolean identifier): "<<isSorted(list, 3)<<endl;
    cout<<"Is list2 sorted (boolean identifier): "<<isSorted(list2, 3)<<endl;
    cout<<"Is list3 sorted (boolean identifier): "<<isSorted(list3, 3)<<endl;
    cout<<"Is list4 sorted (boolean identifier): "<<isSorted(list4, 3)<<endl;
    
    /*
    vector<int>* v1 = new vector<int>(4);
    v1->push_back(int(1));
    cout<<v1->at(0)<<endl;
    cout<<"Test: "<<v1->at(4)<<endl;
    v1->push_back(int(2));
    cout<<v1->at(1)<<endl;
    v1->push_back(int(3));
    cout<<v1->at(2)<<endl;
    v1->push_back(int(4));
    cout<<v1->at(3)<<endl;
    v1->push_back(int(5));
    cout<<"Test: "<<v1->at(4)<<endl;
    */
    
    //I commented out vector.hpp so I wouldn't have conflict when testing the Account exersise.
    vector<int>* shuffleTest = new vector<int>(10);
    for (int i=1; i<11; i++){
        shuffleTest->push_back(i);
        cout<<shuffleTest->at(i-1)<<endl;
    }
    shuffle(*shuffleTest);
    cout<<"SHUFFLED"<<endl;
    for (int i=0; i<10; i++){
        cout<<shuffleTest->at(i)<<endl;
    }
    cout<<"It shuffles correctly in the function but doesn't output correctly in main!"<<endl;
    
    Account* account1 = new Account(1122, 1000, "George");
    account1->setAnnualInterestRate(1.5);
    account1->deposit(30);
    account1->deposit(40);
    account1->deposit(50);
    account1->withdraw(5);
    account1->withdraw(4);
    account1->withdraw(2);
    account1->printAccountSummary();
}
