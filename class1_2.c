#include <stdio.h> // Standard input/output library (for printf)


void delay_ms(int ms) {
    volatile long i, j; 	
    for(int i=0;i<ms;i++)
    {
        for(int j=0;j<1000;j++)
        {

        }
    }

}


int main() {
    int counter = 0; 	
    int max_blinks = 5; 	
    int button = 0; 	
   scanf("%d",&button);
    if(button==1){
    for( counter=0;counter<max_blinks;counter++)
    {
        
            printf("LED ON (Counter: %d)\n", counter); 	// For simulation
             			// Delay for 200 milliseconds
            delay_ms(200);
            
            printf("LED OFF (Counter: %d)\n", counter); 	// For simulation
             		// Delay for 200 milliseconds
            delay_ms(200);
        }
        
        
    }
    else{
        printf("press button");
    }

    return 0; 	// Indicate successful execution
} 