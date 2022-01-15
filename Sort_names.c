

// sort the names (Alphabetical order) by siraj

#include <stdio.h>
#include <string.h>

#define N 4                     // how many names need to give from user

void main(){

    char names[N][20],temp[20];

    printf("Enter the names\n");

    for(int i=0;i<N;i++){
        for(int j=0;j<20;j++){
            scanf("%c",&names[i][j]);
            if(names[i][j]=='\n' || names[i][j]==' '){      
                names[i][j]='\0';
                j=20;      
            }
        }
    }

    for(int i=0,j=1;j<=N;i++,j++){
        if(strcmp(names[i],names[j])<0){
            strcpy(temp,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],temp);
            i=0; j=-1;
        }
    }
    int i=0;                                         // 'i=0' (For Ascending order) and 'i=N-1' (For Descending order)
    printf("\nAscending Order of the names\n");     
    while(i<N){                                      // 'i<N' (For Ascending order) and 'i>=0' (For Descending order)
        printf("%s\n",names[i++]);                   // 'i++' (For Ascending order) and 'i--' (For Descending order)
    }
}
