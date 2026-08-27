#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    int ara[]={1,2,4,6};
    int n=6;
    int ara_size=4;

    int xor_sum=0;

    //step 1: combine xor of full range 1 to n
    for(int i=1;i<=n;i++)xor_sum^=i;
    for(int i=0;i<ara_size;i++)xor_sum^=ara[i];

    //at this point xor_sum holds the two values 
    

    //step 2L Isolate the rightmost set bit (the lowest 1 bit)
    int set_bit = xor_sum & ~(xor_sum-1); //idk categrooy1 

    int first_missing =0;
    int second_missing=0;

    //step 3: Filter and xor range numbers into 2 distinct groups
    //now here is a something you should now, you are trying to find the bit which has on that particular bit set to one group and unset bits to another group
    for(int i=1;i<=n;i++){
        if((i&set_bit)!=0){
            first_missing^=i;//Group 1: Bit is active

        }
        else {
            second_missing^=i; //Group 2: Bit is inactive

        }
    }

    //step 4: Filter and XOR array elements into the same two groups
    for(int i=0;i<ara_size;i++){
        if((ara[i]& set_bit)!=0){
            first_missing^=ara[i]; //group 1 cancellation

        }
        else {
            second_missing ^=ara[i];// group 2 cancellation
        }


    }


    //output the two separated isolated values
    cout<<"The two missing numbers ara: "<<first_missing<<" and "<< second_missing <<endl;
    return 0;
}