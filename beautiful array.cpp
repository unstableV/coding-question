#include<iostream>
using namespace std;
int main()
{

    int a[100],i,n,q,a1[100],j,k;
    cin>>q;

    for(i=0;i<q;i++)
    {
        int w=0,flag=0;

        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[i];
        }
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                a1[w]=a[i]*a[j];
                w++;
            }
        }
        for(j=0;j<n;j++)
        {

            for(k=0;k<w;k++)
            {

                if(a[j]==a1[k])
                {
                    flag=1;
                    break;

                }


            }

            if(flag==1)
            {

                break;
            }
        }

        if(flag==1)
        {

            cout<<"yes"<<endl;
        }
        else{

            cout<<"no"<<endl;

        }


    }

    return 0;




}
