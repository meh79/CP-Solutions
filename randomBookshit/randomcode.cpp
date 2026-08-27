// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     for(int i=0;i<500;i++){
//         printf("%d\n",rand());
//     }

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    time_t t;
    srand((unsigned)time(&t));

    for(int i=0;i<5;i++){
        printf("%d\n",rand());
    }

    return 0;
}