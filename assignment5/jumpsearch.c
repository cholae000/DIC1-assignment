#include "stdio.h"
#include "math.h"


int min(int first, int second){

    if(second > first){
        return first;
    }else{
        return second;
    }
}

int jumpSearch(int arr[], int size, int key){

    int step = size/3 +1;

    int prev = 0;

    while (arr[min(step,size)-1] < key){

        prev = step;

        step = step + size/3 +1;

        if(prev >= size){
            return -1;
        }
    }

    int a = prev + (step - prev) / 2;
    if(key < arr[a]){
        for(int i = prev; i < step; ++i){
    	    if(arr[i] == key){
        	    return i;
            }
       	}
    }else if(key == arr[a]){
        return a;
    }else{
        for(int j = step; j > prev; --j){
            if(arr[j] == key){
                return j;
            }
        }
    }

    return 0;
}


int main(){

    int arr[] = {4,7,8,11,25,34,78,88,89,91,97,101,250,1000};

    int size = sizeof(arr) / sizeof(arr[0]);

    int toFind = 0;
    printf("U can choose one number in this array [");
    for(int i = 0;i < size;i++){
        printf("%d ",arr[i]);
    }
    printf("] \n Choose :");
    scanf("%d",&toFind);

    int indexNum = jumpSearch(arr,size,toFind);

    printf("found at index \'%d\' : %d",indexNum,toFind);


    return 0;
}

//Cho Lae Lae Hlaing
//cholaelaehlaing000000@gmail.com

