#include<stdio.h>


void solve() {
    
}

int main() {
    struct student {
        int id;
        char name[40];

    };

    struct student one;

    one.id=1;
    one.name = "Tahmid r afad";

    printf("ID:%d\nName: %s\n",one.id,one.name);
   
    return 0;
}