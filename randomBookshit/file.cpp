#include<bits/stdc++.h>
int main() {
//    fast_io;

    FILE *fp;
    char filename[]="my_file.txt";
    fp=fopen(filename, "w");

    fprintf(fp,"This is a  file created ny the user! ");
    fprintf(fp,"Life cdi");

    fclose(fp);

    return 0;
}