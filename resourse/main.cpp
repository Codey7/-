
#include <iostream>
#include "../head/EatPatch.h"
#include "../head/Cur_conver.h"
 //   #include "../head/Op_longint.h"
using namespace std;
void main_menu()
{
    cout<<"***************0.0***************我醉了醉了醉了*************0.0*************"<<endl;
    cout<<"***************1.倒霉猴子偷桃子                                               2.数制转换-.-！！**********"<<endl;
    cout<<"***************3.长整数，给跪了                                               4.成绩管理系统0.0！！******"<<endl;
    cout<<"***************5.哈夫曼，真是作...                                            6.校园导航****************"<<endl;
    cout<<"***************7.校园超市选址                                                   8.学生成绩管理系统......******"<<endl;
    cout<<"***************9.又是排序.....                                                    10.退出系统！！！！！！！！！"<<endl;
}

int main ()
{
int  n=0;
do{
        main_menu();
        cout<<"请输入操作：";
        cin>>n;
        switch(n)
        {
        case 1: EatPatch e;e.eat_main(e);break;
        default :cout<<"输入有误！"<<endl;
        }

}while(n!=10);

/*	Conver c1;
	c1.eve_converstack();
	c1.arr_conver();*/


//测试长整数运算
        /*      Op_longint o1;
              int a[2]={1204,1024};
              int b[2]={2048,2048};
              Node x[2];
              Node y[2];
             Node **h;
              o1.init(h);
               for(int i=0;i<2;i++)
               {
                     o1.insert_a(x[i],a[i]);
               }
               for(int i=0;i<2;i++)
               {
                    o1.operate(x[i],y[i]);
               }
               */

	return 0;
}
