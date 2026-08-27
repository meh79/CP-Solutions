#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    //test cases
    for(int testcase=0;testcase<t;testcase++){
      int n_chemical,m_reaction;
      cin>>n_chemical>>m_reaction;
    
    int m_values=m_reaction*3+n_chemical;
    int ara_m[m_values];
    
    // ara zero
      for(int i=0;i<m_values;i++){
        ara_m[i]=0;
        //cout<<ara_m[i];
      }

      
      for(int chem=0;chem<m_values;chem++){
        cin>>ara_m[chem];

      }
    
     
      int temp=0;
      int m,value=0;
      //m t areaction
      for(int chem=0;chem<m_values;chem++){
        m=0;
        cin>>temp;
        for(int j=0;j<m_values;j++){
            if(temp==ara_m[j]){m=1;break;}
        }
        if(m==0){ ara_m[chem]=temp;value++;}

      }
      
        
      cout<<value<<endl;
      
      
      
    } 

 }