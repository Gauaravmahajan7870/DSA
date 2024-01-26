//linear search :-
//search if given statement is present in array or not if it not present then return -1 else return index
#include<iostream>
using namespace std;
int main(){
int array[]={1,2,3,4,5,6};
int key=11;
int ans=-1;
for (int i=0;i<5;i++){
    if (array[i]==key){
        ans=i;
    }
}
cout<<ans<<endl;
return 0;
}