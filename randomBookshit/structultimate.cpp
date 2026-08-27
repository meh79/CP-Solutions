#include<bits/stdc++.h>
using namespace std;

struct nametype{
    char first[40];
    char last[40];
};

struct studenttype{
    int id;
    struct nametype name;

};

int main(){
    struct studenttype student[5];
    int i,n=5;

    for(int i=0;i<n;i++){
        printf("Enter the id of the %d student: ",i+1);
        scanf("%d", &student[i].id);
        printf("Enter the first name of the %d student: ",i+1);
        scanf("%s", student[i].name.first);
        printf("Enter the last name of the %d student: ",i+1);
        scanf("%s", student[i].name.last);

        cout<<endl;
    }
    cout<<"Output:"<<endl<<endl;

    for(int i=0;i<n;i++){
        printf("ID: %d\nName: %s %s\n",student[i].id, student[i].name.first, student[i].name.last);
    }

    return 0;
}
