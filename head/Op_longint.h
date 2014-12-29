/*3. 长整数运算
设计一个程序实现两个任意长的整数求和运算。

提示：可利用双项循环链表实现长整数的存储，每个结点含一个整型变量。*/



#include <iostream>
#include <malloc.h>
using namespace std;
class Op_longint
{
public:
   void init(Node **h);
   void insert(Node*,int);
  void operate(Node *a,Node *b);
};
struct Node
{
    int data;
    Node *pre;
    Node *next;
}
//创建双向链表
void Op_longint::init(Node **h)
{
        *h=(Node* )malloc(sizeof(Node));
        (*h)->data=0;
        (*h)->pre=*h;
        (*h)->next=*h;
}
// Node *h =new Node [20];
void insert(Node *h,int x) 
{ 
    	h->x++;  
	Node *s; 
            	s=(Node *)malloc(sizeof(Node));
	s->data=x; 
                s->pre=h->pre; 
                h->pre->next=s;  
                s->next=h;  
                h->pre=s; 
 }  

//加法运算
void Op_longint::operate(Node* a,Node* b)
{
       Node* p=a->pre;
       Node* q=b->pre;
       int x;
       while(q!=b)
       {
       	int temp=p->data+q->data+e;
       	if(temp>9999)
       	{
       		p->data=temp%10000;
       		e=temp/10000;
       	}
       	else{
       		p->data=temp;
       	}
       	p=p->pre;
       	q=q->pre;
       }
       while(p!=a)
       {
       	int temp=p->data+e;
       	if(temp>9999)
       	{
       		p->data=temp%10000;
       		e=temp/10000;
       	}
       	else
       		p->data=temp;
       	p=p->pre;
       }
       p=a->next;
       if(e!=0)
	{
		Node* n;
		n=(Node*)malloc(sizeof(Node));
		n->data=e;
		n->pre=p->pre;
		p->pre->next=n;
		n->next=p;
		p->pre=n;
	}

}
