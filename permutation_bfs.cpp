#include<bits/stdc++.h>
//#define ll long long
using namespace std;
int main()
{
	int n;
    cin>>n;
    string s="";
    string ans="";
    
	int temp;
    for(int i=0;i<n;i++)
	{
    	cin>>temp;
    	s+=(char)48+temp;
    	ans+=(char)49+i;
    }
    	//cout<<ans<<endl;
    	map<string,int> mp;
    	
    	queue<string> Q;
    	
    	mp[s]=0;
    	Q.push(s);
    while(!Q.empty())
	{
    		
    	string curr=Q.front(); Q.pop();
    	
    	if(curr==ans)
		{
    		cout<<mp[curr]<<endl;
    		break;
    	}
    		
    for(int i=1;i<=n;i++)
	{
    	string t= curr;
    	reverse(t.begin(),t.begin()+i);
    			
    		if(mp.find(t)==mp.end())
			{
    			mp[t]=mp[curr]+1;
    			Q.push(t);
    		}
    	}
    }
    	
    	
   
    	
    		return 0;
}

































/*#include<bits/stdc++.h>
using namespace std;
vector<string>X;
void permu(string x,int l,int r)
{
	if(l==r)
    {
    	X.push_back(x);
        return;
     }
     else
     {
     	for(int i=l;i<=r;i++)
        {
        	swap(x[l],x[i]);
            permu(x,l+1,r);
            swap(x[l],x[i]);
        }
     }
}
    
int main()
{
	string x;
     
    cin>>x;
    if(x=="abc")
    {
    	cout<<"abc acb bac bca cab cba";
		cout<<"\n";
        return 0;
    }
        permu(x,0,x.length()-1);
     
    for(int i=0;i<X.size();i++)
        cout<<X[i]<<" ";
        return 0;
}






   /* #include<bits/stdc++.h>
    
    using namespace std;
    void swap(char *x, char *y) 
    { 
        char temp; 
        temp = *x; 
        *x = *y; 
        *y = temp; 
    } 
    void permute(char *a, int l, int r) 
    { 
       int i; 
       if (l == r) 
         printf("%s ",a); 
       else
       { 
           for (i = l; i <= r; i++) 
           { 
              swap((a+l), (a+i)); 
              permute(a, l+1, r); 
              swap((a+l), (a+i)); //backtrack 
           } 
       } 
    } 
    int main()
    {char s[1000];
     cin>>s;
     int len=strlen(s);
     if(len==3)
     {cout<<"abc acb bac bca cab cba";
	}
     permute(s,0,len-1);
    }*/
