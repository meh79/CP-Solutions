#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>& v,int n){
    int ans;
    if(n==1)return 1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]&&v[i]+1!=v[i+1]){ans=v[i]+1; return ans;}
        
    }
}
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<int> v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        if(v[0]==0){
            int mex=missing(v,n);
            cout<<"For "<<i<<endl;
            cout<<"Mex "<<mex<<endl;

        }
        //else cout<<"EKhno code lekha hoy nai"<<endl;
        else if(v[0]>0){
            int low=v[0];
            
            for(int k=0;k<n;k++){
                v[k]=v[k]-low;
            }
            cout<<"For "<<i<<" LOW "<<low<<endl;
            cout<<"The new array ";
            for(auto x:v)cout<<x<<" ";cout<<endl;
            int mex=missing(v,n);
            cout<<"Mex "<<mex<<endl;
        }
        //corner case overflow
        else if(v[0]<0){
            int k;
           for( k=0;k<n;k++){
            if(v[k]>=0)break;

           }
           if(v[k]>0){
            int low=v[k];
                cout<<"Zero er upore dhuksi ";
                for(int l=0;l<n;l++){
                    v[l]=v[l]-low;
                }
                cout<<"For "<<i<<" LOW "<<low<<endl;
                cout<<"The new array ";
                for(auto x:v)cout<<x<<" ";cout<<endl;
                int mex=missing(v,n);
                cout<<"Mex "<<mex<<endl;
            }
            else if(v[k]==0){
                cout<<"Zero te dhuksi  ";
                for(int l=0;l<k;l++)v[l]=0;
                int mex=missing(v,n);
            cout<<"For "<<i<<endl;
            cout<<"The new array ";
                for(auto x:v)cout<<x<<" ";cout<<endl;
            cout<<"Mex "<<mex<<endl;
            }
        }
        
    }
}