#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[] = "My-name-is-Subodh"; 
  
    // Returns first token 
    char* token = strtok(str, "-"); 
   // printf("%s",token);
    
   while (token != NULL) { 
        printf("%s\n", token); 
        token = strtok(NULL, "-"); 
    } 
  
    return 0; 
} 