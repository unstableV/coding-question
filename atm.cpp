#include<iostream>
using namespace std;
int main()
{

    int a,b,p;
    float s;
    cin>>a>>b;
    if(b>a&&a%5==0)
    {
        p=b-a;
        s=p-0.5;
        cout<<s<<endl;
    }
    else{

        cout<<b<<endl;
    }



    return 0;


}
