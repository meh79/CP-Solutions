#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    FILE *fp = fopen("in.txt","r");
    if(fp==NULL){
       
       perror("Can't open file");
       return EXIT_FAILURE; 
    }
    int ch;

    ch=fgetc(fp);

    printf("%c\n",(char)ch);
    
    ch=fgetc(fp);

    printf("%c\n",(char)ch);

    fseek(fp,1,1);
    ch=fgetc(fp);

    printf("%c\n",(char)ch);
    fclose(fp);
    return 0;
}