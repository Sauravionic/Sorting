#include <stdio.h>

int main(void) {
    
    int number,arr[600],min = 0,max = 599,avg;
    printf("Guess a number between 1 to 600: ");
    scanf("%d",&number);
    
    for(int i = 0; i<600;i++){
        arr[i] = i+1;
    }
    
    while(number > 0 && number < 601){
        
        avg = (min+max)/2;
        
        if(number == arr[avg]){
            printf("Found\n");
            break;
        }
        else {
            if(number > arr[avg]){
                min = avg+1;
                printf("%d is greater than avergae %d\n", number,arr[avg]);
            }
            else {
                max = avg-1;
                printf("%d is less than average %d\n",number,arr[avg]);
            }
        }
    }
}