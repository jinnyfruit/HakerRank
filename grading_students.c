#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grades_count,i;
    scanf("%d",&grades_count);

    int* grades=(int*)malloc(sizeof(int)*grades_count);
    int* result_count=(int*)malloc(sizeof(int)*grades_count);

    for(i=0;i<grades_count;i++){
        scanf("%d",&grades[i]);
    }
    //calculate final grade.
    int temp;

    for(i=0;i<grades_count;i++){
       if(grades[i]<38)    //반올림 적용 안함
            result_count[i]=grades[i];
        else{
            if(grades[i]%10==3||grades[i]%10==4){
                temp=5-grades[i]%10;
                result_count[i]=grades[i]+temp;
            }
            else if(grades[i]%10==8||grades[i]%10==9){
                temp=(grades[i]/10)+1;
                result_count[i]=temp*10;
            }
            else
            {
                result_count[i]=grades[i];
            }
            
        }
    }
    printf("score\n");
    for(i=0;i<grades_count;i++){
        printf("%d\t",grades[i]);
    }
    printf("\nfinal grade\n");
    for(i=0;i<grades_count;i++){
        printf("%d\t",result_count[i]);
    }
return 0;
}