#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    /*Frist e An and Qn input
              A1,A2,A3......An   DONE
              either 1 or 2 age print nibe   DONE
              1 hole x v ---> ara[x]=v kora     DONE
              2 hole x  ---->3 bar prefix sum kore latest value D ke modulo kra 998244353. 
              
              
              sample:   3 3
                        1 2 3
                        2 3
                        1 2 0
                        2 3

              output:   15
                        9

*/


    int a,q;
    cin>>a>>q;
    int ara[a+1];
    for(int i=1;i<=a;i++){
        cin>>ara[i];

    }
    int cpy[a+1];
    for(int i=1;i<=a;i++){
        cpy[i]=ara[i];

    }    
    ara[0]=0,cpy[0]=0;
    int query=0;

    //1 2 er loop q time cholbe
    for(int j=0;j<q;j++){
        cin>>query;
        if(query==1){
            int x,v;
            cin>>x>>v;
            ara[x]=v;
            // //updating new array and printing them
            // cout<<"after replacing the value ";
            // for(int i=1;i<=a;i++){
            // cout<<ara[i]<<" ";
            // }
            // cout<<endl;

            //copying the array
             for(int i=1;i<=a;i++){
            cpy[i]=ara[i];

            }
        }
        else if(query==2){
            int x1=0;
            cin>>x1;
            for(int k=0;k<3;k++){
                for(int l=1;l<=x1;l++){
                    cpy[l]=cpy[l]+cpy[l-1];
                }
            }
            //for the 2 x :
            int ans=cpy[x1]%998244353;
            cout<<ans<<endl;

            // //printing the value]
            // cout<<"Printing the main array ";
            //  for(int i=1;i<=a;i++){
            // cout<<ara[i]<<" ";
            // }
            // cout<<endl;
            //  cout<<"Printing the copy array ";
            //  for(int i=1;i<=a;i++){
            // cout<<cpy[i]<<" ";
            // }
            // cout<<endl;



        }

    }
//problem main aray change hole abar new array hbe

    return 0;


}