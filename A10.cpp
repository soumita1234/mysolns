#include <iostream>

using namespace std;

int main()
{
    int a[5][5];
    int result;
    int r,c;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                if(i<2){
                    r=2-i;
                    } else{
                    r=i-2;
                    }

                if(j<2){
                    c=2-j;
                    } else{
                    c=j-2;
                    }
                result = r+c;

            }
        }
    }
    cout<<result;


    return 0;
}
