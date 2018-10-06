#include<bits/stdc++.h>
using namespace std;
     
int main()
{
	int t;
    cin>>t;
    int p=t;
    t--;
    p-=t;
    while(t--)
	{
        vector<string> s;
        string b,str;
        vector< pair<int , int> >m;
        getline(cin>>ws,b);
        int l=0;
            
    for(unsigned int i=0;i<b.length();i++)
	{
        if(b[i]!=' ')
		{
        	str+=b[i];
        }
        else
		{
            s.push_back(str);
            m.push_back(make_pair(s[l].length(),l));
            l++;
            str.clear();
        }
    }
        s.push_back(str);
        m.push_back(make_pair(s[l].length(),l));
        sort(m.begin(),m.end());
        int i;
        for( i=0;i<l;i++)
		{
            cout<<s[m[i].second]<<" ";
        }
            cout<<s[m[i].second]<<endl;
    }
    	cout<<" ";
        while(p--){
           vector<string> s;
           string b,str;
           vector< pair<int , int> >m;
           getline(cin>>ws,b);
           int l=0;
            
        for(unsigned int i=0;i<b.length();i++)
		{
        	if(b[i]!=' ')
			{
                str+=b[i];
            }
                else
				{
                    s.push_back(str);
                    m.push_back(make_pair(s[l].length(),l));
                    l++;
                    str.clear();
                }
        }
            s.push_back(str);
            m.push_back(make_pair(s[l].length(),l));
            sort(m.begin(),m.end());
            int i;
            for( i=0;i<l;i++)
			{
                cout<<s[m[i].second]<<" ";
            }
    cout<<s[m[i].second]<<endl;
    }
}
