#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int N,Q,a=0,m=0,p,s,j,K;
	cin>>N>>Q;
	
	int i,T[N],S[N],q[Q];
	for(i=0;i<N;i++)
	cin>>T[i];
	
	for(i=0;i<N;i++)
	cin>>S[i];
	cin>>K;
	
	s=Q;
	while(s--)
	{   m=0;a=0;
	    for(i=0;i<K;i++)
	    {for(j=0;j<N;j++)
	     {
	        if(m<S[j])
	        {
	            m=T[j];
	            p=j;
	        }
	     }
	     q[i]=m;
	    }
	    
	    for(i=0;i<K;i++)
	    a+=q[i];
	    cout<<a<<endl;
	}
}
