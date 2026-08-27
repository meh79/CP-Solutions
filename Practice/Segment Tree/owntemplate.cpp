#include<bits/stdc++.h>
using namespace std;

const int N =3e5+9;

int a[N];//the orginal array

//building without the structure

long long int tree[4*N];

//build function
//start = raw array start index
//end = raw array end index
// node is of tree's
void build( int node, int start, int end ){
    if(start == end){
        tree[node]=a[start]; //start and end same
        return ;
    }

    int mid=(start+end)/2;
    build(2*node+1,start, mid);
    build(2*node+2, mid+1, end);
    tree[node]=tree[2*node+1]+tree[2*node+2];//left + rught child for the node
}

//query function
//start = raw array start index
//end = raw array end index
// node is of tree's
// l=left r=right
long long int query(int node, int start, int end, int l, int r){
    //no overlap
    if(l>end||r<start)return 0;
    //total overlap
    // we are checking if the box (that is always updated due to recursion) is in the user defined query target
    if(start>=l&& end<=r)return tree[node];

    //partial overlap
    int mid=(start+end)/2;

    long long  int left_sum=query(2*node+1,start, mid, l, r);
    long long int right_sum=query(2*node+2,mid+1, end, l, r);

    return left_sum + right_sum;

}


//point update function
void update(int node, int start, int end, int idx, int val){
    if(start==end){
        a[idx]=val;//raw array er data change
        tree[node]=val;// recursion e node change hbe
        return;
    }

    int mid=(start+end)/2;

    if(start<=idx && idx<=mid){
        update(2*node+1,start,mid,idx,val );
        //first e left child check martese

    }
    //then right child
    else    {
        update(2*node+2,mid+1,end, idx, val);
    }
    //for the query which asked for summation
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
int main(){
    int n1,q;
    cin>>n1>>q;
    for(int i=0;i<n1;i++){
        int aa;
        cin>>aa;
        a[i]=aa;

    }
    build(0,0,n1-1);
    while(q--){
        int d;
        cin>>d;
        int d1,d2;
        if(d==1){
           
            cin>>d1>>d2;
            update(0,0,n1-1,d1,d2);
        }
        else if(d==2){
            cin>>d1>>d2;
            cout<<query(0,0,n1-1,d1,d2-1)<<endl;

        }
    }

    return 0;
}