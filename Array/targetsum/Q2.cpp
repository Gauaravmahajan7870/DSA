//count num of triplet whose sum is equal to given value x
#include<iostream>
using namespace std;
int main(){

 int array[]={0,1,2,3,4,5};
 int size =6;
 int triplet=0;
 int targetsum=5;
 
 for(int i=0;i<size;i++){
     for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
           if(array[i]+array[j]+array[k]==targetsum){
             triplet++;
           }
        }
    }
} 
cout<<triplet<<endl;

return 0;
}