/*include <iostream>
#include <stdio.h>
using namespace std;
/*int fib(int n);
int main()
{
    int f[21];
    f[1]=f[2]=1;
    int n;
    cout<<"�������·�"<<endl;
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


int integerDivision(int n, int m);//�õ�������
void print(int sum, int k, int prio);//������л���


int a;//��������������Ϊȫ�ֱ���
int mark[200];
int main()
{
 cout << "������һ����������";
 cin >> a;


 cout << "\n������������" << integerDivision(a, a) << "�ֻ��֣�" << endl << endl;
 cout << "���еĻ���������ʾ��\n";
 print(0, 0, a);


 return 0;
}


//�������ֵĵݹ��㷨
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


//������ֵ��������
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
 print(sum, k + 1, j);//�ݹ����
 sum -= j;//�ָ��ֳ�
 }
 }
}



