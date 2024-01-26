//find total num of pair in array where sum is equal to given value x 
#include<iostream>
using namespace std;
int main(){

 int array[]={0,1,2,3,4,5};
 int size=6;
 int targetsum=3;
 int pairs=0;
   for(int i=0;i<size;i++){
     for (int j=0;j<size;j++){
        if (array[i]+array[j]==targetsum){
            pairs++;
        }
     }
   }
    cout<<pairs<<endl;
return 0;
}