#include<bits/stdc++.h>
#include <chrono>
using namespace std;

#define debug(x) cout<<#x<<" "<<x<<endl;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //auto start = chrono::high_resolution_clock::now();   // ⏱ start timer

    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        int n;
        cin>>n;
        int x = n;
        int count = 0;

        for(int i=0;i<n;i++){
            if(x==0) break;
            if(x%2==1) count++;
            x = x/2;
        }
        debug(x);
        int a = 0;
        for(int j=0;j<count;j++){
            a = a + pow(2,j);
        }
        cout<<a<<'\n';
    }

//     auto end = chrono::high_resolution_clock::now();     // ⏱ end timer
//     double time_taken = chrono::duration<double>(end - start).count();
//     cerr << "Time taken: " <<fixed << setprecision(6)<< time_taken << " seconds\n";   // print to stderr
// cout << "\nTime taken: " << fixed << setprecision(6) << time_taken << " seconds\n";
    return 0;
}
