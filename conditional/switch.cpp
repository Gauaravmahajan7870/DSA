#include<iostream>
using namespace std;
int main(){
  int day;
  cin>>day;

  switch(day){
     
     case 1 :
     cout<<"monday"<<endl;
     break;
     case 2 :
     cout<<"tue"<<endl;
     break;
     case 3 :
     cout<<"wed"<<endl;
     break;
     case 4:
     cout<<"thur"<<endl;
     break;
     case 5:
     cout<<"fri"<<endl;
     break;
     
     default :
     cout<<"holiday";
  }

return 0;
}