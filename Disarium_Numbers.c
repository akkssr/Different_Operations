
// Disarium Numbers by siraj

/* Disarium Number --> when the sum of its digit raised to the power of their respective positions is equal to the number itself      */


#include <stdio.h>

int power(int num,int len){					//to find 'power' function
    int mul=1;
    while(len--){
        mul=mul*num;
    }
    return mul;
}

int lenofnum(int num){						//to find 'length of a number' function
    int count=0;
    while(num!=0){
        num=num/10;
        count++;
    }
    return count;
}

void check_num(int num,int ch){				// 'disarium logic' function
    int sum=0,len,temp=num;
    
    len=lenofnum(num);
    
    for(int i=0;i<len;i++){
        sum=sum+power(num%10,len-i);
        num=num/10;
    }
    
    if(ch==1){  (temp==sum)? printf("Given Number %d is Disarium Number\n",temp) : printf("Given Number %d is not Disarium Number\n",temp);      }
    else if(temp==sum){  printf("%d  ",temp);        }
}
void main(){
    
    int choice,num;
    printf("\n***************Disarium Numbers***************\n");
    
while(1){
    printf("\n1. Check the Number\t2. Print the Number - ");
    scanf("%d",&choice);
    
    if(choice==1){
        printf("\nEnter the Number - ");
        scanf("%d",&num);
        check_num(num,choice);
    }
    else if(choice==2){
        printf("\nEnter the limit of the last Number - ");
        scanf("%d",&num);
        printf("\nDisarium Numbers - ");
        for(int i=11;i<=num;i++){
            check_num(i,choice);
        }
        printf("\n");
    }
    else{   break;   }
}
}