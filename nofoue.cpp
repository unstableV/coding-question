#include<iostream>
using namespace std;
int main()
{

    int i,j,n,q,a[100],c1=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int c1=0;
        cout<<"enter q";
        cin>>q;
        for(j=0;j<q;j++)
        {
        cin>>a[j];
        }
        for(j=0;j<q;j++)
        {

                if(a[j]==4)
                {

                    c1++;
                }

        }
        cout<<c1<<endl;

    }
    return 0;
}
