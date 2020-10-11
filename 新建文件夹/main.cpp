/*include <iostream>
#include <stdio.h>
using namespace std;
/*int fib(int n);
int main()
{
    int f[21];
    f[1]=f[2]=1;
    int n;
    cout<<"请输入月份"<<endl;
    cin>>n;
   /* if(n==1||n==2)
        cout<<1<<endl;
    if(n>2)
    {
        for(int i=3; i<=n; i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        cout<<f[n]<<endl;
    }*/
   /*cout<<fib(n);
    return 0;
}
int fib(int n){
  if(n==1||n==2)
    return 1;
  else
    return (fib(n-1)+fib(n-2));
}
*/
#include<iostream>
using namespace std;


int integerDivision(int n, int m);//得到划分数
void print(int sum, int k, int prio);//输出所有划分


int a;//将这两个数据设为全局变量
int mark[200];
int main()
{
 cout << "请输入一个正整数：";
 cin >> a;


 cout << "\n该正整数共有" << integerDivision(a, a) << "种划分！" << endl << endl;
 cout << "所有的划分如下所示：\n";
 print(0, 0, a);


 return 0;
}


//整数划分的递归算法
int integerDivision(int n, int m)
{
 if ((n<1) || (m<1))
 return 0;
 if ((n == 1) || (m == 1))
 {
 return 1;
 }
 if (n<m)
 return integerDivision(n, n);
 if (n == m)
 {
 return integerDivision(n, m - 1) + 1;
 }
 return integerDivision(n, m - 1) + integerDivision(n - m, m);
}


//输出划分的所有情况
void print(int sum, int k, int prio)
{
 if (sum > a)
 return;
 if (sum == a)
 {
 int i;
 for (i = 0; i < k - 1; i++)
 cout << mark[i] << "+";
 cout << mark[i]<<"\n" ;
 }
 else {
 for (int j = prio; j > 0; j--)
 {
 mark[k] = j;
 sum += j;
 print(sum, k + 1, j);//递归调用
 sum -= j;//恢复现场
 }
 }
}



