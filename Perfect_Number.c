

// Perfect Number by siraj

/* Perfect Number --> Sum of its divisor(exclude that number) are equal to that number                 */


#include <stdio.h>


void check_number(){

          int sum=0,num;
    
start:    printf("\nEnter the Number to check whether Perfect Number or not ");
          scanf("%d",&num);

          if(num<1){      printf("\nInvalid Number\n");   goto start;   }

          for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
          }

          (sum==num)? printf("\nGiven Number %d is Perfect Number\n",num): printf("\nGiven Number %d is not Perfect Number\n",num);
}

void print_number(){
          int num,temp_num=1,sum;

start:    printf("\nEnter the last Number\n");
          scanf("%d",&num);

          if(num<1){      printf("\nInvalid Number\n");     goto start;     }

          while(temp_num<=num){
            sum=0;

            for(int i=1;i<temp_num;i++){
                if(temp_num%i==0){
                    sum+=i;
                }
            }
            if(sum==temp_num){   
                printf("\nNumber %d is Perfect Number\n",temp_num);
            }
            temp_num++;
        }
}

void main(){
          int choice,num;

start:    printf("\n1. Print the Perfect Numbers\t2. Check the Perfect Number -");
          scanf("%d",&choice);

          if(choice==1){          print_number();                                    }
          else if(choice==2){     check_number();                                    }
          else{                   printf("\nInvalid Number\n");       goto start;    }

}