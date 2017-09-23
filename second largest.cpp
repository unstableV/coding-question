#include<iostream>
using namespace std;
int main()
{
    int q,n,i,j,a,b,c,a1[3],k,temp;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int max1=0;
        cin>>a>>b>>c;
        a1[0]=a;
        a1[1]=b;
        a1[2]=c;
        for(j=0;j<2;j++)
        {

            for(k=j+1;k<3;k++)
            {

                if(a1[j]<a1[k])
                {
                    temp=a1[j];
                    a1[j]=a1[k];
                    a1[k]=temp;
                }
            }

        }
        cout<<a1[1]<<endl;

    }

    return 0;


}
