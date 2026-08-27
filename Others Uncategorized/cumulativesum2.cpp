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
              2 hole x  ---->3 bar normal summation kora? D ke modulo kra 998244353. 
              
              
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
 
  
    int query=0;
    int sum=0;
    int times=0;
    //1 2 er loop q time cholbe
    for(int j=0;j<q;j++){
        cin>>query;
        sum=0;
        if(query==1){
            int x,v;
            cin>>x>>v;
            ara[x]=v;

        }
        
        else if(query==2){
            int x1;
            cin>>x1;
            for(int k=1;k<=x1;k++){
                times=ara[k]*(x1-k+1)*(x1-k+2)/2;
                sum=sum+times;
            }
            //for the 2 x :
            int ans=sum % 998244353;
            cout<<ans<<endl;

            



        }

    }
//problem main aray change hole abar new array hbe

    return 0;


}