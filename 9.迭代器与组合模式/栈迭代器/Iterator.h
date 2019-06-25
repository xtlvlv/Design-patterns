/* 
迭代器接口
 */

#if !defined(ITERATOR)
#define ITERATOR

class Iterator
{
private:
    /* data */
public:
    virtual bool has_next()=0;
    virtual int next()=0;
};


#endif // ITERATOR
