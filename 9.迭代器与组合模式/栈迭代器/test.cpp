#include<iostream>
#include"MyArray.h"

using namespace std;

int main(){

    MyArray* array=new MyArray(20);

    array->push(1);
    array->push(2);
    array->push(3);
    array->push(4);
    array->push(5);

    Iterator* it=array->create_iterator();

    while(it->has_next()){
        cout<<it->next()<<' ';
    }
    cout<<endl;
    array->pop();
    array->pop();

    //有个设计的不是很完善的地方，就是每次改变数组后都要重新生成迭代器
    //主要是数组大小要传参数，用java或者vector就没有这个烦恼
    it=array->create_iterator();
    while(it->has_next()){
        cout<<it->next()<<' ';
    }
    cout<<endl;
    return 0;
}