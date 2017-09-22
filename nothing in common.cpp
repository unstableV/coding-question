#include<iostream>
using namespace std;
int main()
{

    int q,n,i,j,a[100],b[100],k,n1;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int c1=0;
        cin>>n;
        cin>>n1;
        for(j=0;j<n;j++)
        {
            cin>>a[j];

        }
        for(j=0;j<n1;j++)
        {
            cin>>b[j];
        }
        if(n>n1)
        {
            for(j=0;j<n;j++)

            {

                for(k=0;k<n1;k++)
                {
                    if(a[j]==b[k])
                    {
                        c1++;

                    }

                }

            }
        }
        if(n1>n)
        {
            for(j=0;j<n1;j++)
            {
              for(k=0;k<n;k++)
              {

                  if(a[k]==b[j])
                  {
                      c1++;

                  }
              }
            }
        }
        cout<<c1<<endl;

    }


    return 0;

}
