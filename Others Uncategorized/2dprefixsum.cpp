#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int q;
    cin>>q;
    int ara[a+1][a+1];
    ara[0][1]=ara[1][0]=ara[0][0]=0;
    char c;
    int bin=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
           cin>>c;
           if(c=='.')bin=0;
           if(c=='*')bin=1;
           ara[i][j]=bin; 
           //cout<<ara[i][j]<<" "; 
        }  //cout<<endl;
    }
    //cout<<endl;
    //initializing all the zeros
    for(int i=0;i<=a;i++){
        ara[i][0]=0;
        ara[0][i]=0;
    }
    
    //now we are gonna apply prefix sum for 2d array
    //general theory; ps[i][j]=a[i][j]+ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
        // cout<<"For the value of i,j = "<<i<<" ; "<<j<<endl<<endl;
        // cout<<"ara[i][j]     "<<ara[i][j]<<endl;
        // cout<<"ara[i-1][j]   "<<ara[i-1][j]<<endl;
        // cout<<"ara[i][j-1]   "<<ara[i][j-1]<<endl;
        // cout<<"ara[i-1][j-1] "<<ara[i-1][j-1]<<endl<<endl<<endl;

          ara[i][j]=ara[i][j]+ara[i-1][j]+ara[i][j-1]-ara[i-1][j-1];
           // cout<<ara[i][j]<<" "; 
        }  //cout<<endl;
        
    }
    //cout<<endl<<"From here the ans starts"<<endl;
 
        int high_row{}, low_row{}, high_column{}, low_column{}, x1{},y1{},x2{},y2{};
        for(int i=0;i<q;i++){
            cin>>x1>>y1>>x2>>y2;
            //row high low
            if(x1>x2){high_row=x1;low_row=x2;}
            else {high_row=x2;low_row=x1;}
            //column high low
            if(y1>y2){high_column=y1;low_column=y2;}
            else {high_column=y2;low_column=y1;}
            // cout<<"high row      "<<high_row<<endl;
            // cout<<"low row       "<<low_row<<endl;
            // cout<<"high column   "<<high_column<<endl;
            // cout<<"low column    "<<low_column<<endl;   

            int up_nega=ara[low_row-1][high_column];
            int side_nega=ara[high_row][low_column-1];
            int corner=ara[x1-1][y1-1];
            int ans= ara[x2][y2]-up_nega-side_nega+corner;

            // cout<<"up negative   "<<up_nega<<endl;
            // cout<<"side negative "<<side_nega<<endl;
            // cout<<"Corner        "<<corner<<endl;
            // cout<<"answer        "<<ans<<endl<<endl<<endl;
            cout<<ans<<endl;
        
        }
    return 0;
}