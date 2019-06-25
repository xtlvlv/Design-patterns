/* 
鸭子接口
 */

#if !defined(DUCK)
#define DUCK

class Duck
{
private:
   
public:
    virtual void quack()=0;
    virtual void fly()=0;
    virtual ~Duck(){}
};



#endif // DUCK
