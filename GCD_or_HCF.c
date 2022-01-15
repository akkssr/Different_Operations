

//  GCD of given Numbers by siraj



#include <stdio.h>
#include <stdlib.h>

int gcd_no(int num_1,int num_2){            //gcd logic function
    int rem;
    while(num_2!=0){
        rem=num_1%num_2;
        num_1=num_2;
        num_2=rem;
    }
    return num_1;
}

void main(){
        int n,gcd;

start:  printf("\nFor how many numbers to find the GCD/HCF - ");
        scanf("%d",&n);

        if(n<=1){       printf("\nInvalid Number\n");       goto start; }

        int *arrays=(int *)malloc(sizeof(int)*n);
        if(arrays==NULL){       printf("Memory allocation failed\n");   exit(-1);   }

        for(int i=0;i<n;i++){
loop:       scanf("%d",&arrays[i]);
            if(arrays[i]<0){    printf("\nNegative value...Try again...!\n");     goto loop;  }
        }
    
        gcd=gcd_no(arrays[0],arrays[1]);        
    
        for(int i=2;i<n;i++){
            gcd=gcd_no(arrays[i],gcd);
        }
        printf("\nGCD/HCF of Given Numbers is %d\n",gcd);
    
        free(arrays);
}