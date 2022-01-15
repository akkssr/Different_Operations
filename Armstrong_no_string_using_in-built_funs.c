

//    Armstrong number using in-built functions by siraj

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    char str[30];
    
    printf("Enter the number\n");
    scanf("%s",str);
    
    unsigned int len=strlen(str);
    
    long long num=atoll(str),sum=0;
    
    for(int i=0;str[i]!='\0';i++){
        
        sum+=pow((str[i]-48),len);                                        // Armstrong number logic
    }
    
    (sum==num)? printf("\nGiven Number %lld is Armstrong Number\n",num) : printf("\nGiven Number %lld is not Armstrong Number\n",num);    
}
