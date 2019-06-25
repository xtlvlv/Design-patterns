/* 
模拟栈
使用迭代器对栈按顺序访问
 */

#if !defined(MYARRAY)
#define MYARRAY

#include<iostream>
#include"MyArrayIterator.h"

using namespace std;

class MyArray
{
private:
    int size=100;
    int* array;
    int index=0;
public:
    MyArray(int size){
        this->size=size;
        array=new int[size];
    }
    void push(int x){
        if(index<size)
            array[index++]=x;
        else
            cout<<"满了"<<endl;
    }
    void pop(){
        if(index>0){
            index--;
        }
    }
    Iterator* create_iterator(){
        return new MyArrayIterator(array,index+1);
    }
};


#endif // MYARRAY
