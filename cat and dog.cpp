#include<iostream>
using namespace std;
int main()
{

    int q,n,d,c,l,i,max1;
    cin>>q;
    for(i=0;i<q;i++)
    {

        cin>>c>>d>>l;
        max1=c*4+d*4;

        if(l>2&&l<=max1&&l%2==0&&d%c==0)
        {



            cout<<"yes"<<endl;

        }
        else{

            cout<<"no"<<endl;
        }



    }


    return 0;





}
