#include<iostream>
using namespace std;
int main(){
int array[]={1,2,3,4,5,6};
int size =sizeof(array)/sizeof(array[0]);
/*for (int ele:array){ //for each loop
  cout<<ele<<endl;
}*/

/*for (int idx=0;idx<size;idx++){//for loop
  cout<<array[idx]<<endl;
  }*/

  int idx=0; //while loop
  while(idx<size){
    cout<<array[idx]<<endl;
    idx++;
  }
return 0;
}