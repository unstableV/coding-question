#include<iostream>
using namespace std;
int main()
{

    int q,n,i,j,a[100],m[100];
    cin>>q;
    for(i=0;i<q;i++)
    {
        int sum=0,k=0;

        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }

        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                m[k]=a[j+1];
                k++;

            }
            if(a[j]<a[j+1])
            {
                m[k]=a[j];
                k++;
            }

        }

        for(j=0;j<k;j++)
        {

            sum=sum+m[j];

        }

      cout<<sum<<endl;


    }





}
