
//    Armstrong number using in-built functions

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int num,sum=0,temp,len=0;
    
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp=temp/10;
        len++;
    }
    temp=num;
    while(temp>0){
        sum+=pow(temp%10,len);
        temp=temp/10;
    }
    
    (sum==num)? printf("\nArmstrong No = %d and %d\n",sum,num) : printf("\nNot Armstrong = %d and %d\n",sum,num);
    
    return 0;
    
}