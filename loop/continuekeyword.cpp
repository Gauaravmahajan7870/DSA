#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=n;i<=50;i++){
    if(i%5==0){
        continue;
    }
    cout<<i;
}
return 0;
}