#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
     {int n;
        cin>>n;
        n*=2;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int m=1;
    	for(int i=0;i<n-1;i++)
        {
            if(a[i]+a[n-1-i]>m)
               m=a[i]+a[n-1-i];
        }
               
        cout<<m<<"\n";
        }
}
