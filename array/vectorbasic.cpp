#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>v;
 cout<<"size :- "<<v.size()<<endl;//find size of array
 cout<<"capacity :- "<<v.capacity()<<endl;//find capacity of array

 
 v.push_back (1);
 cout<<"size : - "<<v.size()<<endl;//push array means add elements
 cout<<"capacity : - "<<v.capacity()<<endl;

 v.push_back(2);
 cout<<"size:- "<<v.size()<<endl;//push array means add elements
 cout<<"capacity :- "<<v.capacity()<<endl;

 v.push_back(3);
 cout<<"size:- "<<v.size()<<endl;//push array means add elements
 cout<<"capacity :- "<<v.capacity()<<endl;

 v.push_back(4);
 cout<<"size:- "<<v.size()<<endl;
 cout<<"capacity :- "<<v.capacity()<<endl;

 v.resize(5);
 cout<<"size:- "<<v.size()<<endl;//resize array means change size of  elements
 cout<<"capacity :- "<<v.capacity()<<endl;

 v.pop_back();
 cout<<"pop size:- "<<v.size()<<endl;////pop array means remove elements
 cout<<"pop capacity :- "<<v.capacity()<<endl;



 

return 0;
}