//count num of occurence of particular element X
#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int>v(6);
 for(int i=0;i<6;i++){
    cin>>v[i];
 }

 cout<<"enter x: ";
 int x;
 cin>>x;

 int occurence=0;
 for(int i=0;i<6;i++){
    if(v[i]==x){
        occurence++;
    }
 }
    cout<<occurence<<endl;
return 0;
}