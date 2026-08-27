#include<bits/stdc++.h>
using namespace std;

void print1(const vector<int>& v);
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

   vector<int> a;
   //the normal way
   //a.push_back(10);
   //a[0]=1111111;

   //cout<<a[0]<<endl;
    int x;
   for(int i=0;i<35;i++){
    cin>>x;
    a.emplace_back(x);
   }
   for(int x:a){
     cout<<"hello "<<x<<endl;
   }

   //size

   cout<<"size "<<a.size()<<endl;
   cout<<"capacity "<<a.capacity()<<endl;

   //controlling capacity,,,,, has to be greater than previous caoacity
   a.reserve(20);
   cout<<"capacity after reserved"<<a.capacity()<<endl;

   //testing at?
   cout<<"at "<<a.at(2)<<endl;
   //range er baire at dile kisu dibena acts like operator but operator garbage value dey

   //insert
   a.insert(a.begin()+4,11111111);
  cout<<a.at(0)<<endl;
  //insert er ei part ta onek interesting

  a.insert(a.end(),{7,8});
  cout<<"5 at "<<a.at(5)<<endl<<"6 at "<<a.at(6)<<endl;

  //erasing is fun actually
  
  a.erase(a.begin()+1);
  cout<<a[1]<<endl;
   print1(a);

  //this clears the vector fully;;;;
  //  a.clear();
  //  print1(a);
  

  //wanna clear only one last element of the vector??
   a.pop_back();
  print1(a); 
  // a.resize(4);
  // cout<<"after resize"<<endl;
  // print1(a);
  // a.resize(37);
  // cout<<"increasing the resize value"<<endl;
  // print1(a);

  //so resize korar por baki vlaue gula zero hoye jay jdi increase kore ager moto niye jaite chao ex from 37 to 5 to 37#


  //now we are assigning some shits
   vector<int> v;
   v.assign(4,5);
   print1(v);
   swap(a,v);
   print1(a);
   print1(v);
   swap(v[0],v[1]);
   print1(v);

  //idk iterator so we are skipping it

  /*now we are in the main part of the 
  vector the reason i am using it
  1. we are removing the duplicates
  2. we are sorting it increasing or decreasing order
  */

  cout<<endl<<endl<<endl;

  sort(v.begin(),v.end());
  print1(v);

  v.erase(unique(v.begin(),v.end()),v.end());
  print1(v);

  //dont ask why and how just mukhosto this part as i dont know the iterator





}




void print1(const vector<int>& v){
cout<<"size is ["<<v.size()<<"] & elements = ";
for(auto x:v){
  cout<<x<<" ";
}
cout<<endl;
return ;
}