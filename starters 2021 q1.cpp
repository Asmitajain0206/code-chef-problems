#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],T;
    cout<<"no. of test cases : ";
    cin>>T;
    cout<<endl;
    while(T--)
    {
        cout<<"enter statics of player A: ";
        cin>>a[0]>>a[1]>>a[2];
        cout<<endl;
        cout<<"enter statics of player B: ";
        cin>>b[0]>>b[1]>>b[2];
        cout<<endl;
        if((a[0]>b[0] && a[1]>b[1]) || (a[1]>b[1] && a[2]>b[2]) || (a[0]>b[0] && a[2]>b[2]))
            cout<<"Player A has better statics"<<endl;
        else
            cout<<"Player B has better statics"<<endl;
    }
    return 0;
}
