#include<bits/stdc++.h>
using namespace std;
int main()
{
    //for a replacement of a 2 d array

    int **ara,num[12];
    int i,j, total_classes,n;

    cin>>total_classes;

    ara=(int **)malloc(sizeof(int*)*total_classes);
    //when int *ara[5];
    //ara[i]=(int *)malloc(sizeof(int)*n);
    if(ara==NULL){
        cout<<"Memory allocation failed"<<endl;
        return 1;

    }

    for(i=0;i<total_classes;i++){
        //per row for i
        
        cin>>n;//numbers of student
        num[i]=n;
        ara[i]=(int*)malloc(sizeof(int)*n);// prottecta row te koto gula element thakbe manually build kortese

        if(ara[i]==NULL){
            cout<<"Memory allocation failed"<<endl;
        return 1;

        }

        for(j=0;j<n;j++){
            cin>>ara[i][j];//per row te full input nitese
        }

    }

    //printing the results
    for(i=0;i<total_classes;i++){
        cout<<"Class "<<i+1<<" : ";
        for(j=0;j<num[i];j++){
            printf("%4d", ara[i][j]);
        }
        cout<<endl;
    }

    return 0;

} 