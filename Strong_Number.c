
// Strong Number by siraj

/* Strong Number --> Sum of the Factorial of individual digit is equal to that Number       */

#include <stdio.h>
#include <stdlib.h>

int fact_num(int num){    
    if(num==0){     return 1;   }
   
    return num*fact_num(num-1);
}

void check_num(){
    		int num,sum=0,temp;
    
start:    	printf("Enter the number\n");
    		scanf("%d",&num);
    
   			if(num<1){      printf("\nInvalid Number\n");   goto start;     }
    
    		temp=num;
   
    		while(temp>0){
        		sum+=fact_num(temp%10);
        		temp=temp/10;
    		}
    		(sum==num)? printf("\nGiven Number %d is Strong Number\n",num) : printf("\nGiven Number %d is not Strong Number\n",num);

}

void print_num(){
    		int num,n=1,temp,sum;
start:   	printf("\nEnter the last number - ");
    		scanf("%d",&num);
    		if(num<1){      printf("\nInvalid Number\n");   goto start;     }
    
    		while(n<=num){
        		temp=n;		sum=0;
   
        		while(temp>0){
            		sum+=fact_num(temp%10);
            		temp=temp/10;
        		}
        		if(sum==n){     printf("\n%d is Strong Number\n",n);  }
        		n++;
    		}
}

void main(){
    		int num;
start:    	printf("1. Print the Strong Number\t2. Check the Number is Strong or not - ");
    		scanf("%d",&num);
    
    		if(num==1){     			print_num();    					}
    		else if(num==2){    		check_num();    					}
    		else{       printf("\nInvalid Number\n");  		goto start;		}

}