#include<iostream>
using namespace std;
int main(){
char vowels[5];
/*for (int idx=0;idx<5;idx++){
    cin>>vowels[idx];
}*/

/*for (vowels:index){

}
for (int idx=0;idx<5;idx++){
    cout<<vowels[idx]<<" ";
}*/
 
 for (char &idx :vowels){
    cin>>idx;
 }
 for (int idx=0;idx<5;idx++){
    cout<<vowels[idx]<<" ";
 }
 

return 0;
}