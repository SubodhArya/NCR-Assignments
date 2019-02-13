#include <stdio.h>
#include <stdlib.h>
void check_comment (char) ;  // passes control to one of the below functions
void blockcomment () ;   //  handles  multiline comments
void singlelinecomment () ;   // handles single line comments
FILE *fp , *fp2;
//fp is the file pointer to original file
//fp2 is file ptr to the other file to which we copy the code after removing comments
void removecomment()
{
    char c;
    fp = fopen ("filename.txt","r") ;   
    fp2 = fopen ("newfile.txt","w") ; 
    while((c=fgetc(fp))!=EOF)       
        check_comment(c);  
    fclose(fp);
    fclose(fp2);
}


//handles both types of comments
void check_comment(char c)
{
    char d;

    if( c == '/')   // if the character starts with '/', it 'could' be a comment
    {
        if((d=fgetc(fp))=='*')   // if the next character we read is '*', multiline comment
         blockcomment();  // since its a multiline comment

        else if( d == '/')   // else if the next character we read is '/', it is the beginning of single line comment
        {
          singlelinecomment();// pass control to function that handles single line comment

        }
        else
        {
            
            fputc(c,fp2);
            fputc(d,fp2);
        }
    }

    // else add the character as it is in the new file.
    else
        fputc(c,fp2);
}



void blockcomment()
{

 char d,e;

    while((d=fgetc(fp))!=EOF)   
    {
    /* read the characters and ignore them
    as they do not have to be copied into the new file (we are removing the comments)
    */
        if(d=='*')    // if the comment 'seems' like ending
        {
            e=fgetc(fp);  // check if it actually ends (block comments end with '*/')

            if(e=='/')  // if the comment 'has' ended, return from the function
                return;
        }
   }

}



void singlelinecomment()
{
 char d,e;

    while((d=fgetc(fp))!=EOF)  // the single line comment has started, read the character by character
    {
        if(d=='\n')   // check if the comment ends 
            return;  

    }

}














