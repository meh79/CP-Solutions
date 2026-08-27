#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;

    //testcase
    for(int k=0;k<time;k++){
    
        string input;
        cin>>input;
        int size=input.size();
        int fft=0,nnt=0,f=0,n=0,t=0;
        //counting fft and ntt
        for(int i=0;i<size;i++){
                if(input[i]=='F'){
                    if(input[i+1]=='F'&&input[i+2]=='T'){
                        fft++;
                        i=i+2;
                    }
                }
                else if(input[i]=='N'){
                    if(input[i+1]=='T'&&input[i+2]=='T'){
                        nnt++;
                        i=i+2;
                    }
                }
            }

            //fft && nnt
            if(fft>0 &&nnt>0){
                //read all
                for(int i=0;i<size;i++){
                    if(input[i]=='F')f++;
                    else if(input[i]=='N')n++;
                    else if(input[i]=='T')t++;

                }
                //cout t
                for(int j=0;j<t;j++){
                    cout<<"T";
                }
                //cout f
                for(int j=0;j<f;j++){
                    cout<<"F";
                }
                //cout n
                for(int j=0;j<n;j++){
                    cout<<"N";
                }
                //printing other characters
                for(int j=0;j<size;j++){
                    if(input[j]!='F'&&input[j]!='N'&&input[j]!='T'){
                        cout<<input[j];
                    }
                }
                cout<<endl;
                // cout<<"f "<<f<<endl;
                // cout<<"n "<<n<<endl;
                // cout<<"t "<<t<<endl;
            
            }

            //fft
            else if(fft>0 ){
                for(int i=0;i<size;i++){
                    if(input[i]=='F')f++;
                    
                    else if(input[i]=='T')t++;

                }
                for(int j=0;j<t;j++){
                    cout<<"T";
                }
                for(int j=0;j<f;j++){
                    cout<<"F";
                }
                
                for(int j=0;j<size;j++){
                    if(input[j]!='F'&&input[j]!='T'){
                        cout<<input[j];
                    }
                }
                cout<<endl;
                // cout<<"f "<<f<<endl;
                // cout<<"n "<<n<<endl;
                // cout<<"t "<<t<<endl;
            }
            //nnt
            else  if(nnt>0){
                for(int i=0;i<size;i++){
                    
                    if(input[i]=='T')t++;
                    else if(input[i]=='N')n++;

                }
                for(int j=0;j<t;j++){
                    cout<<"T";
                }
            
                for(int j=0;j<n;j++){
                    cout<<"N";
                }
                for(int j=0;j<size;j++){
                    if(input[j]!='N'&&input[j]!='T'){
                        cout<<input[j];
                    }
                }
                cout<<endl;
                // cout<<"f "<<f<<endl;
                // cout<<"n "<<n<<endl;
                // cout<<"t "<<t<<endl;
            }
            else cout<<input<<endl;
    }    //cout<<input<<endl;
}
