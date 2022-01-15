
// Fibonacci Series by siraj

#include <stdio.h>


void main(){

          int num,num_1=0,num_2=1;

start:    printf("\nEnter the last number - ");
          scanf("%d",&num);

          if(num<1){      printf("\nInvalid Number\n");    goto start;     }

          while(num_1<=num){

                printf("%d\t",num_1);
                num_2=num_1+num_2;

                if(num_2>num){    break;  }                 //if more than given value it should not print

                printf("%d\t",num_2);
                num_1=num_1+num_2;
    }
}
