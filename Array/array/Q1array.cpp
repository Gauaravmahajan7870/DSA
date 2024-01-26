//calulate the sum of all elements in given array
#include<iostream>
using namespace std;
int main(){
int array[]={0,1,2,3,4,5,6};
int size =sizeof (array)/sizeof (array[0]);
int sum =0;

for (int idx =0;idx<size;idx++){
    sum +=array[idx];
}
cout<<sum<<endl;
return 0;
}