#include<bits/stdc++.h>
using namespace std;
long long int mod=pow(10,9)+7;


int main()
{
        
    int k;
    cin>>k;
    while(k--)
	{
        int n;
        cin>>n;
        
        vector<long long int>v(n);
        for(int i=0;i<n;i++){cin>>v[i];}
        
        long long int sum=0;
        long long int m=-9;
        
        for(int i=0;i<n;i++){m=max(m,v[i]);
            for(int j=i;j<n;j++)
			{
                sum=sum%mod+abs(v[i]-v[j])%mod;
            }
        }
    cout<<m%mod*sum%mod<<endl;
	}
        
}
