#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
int main(void){
        
        
        FILE *W1  = fopen("MIT2.txt","w"); 
    	
    	char a[50],b[50],c[50],d[50],e[50];
        int A=1103115078;
        for(int i=0;i<97;i++)
           fprintf(W1,"%d %d\n",i+1,i);
                 
            
       
        
        
        
        
        
        
        
        
       
        fclose(W1);
        printf("end\n");
        system("pause");
        return(0);
    
    
    
    
}
