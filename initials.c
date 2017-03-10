 // program by sunil.
 // created oct2
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <cs50.h>
int main(void)
{
    string stri = GetString();
    int i, len;
    // scanf("%[^\n]s",s);
    // check for first space
    if (stri[0] == ' ')
    {
        printf (" ");
        
    }
    // check for first char
    if (stri[0] != 0)
    {
        if ( (stri[0] >= 'a') && (stri[0] <= 'z'))
        {   
            // printing capital char
            printf ("%c",stri[0] - 32);
            
        }
        else
        {   
            // printing samee char
            printf ("%c", stri[0]);
            
        }
        
    }
    // checking len
    len = strlen(stri);
    for(i = 0; i < len; i++)
    {
        if (stri[i] == ' ')
        {
            if ( (stri[i + 1] >= 'a') && (stri[i + 1] <= 'z'))
            {
                printf("%c", stri[i + 1] - 32);
                
            }
            else
            {  
                // prints
                printf("%c", stri[i + 1]);
                
            }
            
        }
    }
    printf("\n");
    return 0;
}