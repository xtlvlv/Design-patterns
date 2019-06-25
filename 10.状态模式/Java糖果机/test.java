import java.util.Scanner;

/* 
黑框框模拟糖果机
C++一直有错，java测试

用java就没事。。。应该是C++语法有问题吧。。。哪位大佬能帮我解决下吗

 */

public class test{
    public static void main(String[] args) {
        System.out.println("-------实现状态模式的糖果机------------");
        System.out.println("1. 投币");
        System.out.println("2. 退币");
        System.out.println("3. 转动手柄");
        System.out.println("0. 退出");
        
        
        CandyGameMachine machine=new CandyGameMachine(3);
        int op;
        Scanner sc=new Scanner(System.in);
        do{
            System.out.println("请输入你的操作：");
            op=sc.nextInt();
            switch (op)
            {
            case 1:
                machine.insert_quarter();
                break;
            case 2:
                machine.eject_quarter();
                break;
            case 3:
                machine.turn_crank();
                break;
            default:
                break;
            }
        }while(op!=0);
    }
}
