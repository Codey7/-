/*2. 数制转换问题
  任意给定一个M进制的数x ，请实现如下要求
1) 求出此数x的10进制值（用MD表示）
2) 实现对x向任意的一个非M进制的数的转换。
3) 至少用两种或两种以上的方法实现上述要求（用栈解决，用数组解决，其它方法解决）。*/


#include <iostream>
#include <stack>
using namespace std;
class  Conver
{
public:
void  con_menu();
	int ten_converstack();
	int eve_converstack();
	int arr_conver();
private:
	int x;
};
void Conver::con_menu()
{
            cout<< "--------------------------------------------------数制转换问题--------------------------------------- "<<endl;
        cout<<"****************************1.   十进制求值（栈）*********************"<<endl;
        cout<<"****************************2.   任何进制求值（栈）***********************"<<endl;
        cout<<"****************************3.   任何禁止求值（数组）*************************"<<endl;

}
int Conver::ten_converstack()
{

	stack <int>   mystack;
	cout<<"请输入要转换的数："<<endl;
	cin>>x;
	while(x)
	{
		mystack.push(x%10);
		x=x/10;
	}
	while(!mystack.empty())
	{
		cout<<mystack.top();
		mystack.pop();
	}
	return 0;

}
int Conver::eve_converstack()
{
	stack <int>   mystack;
	cout<<"请输入要转换的数："<<endl;
	cin>>x;
	int m;
	cout<<"请输入要转换的进制："<<endl;
	cin>>m;
	while(x)
	{
		mystack.push(x%m);
		x=x/m;
	}
	while(!mystack.empty())
	{
		cout<<mystack.top();
		mystack.pop();
	}
	return 0;
}
int Conver::arr_conver()
{
	int arr[100];
	int count=0;
	cout<<"请输入要转换的数："<<endl;
	cin>>x;
	int k=x;
	cout<<"请输入要转换的进制："<<endl;
	int m;cin>>m;
	while(x)
	{
		x=x/m;
		count++;
	}
	for(int i=count-1;i>=0;i--)
	{
		arr[i]=k%m;
		k=k/m;
	}
	for (int i = 0; i < count; ++i)
	{
		cout<<arr[i];
	}
	return 0;
}



