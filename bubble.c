#include<cs50.h>
#include<stdio.h>

int main(void) {

    int num[6] = {3,10,40,41,51,62};

    int swap,flag;


    for(int j = 1; j<6 ; j++){     //No. Of Passes
        flag = 0;
          for(int i = 0; i < (6-j) ; i++){     // No.of checking

             if(num[i] > num[i+1]){
                 swap = num[i+1];
                 num[i+1] = num[i];
                 num[i] = swap;
                flag = 1;
        }
       }
        if (flag == 0){     // If the flag = 0 then there has been no swapping and it is already sorted. This code is added to save time and memory
           break;

          }


    }

    for(int i = 0;i<6;i++){
        printf("%d ",num[i]);
    }
}