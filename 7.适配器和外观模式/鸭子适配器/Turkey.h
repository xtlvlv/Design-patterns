/* 
火鸡类，和鸭子不一样
 */

#if !defined(TURKEY)
#define TURKEY

class Turkey
{
private:

public:
    virtual void gobble()=0;
    virtual void fly()=0;
    virtual ~Turkey(){}
};


#endif // TURKEY
