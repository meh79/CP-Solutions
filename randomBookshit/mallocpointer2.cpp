#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ara[5],num[5];
    int i,j,n;

    for(i=0;i<5;i++){
        //taking input form student
        cin>>n;
        num[i]=n;
        ara[i]=(int*)malloc(sizeof(int)*n);

        if(ara[i]==NULL){
            cout<<"Memory allocation failed"<<endl;
            return 1;

        }

        for(j=0;j<n;j++){
            //taking input for student marks
            cin>>ara[i][j];
        }


    }

    //printing the results
    for(i=0;i<5;i++){
        printf("Class %d : ",i+1);
        for(j=0;j<num[i];j++){
            printf("%4d",ara[i][j]);
        }

        cout<<endl;
    }
}