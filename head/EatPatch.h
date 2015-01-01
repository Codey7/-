/*
<1></1>1. 猴子吃桃子问题
有一群猴子摘了一堆桃子，他们每天都吃当前桃子的一半且再多吃一个，到了第10天就只余下一个桃子。用多种方法实现求出原来这群猴子共摘了多少个桃子。
 要求：
1) 采用数组数据结构实现上述求解
2) 采用链数据结构结构实现上述求解
3) 采用递归实现上述求解
4)其它方法
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class EatPatch
{
public:
int y;
	void menu();
	void eat_main(EatPatch e);
	int arrar();//数组数据结构求解
	int link();//链数据结构求解
	void  recursion(int x);//递归求解
//	EatPatch();
	//~EatPatch();
private:
	int arr[10];
};
void EatPatch::menu()
{
        cout<< "--------------------------------------------------猴子吃桃子问题------------------------------- "<<endl;
        cout<<"****************************1.   数组数据结构*********************"<<endl;
        cout<<"****************************2.   链数据结构***********************"<<endl;
        cout<<"****************************3.   递归求解*************************"<<endl;
        cout<<"****************************4.   退出！！*************************"<<endl;
}
int  EatPatch::arrar(){
              arr[9]=1;
              for(int i=8;i>=0;i--)
              {
              	arr[i]=2*(arr[i+1]+1);
              }
              return arr[0];
}

struct Node
{
	int  data;
	struct  Node *next;
};
     Node *l;
	Node *p,*s;

int EatPatch::link(){
	int i;
	l=(Node *)malloc(sizeof(Node));
	p=(Node *)malloc(sizeof(Node));
	l->next=NULL;
	l->next=p;
	l->next->data=1;
	for(i=8;i>=0;i--)
	{
		s=(Node *)malloc(sizeof(Node));
		p->next=s;
		s->data=2*(p->data+1);
		p=s;
		s->next=NULL;
	}
	return p->data;
}
int i=9;
void EatPatch::recursion(int x)
{
      while(i>0)
      {
      y=2*(x+1);
      i--;
      recursion(y);
      }
      cout<<x<<endl;
}

void EatPatch::eat_main(EatPatch e)
{
	int n=0;
	do
	{
		e.menu();
		cout<<"请输入操作： ";
        cin>>n;
		switch (n){
			case 1:cout<<e.arrar()<<endl;break;
			case 2:cout<<e.link()<<endl;break;
			case 3:recursion(1);break;
            default : cout<<"输入有误！"<<endl;break;
		}
	}
	while(n!=4);
	return;

}




