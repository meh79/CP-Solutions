#include<bits/stdc++.h>
using namespace std;
void ppair()
{
    pair<string, int> student;

    //how to assign
    student.first="aajdndadad";
    student.second=19;

    cout<<student.first<<" "<<student.second;
}   

void vector_pair(){
   // vector<int,int>
    vector<pair<int,int>> v;

    //2d vector
   /* vector<vector<int>>*/
}

void pair_initilization(){
    pair<string, int> student("adhd",1313);

    cout<<student.first<<" "<<student.second;
}

void pair_initi_v2(){
    pair<string, int> student;
    //error -> student=pair<>("asdad",1);
    student=pair<string,int>("asdad",1);

    cout<<student.first<<" "<<student.second;
}

void packing_unpacking(){
    pair<string, int> student;
    student={"kenny",121};//packing
    auto[name,age]=student;//unpacking

    cout<<student.first<<" "<<student.second<<endl;

    cout<<name<<" "<<age<<endl;
}

void makingpair(){
    pair<string,int> student;   
    student=make_pair<>("assda",112313);
    cout<<student.first<<" "<<student.second;
}

//a practical use of pair

int getDistance(const pair<int,int>& p1, const pair<int,int>& p2){
    auto[x1,y1]=p1;
    auto[x2,y2]=p2;

    return sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
}

int main(){
    pair<int,int> p1(10,12),p2(1,77);

    cout<<getDistance(p1,p2);
    
}