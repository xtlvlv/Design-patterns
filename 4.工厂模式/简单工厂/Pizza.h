/* Pizza接口 */

#ifndef PIZZA
#define PIZZA

class Pizza
{
private:
    /* data */
public:
    
    virtual void prepare()=0;
    virtual void cut()=0;
    virtual void box()=0;
    virtual ~Pizza(){
        
    }
};
#endif