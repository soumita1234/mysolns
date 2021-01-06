#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int N,k;
        cin>>N>>k;
        if(N==k){
            for(int i=0;i<N;i++)
            cout<<(i+1)<<" ";
            cout<<endl;
        }
        else{
            int arr[N];
            if(N&1){
                for(int i=0;i<N;i++)
                arr[i]=(i+1)*pow(-1,i+2);
            }
            else{
                for(int i=0;i<N;i++)
                arr[i]=(i+1)*pow(-1,i+1);
            }
            int sum=1,count,diff=0;
            count=ceil((double)N/2);
            for(int i=1;i<N;i++){
                sum+=arr[i];
                if(sum>0){
                    if(count<k){
                        diff=k-count;
                        for(int j=N-1;j>=0;j--){
                            if(arr[j]<0){
                                arr[j]=arr[j]*-1;
                                count++;
                                if(count==k)
                                break;
                            }
                        }
                    }
                    else if(count>k){
                        diff=count-k;
                        for(int j=N-1;j>=0;j--){
                            if(arr[j]>0){
                                arr[j]=arr[j]*-1;

                                count--;
                                if(count==k)
                                break;
                            }
                        }
                    }

                }
            }
            for(int i=0;i<N;i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
        }

    }

	return 0;
}
