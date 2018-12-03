#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int biti=0;
    cout<<"nr= "; cin>>n;
    m=n;
    if(n==0){cout<<"1"; return 0;}
    while(n>0)
    {
        n=n>>1;
        biti++;
    }
    if(n==-1){cout<<1; return 0;}
    while(n<-1)
    {
        n=n>>1;
        biti++;
    }
    if(m<0) m=-m;
    for(int i=1; i<=biti; i++)
    {
        n=m;
        n=n<<(32-i);
        n=n>>31;
        if(n==-1)
            n=1;
        cout<<n<<endl;
    }
}
