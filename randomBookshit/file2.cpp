#include <bits/stdc++.h>
using namespace std; 

void solve() {
    
}

int main() {
    FILE *fp_in, *fp_out;
    char *input_file="in.txt", *output_file="out.txt";
    char line[80];
    int num1,num2,sum;

    fp_in=fopen(input_file,"r");
    fp_out=fopen(output_file,"w");

    fgets(line, 80, fp_in);
    cout<<line<<endl;

    sscanf(line, "%d %d", &num1, &num2);

    sum= num1+num2;

    cout<<num1<<" "<<num2<<" "<<sum<<endl;

    fprintf(fp_out,"%d\n", sum);

    return 0;
}