//find max value out of all elements in array
#include<iostream>
using namespace std;
int main(){
int array[]={11,15,17,23,45,89};
int size =sizeof (array )/sizeof (array[0]);
int max =array[0];
for (int idx=0;idx<size;idx++){
    if (max<array[idx]){
        (max=array[idx]);
    }
}
cout<<max<<endl;
return 0;
}