//print  n factorial no.

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int factorial=1;
for (int i =1;i<=n;i++){
    factorial +=1;
    cout<<factorial;
}
return 0;
}