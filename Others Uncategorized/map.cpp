    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        //creating an empty map
        map<int, string> m1;

        //initializa map with list
        // map<int, string> m1={{1,"GReek"}, {2,"For "},{3,"geeks"}};


        /*or enter value one by one*/#
        m1[1]="geeks";
        m1[2]="for";
        m1[3]="geeks";
        for(auto p:m1){
            cout<<p.first<<" "<<p.second<<endl;

        }
        cout<<endl<<endl;
        m1.insert({4,"widwiuwuncw"},{5,"kjnsc"});
        
        for(auto x:m1){
            cout<<x.first<<" "<<x.second<<endl;
        }
   
        return 0;
    }