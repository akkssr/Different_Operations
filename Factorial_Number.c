


//  Factorial of Given Number by siraj
 

#include <stdio.h>

void main(){

    	  int fact=1,num;

start:    printf("Enter the Number to find Factorial - ");
    	  scanf("%d",&num);

    	  if(num<1){      printf("\nInvalid Number\n");   goto start;     }

      	  for(int i=1;i<=num;i++){
      	  	fact*=i;
    	  }
    	  printf("\nFactorial of Given Number %d is %d\n",num,fact);
}


//  using Recurrsive funtion
/*
int fact_rec(int num){

	if(num==0){			return 1;	}

	return num*fact_rec(num-1);
}

void main(){
		  int num;

start:    printf("Enter the Number to find Factorial - ");
    	  scanf("%d",&num);

    	  if(num<1){      printf("\nInvalid Number\n");   goto start;     }

    	  printf("\nFactorial of Given Number %d is %d\n",num,fact_rec(num));
}

*/
