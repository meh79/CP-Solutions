#include<bits/stdc++.h>
using namespace std;
//void pro(vector<vector <int>>& a);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    vector<vector<int>> a(n);
    for(int i=0;i<q;i++){
        int alpha=0,t=0,x=0;
        cin>>alpha;
        
        
        if(alpha==0){
            cin>>t>>x;
            a[t].emplace_back(x);
        }

        else if(alpha==1){    //dump == print
            //case 1:
            cin>>t;
            for(int k=0;k<a[t].size();k++){
                if(k+1==a[t].size())cout<<a[t][k];
                else cout<<a[t][k]<<" ";
            } cout<<endl;
        }

        else if(alpha==2){
            cin>>t;
            a[t].clear();
            

        }
    } 
    return 0;  
}


/*
0-> pushBack(t, x): Add element x at the end of At
1-> dump(t): Print all elements in At
2-> clear(t): Clear At. If At is empty, do nothing

I cant connect n with all the test cases
*/