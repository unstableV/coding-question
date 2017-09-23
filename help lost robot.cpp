#include<iostream>
using namespace std;
int main()
{

    int q,i,j,x1,y1,x2,y2;
    cin>>q;
    for(i=0;i<q;i++)
    {


        cin>>x1>>y1>>x2>>y2;
        if(x2>0&&y2==0&&(x2-x1)>0)
        {

            cout<<"right"<<endl;

        }
        if(y2>0&&x2==0&&(y2-y1)>0)
        {

            cout<<"top"<<endl;
        }
        if(x2<0&&y2==0&&(x2-x1)<0)
        {

            cout<<"left"<<endl;

        }
        if(y2<0&&x2==0&&(y2-y1)<0)
        {
            cout<<"down"<<endl;

        }
        if(y2>0&&x2>0)
        {

            cout<<"sad"<<endl;
        }
    }
    return 0;
}
