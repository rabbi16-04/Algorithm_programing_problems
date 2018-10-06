#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m,max=0,min=0,ans;
        cin>>n>>m;
        int a[n],b[n],i=0,sum=0,j;
        while(i<n)
        {
        	cin>>a[i];
            i++;
        }
        if(m==0 || n==m)
           ans=0;
           else 
        {
            for(i=0;i<n;i++)
            {
            for(j=0;j<n-1;j++)
                {
                	if(a[j]>a[j+1])
                    {
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            for(i=0;i<n-m;i++)
            min=min+a[i];
            i=0;j=n-1;
            while(i<n-m)
            {
            max=max+a[j];
                j--;
                i++;
               }
           }
    	cout<<(max-min)<<endl;
    }
}


//jeff buckley
