 #include <bits/stdc++.h>
 #define ll long long int

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ev1,od1,ev2,od2;
        ll pairs=0;
        if(b&1){
            ev1=b/2;
            od1=ev1 + 1;
            if(a&1){
                ev2=a/2;
                od2=ev2 + 1;
            }
            else{
                ev2=a/2;
                od2=ev2;
            }
            pairs=(ev2*ev1) + (od2*od1);
            cout<<pairs<<endl;

        }
        else{
            ev1=b/2;
            od1=ev1;
            if(a&1){
                ev2=a/2;
                od2=ev2 + 1;

            }
            else{
                ev2=a/2;
                od2=ev2;
            }
            pairs=(ev2*ev1) + (od2*od1);
            cout<<pairs<<endl;


        }

    }
	return 0;
}

