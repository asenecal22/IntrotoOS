#include <stdio.h>

int main(int argv)
{         
          
    if ( argv%400 == 0)      
    printf("%d is a leap year.\n", argv);  
        
    else if ( argv%100 == 0)      
    printf("%d is not a leap year.\n", argv); 
         
    else if ( argv%4 == 0 )      
    printf("%d is a leap year.\n", argv);    
    
    return 0;    
}
