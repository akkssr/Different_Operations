
//    Armstrong number by using User-Defined Functions by siraj

#include <stdio.h>

static inline int str_len(char *str){                                       //find the string length
    int count=0;
    for(int i=0;str[i]!='\0';i++){  count++;    }
    return count;
}
static inline long long int power(long long int val,int len){               // find the power (val,n)
    long long int mul=1;
    for(int i=0;i<=len;i++){    mul*=val;   }
    return mul;
}

static inline long long int str_to_int(char *tmp,int len){                  // convert string to integer
    long long int val=0;
    for(int i=len,j=1;i>=0;i--,j*=10){  val+=((tmp[i]-48)*j);   }
    return val;
}

void main(){
    char str[30];
    
    printf("Enter the number\n");
    scanf("%s",str);
    
    unsigned int len=str_len(str)-1;
    
    long long num=str_to_int(str,len),sum=0;
    
    for(int i=0;i<=len;i++){
        
        sum+=power((str[i]-48),len);                                        // Armstrong number logic
    } 
    (sum==num)? printf("\nGiven Number %lld is Armstrong Number\n",num) : printf("\nGiven Number %lld is not Armstrong Number\n",num);
}
