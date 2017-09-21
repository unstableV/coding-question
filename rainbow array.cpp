#include<iostream>
using namespace std;
int main()
{

    int a[100],n,i,q,j;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int c=0,c1=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];

        }
        for(j=0;j<n;j++)
        {
            if(a[j]!=7)
            {
                if(a[j]+1==a[j+1])
                {
                    c++;
                }
                c1++;

            }
            if(a[j]==7)
            {

                break;
            }
        }
            for(j=c1;j<n;j++)

            {

                if(a[j]==a[j+1]+1)
                {
                    c++;
                }
            }
            if(a[n-1]==a[n-2])
            {
                c=c-2;


            }



        if(c==12)
        {

            cout<<"yes"<<endl;

        }
        else{
            cout<<"no"<<endl;
        }

    }
    return 0;
}
