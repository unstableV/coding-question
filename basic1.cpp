#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,j,n;
    cin>>n;

    for(int t=0;t<n;t++)
    {
        int c=0;
        cin>>s;

    for(i=0;i<s.size()-1;i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                c++;
                break;


            }

        }
    }
    if(c>=2)
    {

        cout<<"yes"<<endl;

    }
    else{

        cout<<"no"<<endl;
    }
    }

    return 0;



}
