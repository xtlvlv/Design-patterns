#ifndef OBSERVER
#define OBSERVER

class Observer{

public:
    virtual void update(double,double)=0;
    virtual ~Observer(){}
};

#endif