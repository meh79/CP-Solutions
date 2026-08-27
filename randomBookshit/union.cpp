#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    struct student {
        int id;
        char name[40];
        //char* name;

    };

    struct student one;

    one.id=1;

    //strcpy(one.name,"asbahdd ad");
    scanf("%d",&one.id);
    getchar();
    scanf("%[^\n]",one.name);
    printf("ID: %d\nName: %s\n",one.id,one.name);
   
    return 0;
}