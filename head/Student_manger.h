/*4. 学生成绩管理系统
现有学生成绩信息文件1（1.txt），内容如下（数据可以自拟）
姓名    学号   语文  数学   英语    
张明明  01     67    78      82
李成友  02     78    91      88
张辉灿  03     68    82      56
王露    04     56    45      77
陈东明  05     67    38      47
….      ..      ..     ..       …
学生成绩信息文件2（2.txt）,内容如下:
姓名    学号   语文  数学   英语    
陈果    31     57    68      82
李华明  32     88    90      68
张明东  33     48    42      56
李明国  34     50    45      87
陈道亮  35     47    58      77
….      ..      ..     ..       …
试编写一管理系统，要求如下：
1) 实现对两个文件数据进行合并，生成新文件3.txt
2) 抽取出三科成绩中有补考的学生并保存在一个新文件4.txt
3) 对合并后的文件3.txt中的数据按总分降序排序(至少采用两种排序方法实现)
4) 输入一个学生姓名后,能查找到此学生的信息并输出结果(至少采用两种查找方法实现)
5) 要求使用结构体，链或数组等实现上述要求。*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Manger
{   public :
          int count;
           string name;
            string number;
            string chinese;
            string  english;
            string math;
            void read_txt(string str,Manger m);//读取文件
            void stu_merge(Manger m1[],Manger m2[]);//合并文件
            void  make_up(string str,Manger m[]);//补考
            void sort_all(string str,Manger m[]);//排序
            void  stu_find(Manger m[],string n);//查找学生姓名
  //          void binary_serch(Manger m[], string n,int left,int right,int mid);
            void quick_sort(int arr[],int a,int b);//快速排序
            void bubble_sort(int arr[]);//冒泡排序
};

void Manger::read_txt(string str,Manger m[])
{
            fstream read(str);
            count=0;
            if(str)
            {
                string a,b,c,d,e;
                while(str>>a>>b>>c>>d>>e)
                {
                m[count].name=a;
                m[count].number=b;
                m[count].chinese=c;
                m[count].english=d;
                m[count].math=e;
                count++;
                }
                str.close();
                else{
                    cout<<"打开文件失败"
                }

            }
}
void Manger::stu_merge(Manger m1[],Manger m2[])
{
            ofstream outfile("3.txt");//输出文件
                for(int i=0;i<count-1;i++)
                         {
                            outfile<<m1[i].name<<m1[i].number<<m1[i].chinese<<m1[i].english<<m1[i].math<<endl;
                        }
                for (int i = 1; i < count-1; i++)
                {
                            outfile<<m2[i].name<<m2[i].number<<m2[i].chinese<<m2[i].english<<m2[i].math<<endl;
                }
                outfile.close();
}
void Manger::make_up(string str,Manger m[])
{
          read_txt(str,m);
          ofstream make_out("4.txt");
          make_out<<m[0].name<<m[0].number<<m[0].chinese<<m[0].english<<m[0].math<<endl;
          for(int i=1;i<count-1;i++)
          {
                if((int)m[i].chinese<60||(int)m[i].english<60||(int)m[i].math<60)
                {
                    make_out<<m[i].name<<m[i].number<<m[i].chinese<<m[i].english<<m[i].math<<endl;
                }
          }
            ofstream.close();
}
void Manger::sort_all(string str,Manger m)
{
    read_txt(str,m);
    int score[count-1];
    for(int i=1;i<count;i++)
    {
              score[i]=(int)m[i].chinese+(int)m[i].english+(int)m[i].math;   //计算成绩总和
    }
    cout<<"请输入排序方式1/2：  "<<endl;
    int a;
    cin>>a;
    switch(a)
                    {
                        case 1 :quick_sort(score,0,score.length()-1);
                         for(int i=0;i<score.length();i++)
                              {
                                      cout<<score[i]<<"    ";
                              }
                        break;
                        case 2: bubble_sort(score);
                           for(int i=0;i<score.length();i++)
                              {
                                      cout<<score[i]<<"    ";
                              }
                               break;
                        default :
                        cout<<"输入有误！"<<endl;
                    }

}
void Manger::quick_sort(int arr[],int a,int b)
{
    if(a<b)
    {
        int i=a,j=b,temp=arr[0];
        while(i<j)//从左往右
            while(i<j&&arr[j]>temp)
                j--;
            if(i<j)
                arr[i++]=arr[j];
            while(i<j&&arr[i]<temp)
                i++;
            if(i<j)
                arr[j--]=arr[i];
    }
    arr[i]=x;
    quick_sort(arr,a,i-1);
    quick_sort(arr,i+1,b);
}
void   Manger::bubble_sort(int arr[])
{
    for(int i=0;i<arr.length()-1;i++)
        {
            for(int j=0;j<arr.length()-1-i;j++)
        {
            if(arr[i]>arr [i+1])
            {
                int temp=arr [i];
                arr[i]=a[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void Manger::stu_find(Manger m[], string n)
{
            for(int i=1;i<count;i++)
            {
                if(m[i].name==n)
                    cout<<m[i].name<<"  "<<m[i].number<<"  "<<m[i].chinese<<"  "<<m[i].english<<"  "<<m[i].math<<endl;
            }
}
/*void Manger::binary_serch(Manger m[] , string n,int left,int right,int mid)
{
            for(left=1,right=m.count-1;left<=right)
            {
                mid=(left+right)/2;
                if(n==m[mid].name)
                    break;
                else if (x<a[middle])
                        right=middle-1;
    else
        left=middle+1;
            }
}*/



































