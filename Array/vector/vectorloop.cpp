#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
for (int i=0;i<5;i++){//for loop
    int ele;
    cin>>ele;
    v.push_back(ele);//tp push element
}
    cout<<v[i]<<" ";
for (int i=0;i<v.size();i++){ 
    cout<<endl;

  for (int ele :v){ //for each loop
}
    cout<<ele<<" ";

  }
  cout<<endl;

  int idx=0;//while loop
  while(idx<v.size()){
    cout<<v[idx]<<" ";
    idx++;
  }
  cout<<endl;

return 0;
}