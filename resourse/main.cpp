
#include <iostream>
#include "../head/EatPatch.h"
#include "../head/Cur_conver.h"
#include "../head/Op_longint.h"
#include "../head/Student_manger.h"
#include "../head/Huffman.h"
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
        case 2:Conver c;c.con_main(c);break;
        case 3:Op_longint o1;o1.op_main(o1);break;
        case 4:{ Manger m;m.stu_main(m);break;}
        case 5:  { Huffman h; h.h_main();
        break;
        }
        default :cout<<"输入有误！"<<endl;
        }

}while(n!=10);
	return 0;
}
