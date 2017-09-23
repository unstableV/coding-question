#include<iostream>
using namespace std;
int main()
{

    int n,i,q,sum,r,j,a[100];
    cin>>q;
    for(i=0;i<q;i++)
    {
        int k=0;
        cin>>n;
       while(n>0)
       {
           r=n%10;
           a[k]=r;
           n=n/10;
           k++;
       }
       for(j=0;j<k;j++)
       {

           sum=a[0]+a[k-1];

       }


    cout<<sum<<endl;

    }





}
