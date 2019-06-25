/* 
命令接口
 */

#if !defined(COMMAND)
#define COMMAND

class Command
{
private:
    /* data */
public:
    virtual void execute()=0;
    virtual ~Command(){}
};




#endif // COMMAND
