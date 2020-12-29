#include <stdlib.h>
#include <stdio.h>
void miniMaxSum(int arr_count, int* arr) {  //배열에서 가장 작은 합과 가장 큰 합을 출력하시오.
    unsigned int sum=0;
    int min,max;
    int* cpy=arr;

    for(int i=0;i<arr_count;i++){   //get the total sum of array
        sum+=*cpy;
        cpy++;
    }
    cpy=arr;    //initialize the cpy value
    int value;
    min=*cpy,max=*cpy;
    for(int i=0;i<arr_count;i++){
        value=*cpy;
        if(value<=min)
            min=value;
        if(max<=value)
            max=value;
        cpy++;
    }
    printf("%u %u",sum-max,sum-min);
}
int main(){
    int arr[5]={256741038,623958417,467905213,714532089,938071625};
    int count=5;
    miniMaxSum(count,arr);
    return 0;
}