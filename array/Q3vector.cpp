//count of element strictly greater than value X
#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>v(6);
for(int i=0;i<6;i++){
    cin>>v[i];
}

 cout<<"enter the x :";
 int x;
 cin>>x;

 int occurence=0;
 for (int i=0;i<6;i++){
    if(v[i]>x){
        occurence++;
    }
 }
 cout<<occurence;
return 0;
}