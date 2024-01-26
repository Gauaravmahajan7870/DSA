//count num of element strictly greater than value X
#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int>v(5); 
 for(int i=0;i<v.size();i++){
    cin>>v[i];
 }
 cout<<"Enter num X :";
 int num =0;
 cin>>num;

 int count =0;
     for (int i=0;i<v.size();i++){
         if(v[i]>num){
             count++;
     }
 }
     cout<<count<<endl;

return 0;
}