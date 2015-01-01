/*9. 排序综合

利用随机函数产生N个随机整数（20000以上），对这些数进行多种方法进行排序。
要求：
1) 至少采用三种方法实现上述问题求解（提示，可采用的方法有插入排序、希尔排序、起泡排序、快速排序、选择排序、堆排序、归并排序）。并把排序后的结果保存在不同的文件中。
2) 统计每一种排序方法的性能（以上机运行程序所花费的时间为准进行对比），找出其中两种较快的方法。
*/

#include <iostream>
#include <fstream>
#include <ctime>
#define k 20000
using namespace std;
class compo_sort
{
            public:
            void get_rand();//获取随机数
            void quick_sort(int arr[],int a,int b);//快速排序
            void bubble_sort(int arr[]);//冒泡排序
            void select_sort();//选择排序
            void save_file(string str);//保存文件
            private :
            int num[k];//随机数组
};
void compo_sort::get_rand(){
                srand((unsigned)time(NULL));
                for(int i=0;i<20000;i++)
                {
                    num[i]=rand()%100;
                }
}
void compo_sort::save_file(string str)
{
          ofstream outfile(str);
          for(int i=0;i<20000;i++)
          {
                outfile<<num[i]<<"  ";
                if(i%100==0)
                outfile<<endl;
          }
}

void compo_sort::quick_sort(int arr[],int a,int b)
{
          time_t start=0;end=0;
               if(a<b)
    {
        int i=a,j=b,temp=arr[0];
        while(i<j)
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

void compo_sort::bubble_sort(int arr[])
{
          time_t start=0;end=0;
          time(&start);
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
    time(&end);
    cout<<"所用时间为：   "<<(end-start)<<endl''
}


void compo_sort::select_sort(int arr[])
{
            time_t start=0;end=0;
            time(&start);
          int k=0;
            for(i=0;i<arr.length()-1;i++)
        {
                k=i;
        for(j=i+1;j<arr.length();++j)
        {
                if(arr[j]<arr[k])
                        k=j;
                }
                 int temp=arr[k];
                arr[k]=arr[i];
                arr[i]=temp;
                }
            time(&end);
            cout<<"所用时间为：   "<<(end-start)<<endl''
}















