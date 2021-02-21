#include <stdio.h>

void main()  
{  
    int i, n1, n2, max, lcm=1;  
     printf("Input 1st number for LCM: ");  
    scanf("%d", &n1);  
    printf("Input 2nd number for LCM: ");  
    scanf("%d", &n2);
    
    max = (n1>n2) ? n1 : n2;  
  
  
    for(i=max;  ; i+=max)  
    {  
    
        if(i%n1==0 && i%n2==0)  
        {  
            lcm = i;  
            break;  
        }  
    }  
  
    printf("\nLCM of %d and %d = %d\n\n", n1, n2, lcm);  
 
}

Sample Output:

  LCM of two numbers:                                                                                         
 ----------------------                                                                                       
Input 1st number for LCM: 12                                                                                  
Input 2nd number for LCM: 30                                                                                 
                                                                                                              
LCM of 12 and 30 = 60 
