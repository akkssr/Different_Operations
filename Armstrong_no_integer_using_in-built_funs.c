
//    Armstrong number using in-built functions

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){ 
          int num,sum=0,temp,len=0;
    
start:    printf("Enter the number\n");
          scanf("%d",&num);
    
          if(num<1){      printf("\nInvalid Number\n");       goto start; }
    
          temp=num;
          while(temp>0){                    // find the length of a Number
              temp=temp/10;
              len++;
          }
          temp=num;
          while(temp>0){                    //Armstrong Number logic
              sum+=pow(temp%10,len);
              temp=temp/10;
          }
          (sum==num)? printf("\nGiven Number %d is Armstrong Number\n",num) : printf("\nGiven Number %d is not Armstrong Number\n",num);
}
