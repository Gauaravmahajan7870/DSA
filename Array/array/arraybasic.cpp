#include<iostream>
using namespace std;
int main(){
char vowels[5];                   //learn in this how to input array //#using loops
/*for (int idx=0;idx<5;idx++){
    cin>>vowels[idx];
}*/

/*for (vowels:index){//for loop

}
for (int idx=0;idx<5;idx++){
    cout<<vowels[idx]<<" ";
}*/
 
 for (char &idx :vowels){              //for each loop
    cin>>idx;
 }
 for (int idx=0;idx<5;idx++){
    cout<<vowels[idx]<<" ";
 }
 

return 0;
}