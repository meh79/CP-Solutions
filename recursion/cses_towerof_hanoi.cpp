#include<bits/stdc++.h>
using namespace std;

//recursive function to solve the tower of hanoi

//n: number of disks
//source: where the disks start
//target: where we want the disks to end up
//spare: the extra peg used for temporary storage

void hanoi(int n,int source, int target, int spare){
    //base case: no disks left to move
    if(n==0)return;

    //step 1: move n-1 disks from source to spare
    //notice we use 'target' as the temporary spare
    hanoi(n-1,source,spare,target);

    //step 2: print the physical move of the biggest disk
    cout<<source<<" "<<target<<endl;

    //step 3: Move the n-1 disks from spare to target
    //notice we use 'sourc' as the temporary spare here
    hanoi(n-1,spare,target,source);
}



int main(){
    int n;
    if(cin>>n){
        //1. calculate and print the total minimum moves first
        //the formula for tower of hanoi moves is always (2^n)-1

        int total_moves=pow(2,n)-1;
        cout<<total_moves<<endl;

        //2. Start the recursive sequence
        //We want to move 'n' disks from peg 1 to peg 3 using peg 2 as spare

        hanoi(n,1,3,2);
    }

    return 0;
}