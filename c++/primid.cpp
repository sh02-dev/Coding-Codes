#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=n-i;j=j+1)
        cout<<" ";
        for(j=1;j<=2*i-1;j=j+1)
        cout<<"*";
        cout<<endl;
    }

}    