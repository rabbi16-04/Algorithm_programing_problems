#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length(),m=s2.length();
    int dp[n+1][m+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]&&s1[i-1]!='a'&&s1[i-1]!='e'&&s1[i-1]!='o'&&s1[i-1]!='i'&&s1[i-1]!='u'){
                    //cout<<s1[i-1]<<endl;
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else {
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
                //cout<<
        }
	}

    cout<<dp[n][m]<<endl;
    return 0;
}
