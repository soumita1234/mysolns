#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--){
        string s, ans="";
        int ln,c=0;
        ll p=1,a=0;
        cin>>ln>>s;
        for(int i=ln-1; i>=0; i--){
            a+=p*(s[i]-'0');
            p=p*2;
            c++;
            if(c==4){
                char ch=(char)(97+a);
                ans.push_back(ch);
                c=0;
                p=1;
                a=0;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        ans.clear();
        s.clear();
      }


return 0;
}


