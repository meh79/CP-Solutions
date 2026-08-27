#include<bits/stdc++.h>
using namespace std;

typedef struct{
    string first, last;
} nametype;

typedef struct{
    int id;
    nametype name;
    string grade;
} studenttype;

// OPTIMIZED: Using C++ References (&) instead of pointers (*)
void grades(studenttype& s, int& mark){
    // Notice how the syntax drops all -> or (*s). tokens!
    if(mark >= 80)       s.grade = "A+";
    else if(mark >= 70)  s.grade = "A";
    else if(mark >= 60)  s.grade = "A-";
    else if(mark >= 50)  s.grade = "B";
    else if(mark >= 40)  s.grade = "C";
    else                 s.grade = "F";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    studenttype student[3];
    int i, n = 3;
    int mark[] = {72, 82, 60};

    for(i = 0; i < n; i++){
        cin >> student[i].id >> student[i].name.first >> student[i].name.last;
    }

    for(i = 0; i < n; i++){
        // CLEAN: Pass the objects natively. No & or * required here.
        grades(student[i], mark[i]);
    }

    for(i = 0; i < n; i++){
        cout << "ID: " << student[i].id << "\n";
        cout << "Name: " << student[i].name.first << " " << student[i].name.last << "\n";
        cout << "Grade: " << student[i].grade << "\n\n";
    }

    return 0;
}