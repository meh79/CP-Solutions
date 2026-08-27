#include<bits/stdc++.h>
using namespace std;
struct nametype{
    char first[40];
    char last[40];
};

struct student{
    int id;
    struct nametype name;
};


int main(){
    struct student one;
    strcpy(one.name.first,"Adiosu");

    cout<<one.name.first<<endl;
}