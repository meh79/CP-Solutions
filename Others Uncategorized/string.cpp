#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    char s[n];
    scanf("%s",s);
    for(int i=n-1;i>=0;i--){
        printf("%c",s[i]);

    }
    return 0;
}