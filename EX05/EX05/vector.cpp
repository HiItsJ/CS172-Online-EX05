//
//  vector.cpp
//  EX05
//
//  Created by Josiah on 6/14/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

template<typename T>
class vector{
    int numberOfElements;
    int arraySize;
    T defaultValue;
    T* list;
    T* doubleCapacity(const T* list, int size){
        T* newList = new T[size*2];
        for (int i=0; i<size; i++){
            newList[i] = list[i];
        }
        return newList;
    }
public:
    vector<T>(){
        numberOfElements = 0;
        arraySize = 1;
        list = new T[arraySize];
    }
    vector<T>(int size){
        numberOfElements = 0;
        arraySize = size;
        list = new T[arraySize];
    }
    vector<T>(int size, T defaultValue){
        numberOfElements = 0;
        arraySize = size;
        this->defaultValue = defaultValue;
        list = new T[arraySize];
        clear();
    }
    ~vector<T>(){
        delete [] list;
    }
    void push_back(T element){
        if (numberOfElements == arraySize){
            list = doubleCapacity(list, arraySize);
        }
        list[numberOfElements] = element;
        numberOfElements++;
    }
    void pop_back(){
        list[numberOfElements-1] = defaultValue;
        numberOfElements--;
    }
    const int size(){
        return numberOfElements;
    }
    const T at(int index){
        
        return list[index];
    }
    const bool empty(){
        if (numberOfElements == 0){
            return true;
        }
        return false;
    }
    void clear(){
        for (int i=0; i<numberOfElements; i++){
            list[i] = defaultValue;
        }
    }
    void swap(vector v2){
        int tempNOE = v2.numberOfElements;
        v2.numberOfElements = this->numberOfElements;
        this->numberOfElements = tempNOE;
        
        int tempAS = v2.arraySize;
        v2.arraySize = this->arraySize;
        this->arraySize = tempAS;
        
        T tempDV = v2.defaultValue;
        v2.defaulValue = this->defaultValue;
        this->defaultValue = tempDV;
        
        T* tempList = v2.list;
        v2.list = this->list;
        this->list = v2.list;
        delete [] tempList;
    }
};
