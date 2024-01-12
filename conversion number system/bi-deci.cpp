#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
int power=1;
while(n>0){
    int lastdigit=n%2;
    ans+=lastdigit*power;
    power*=10;
    n/=2;
}
cout<<ans;
return 0;
}
