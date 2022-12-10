#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int num1 =0;
    int num2 = 0;

    char getfile[1000000];

    char findword1[10] = "winhtut";
    char findword2[20] = "NationalCyberCity";

    FILE *fptr;

    fptr = fopen("word.txt","r");

    if(fptr == NULL){
        printf("error!!!");
    }

    while(!feof(fptr)){

        fscanf(fptr,"%s",getfile);

        if(strcmp(getfile,findword1) == 0){
            num1++;
        }

        if(strcmp(getfile,findword2) == 0){
            num2++;
        }
    
       
    }
    
    printf(" \'winhtut\' word count number is %d \n",num1);
    printf(" \'NationalCyberCity\' word count number is %d \n",num2);

    return 0;
}