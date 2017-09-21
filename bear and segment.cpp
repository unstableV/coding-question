#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,j,n,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int flag=0,c1=0;
        cin>>s;
        for(j=0;j<s.size();j++)
        {
            if(s[j]==1&&s[j+1]==0)
            {
                c=j;
                break;
            }

        }
         cout<<c<<endl;
        for(j=c+1;j<s.size();j++)
        {

            if(s[j]==1)
            {
                flag=0;
                break;

            }
            else{

                flag=1;
            }
        }
        for(j=0;j<s.size();j++)
        {
            if(s[j]==0)
            {
                c1++;

            }

        }
        if(c1==s.size())
        {
            flag=1;

        }
        if(flag==1)
        {


            cout<<"yes"<<endl;

        }
        else
        {

            cout<<"no"<<endl;
        }




    }



return 0;



}
