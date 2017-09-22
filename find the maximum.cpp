#include<iostream>
using namespace std;
int main()
{

    int a[100],i,j,n,q,t;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int max1=0;

        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==n-1)
            {
                t=a[j];
                break;
            }
        }
        for(j=0;j<n;j++)
        {

            if(a[j]>max1&&a[j]!=t)
            {
                max1=a[j];
            }

        }

        cout<<max1<<endl;


    }
    return 0;

}

