/* 
数组迭代器
 */

#if !defined(MYARRAYITERATOR)
#define MYARRAYITERATOR

#include"Iterator.h"

class MyArrayIterator:public Iterator
{
private:
    int* array;
    int size=0;
    int index=0;
public:
    MyArrayIterator(int a[],int n){
        array=a;
        size=n;
    }
    bool has_next() override{
        if(index>=size-1){
            return false;
        }
        return true;
    }
    int next() override{
        if(has_next())
            return array[index++];
        return -1;
    }
};



#endif // MYARRAYITERATOR
