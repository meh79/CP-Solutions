  //both error part
    else if(count%2!=0&&(n-count)>!count-1){
        cout<<"2nd condi"<<endl;
        int val=n-count;
        int ans=count-val;
        if(count%2!=0)ans--;
        if(ans%2==0)cout<<ans+1<<endl;
        else cout<<ans<<endl;
    }
    //only multiplication error part
    else if(count%2!=0){
        cout<<"3rd condi"<<endl;
        cout<<1<<endl;
    }
    //summation error part
    else if((n-count)>!count-1){
        cout<<"4th condi"<<endl;
        cout<<count-(n-count)<<endl;
    }