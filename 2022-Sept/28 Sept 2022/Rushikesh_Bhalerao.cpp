#include <iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cin>>n;
    for(i=0;i<=n;i++){
        
        for(k=n;k>=1;k--){
            char ch='A';
            if(k<=n-i){
            cout<<char(ch+k-1);}
            else{
                cout<<" ";
            }
        }
        

        for(j=1;j<=n-i;++j){
            char ch='A';
            cout<<char(ch+j-1);
        }
        
        cout<<endl;
    }
}
