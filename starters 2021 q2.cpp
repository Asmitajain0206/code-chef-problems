#include<iostream>
using namespace std;
int main()
{
    int T;
    int x,y,s;
    float p;
    cout<<"enter test cases no:"<<endl;
    cin>>T;
    while(T--)
    {
        cout<<"enter x,y: ";
        cin>>x>>y;
        s= 6-(x+y);
        p=(float)s/6;
        cout<<endl<<"probability of winning of 3rd person: "<<p<<endl;
    }
    return 0;
}
