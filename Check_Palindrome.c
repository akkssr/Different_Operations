
//  Check Palindrome by siraj

#include <stdio.h>

void main(){

	char data[30];
	int flag=0;
	
	printf("Enter the String/Integer ");
	scanf("%s",data);

	int length=strlen(data);

	for(int i=0;i<length;i++){
		if(data[i]!=data[length-i-1]){
			flag=1;
			break;
		}
	}
	(flag==1)? printf("\nGiven String/Integer is not Palindrome\n") : printf("\nGiven String/Integer is Palindrome\n");
}
