/* 
单实例CPU

 */

#ifndef MYCPU
#define MYCPU

#include<iostream>
#include<boost/thread/mutex.hpp>

using namespace std;

/* first
多线程会出问题
 */
class MyCPU
{
private:
    MyCPU(){ }
    static MyCPU* myCPU;
public:
    static MyCPU* getInstance(){
        if(myCPU==NULL){
            myCPU=new MyCPU();
        }
        return myCPU;
    }
};

/* C++中需要这样定义一下 */
MyCPU* MyCPU::myCPU;
/* second
处理多线程的一种
如果一开始不需要实例化的话，这种设计就比较耗时
 */
class MyCPU2
{
private:
    MyCPU2(){}
    static MyCPU2* c2;
    
public:
    static MyCPU2* getInstance(){
        
        return c2;
    }
};  

MyCPU2* MyCPU2::c2=new MyCPU2();

/* third
双重加锁
java的同步比C++方便多了。。。
 */

class MyCPU3
{
private:
    MyCPU3(/* args */){}
    static MyCPU3* c3;
    static boost::mutex my_mutex;
public:
    static MyCPU3* getInstance(){
        if(c3==NULL){
            my_mutex.lock();
            c3=new MyCPU3();
            my_mutex.unlock();

            /* 另一种加锁方式 
                这个在构造函数中加锁，在析构中解锁
            */
            boost::mutex::scoped_lock lock(my_mutex);

        }
        return c3;
    }
    void calc(){
        cout<<"CPU3计算"<<endl;
    }
   
};

MyCPU3* MyCPU3::c3;
boost::mutex MyCPU3::my_mutex;

#endif