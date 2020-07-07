#include<stdio.h>

int main(void) {

    int a[6] = {42,96,92,20,2,1};
    int swap;
    for(int i = 0; i< 6;i++){

        for(int j = i+1; j < 6; j++){

            if(a[i]>a[j]){        // searches the array for smallest number. (first iteration compares 42 with rest of the arrays and switch places with 20 as 42>20 then 20 switch places with 2 as 2> 1 and then 2 switch places with 1 as 2>1 so 2 goes to the last place and 1 at zeroth in first iteration)
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    for(int i =0; i<6; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}