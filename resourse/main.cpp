
#include <iostream>
#include "../head/EatPatch.h"
#include "../head/Cur_conver.h"
#include "../head/Op_longint.h"
using namespace std;
int main ()
{
/*	Conver c1;
	c1.eve_converstack();
	c1.arr_conver();*/


//测试长整数运算
              Op_longint o1;
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

	return 0;
}
