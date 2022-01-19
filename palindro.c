#include<stdio.h>
int main(){
    int input,remainder;
    int output=0;

    while(input>0){
        remainder=input%10;
        output=+10;
        input=/10;
    }
    printf(output);
}