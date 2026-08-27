#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>ara[i][j];

        }
    }

    //calculating hourlasses sum
    int sum=0,j=0;
    // for(int i=0;i<4;i++){
    //     sum=0;
    //     for( j=0;j<=i+2;j++){
    //         sum+=ara[i][j];
    //         sum+=ara[i+2][j];
    //         printf("upper ara[%d][%d]=%d\n",i,j,ara[i][j]);
    //         printf("lower ara[%d][%d]=%d\n",i+2,j,ara[i+2][j]);

    //     }
    //     sum+=ara[i+1][j-2];
    //     printf("middle ara[%d][%d]=%d\n",i+1,j-1,ara[i+1][j-1]);
    //     cout<<i<<" th Hour glass sum= "<<sum<<endl<<endl;;
    // }
    //upper sum
    //int k=0;
    int high=INT_MIN;
    for(int i=0;i<4;i++){
        for(int k=0;k<4;k++){
            for(;j<k+3;j++){
                sum+=ara[i][j]+ara[i+2][j];
                //cout<<ara[i][j]<<" ";
            }
            //cout<<endl;
            //cout<<ara[i+2][j]<<" ";
            sum+=ara[i+1][j-2];
            high=max(sum,high);
            j=k+1;
            //cout<<sum<<endl;
            sum=0;
        }
        
        j=0;
        
    }
    cout<<high<<endl;

    //  for(int i=0;i<4;i++){
    //     for(int k=0;k<4;k++){
    //         for(;j<k+3;j++){
    //             cout<<ara[i+2][j]<<" ";
    //         }
    //         j=k+1;
    //         cout<<endl;
    //     }
    //     j=0;
    //     cout<<endl;
    // }
    
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];

    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            cin>>a[i][j];

    int mx = INT_MIN;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int sum = a[i][j] + a[i][j+1] + a[i][j+2]
                    + a[i+1][j+1]
                    + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];

            mx = max(mx, sum);
        }
    }

    cout<<mx<<endl;
}
    */
