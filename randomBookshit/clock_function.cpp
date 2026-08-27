#include<bits/stdc++.h>
using namespace std;

void time_takes(clock_t *a, clock_t *b){
    cout<<(double(*b-*a)/CLOCKS_PER_SEC)<<endl;

}

int main(){
    int i,j,x,n;

    clock_t start_time, end_time;
    double time_elapsed;

    start_time =clock();

    n=12345678;

    for(i=0;i<1000000000;i++){
        for(j=0;j<10;j++){
            x=n*2;
        }
    }

    end_time=clock();

    time_takes(&start_time,&end_time);


}