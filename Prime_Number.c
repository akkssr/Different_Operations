


//  Prime Number by siraj

/* Prime Number --> only divisible by 1 and same Number         */ 

#include <stdio.h>

void check_no(){
          int num,flag=0;

start:    printf("Enter the Number to check - ");
          scanf("%d",&num);

          if(num<1){      printf("\nInvalid Number\n");   goto start;     }

          for(int i=1;i<=num;i++){
            if(num%i==0){   flag++; }

            if(flag>2){     break;  }               // after this definetly wont be a prime number so to reduce the CPU timing
    
            }
            (flag==2)? printf("Given Number %d is Prime Number\n",num): printf("Given Number %d is not a Prime Number\n",num);
}

void print_no(){

        int num,flag,temp_num=1;

start:  printf("Enter the last Number- ");
        scanf("%d",&num);

        if(num<1){      printf("\nInvalid Number\n");   return;     }

        while(temp_num<=num){
            flag=0;
            for(int i=1;i<=temp_num;i++){
                if(temp_num%i==0){   flag++; }

                if(flag>2){     break;  }               // after this definetly wont be a prime number so to reduce the CPU timing
    
            }      
            if(flag==2){ printf("Number %d is Prime Number\n",temp_num);    }  
            temp_num++;
        }
}

void main(){
        int choice;   
start:  printf("1. Print the Prime Numbers\t2. Check the Prime Number - ");
        scanf("%d",&choice);

        if(choice==1){          print_no();                 }
        else if(choice==2){     check_no();                 }
        else{   printf("\nInvalid Choice\n");   goto start; }
}
