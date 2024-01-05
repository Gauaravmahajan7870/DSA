#include<iostream>
using namespace std;
int main(){
int n;/*while(n>0){
        int i = n%10;
        cout<<i;
        n/=10;
    }*/
    
cin>>n;
int reverse = 0;
while (n>0){
    int lastdigit = n%10;
    reverse = reverse*10 + lastdigit;
    n/=10;
}
cout<<reverse;
return 0;
}
