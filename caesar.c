 // program by sunil
 // oct 3
#include <stdio.h>
#include <string.h>
#include <cs50.h>
 // taking only 2 arguments for main 
int main(int argc, string argv[])
{
    // checkking if only two arg are provided
    if ((argc != 2))
    {   
        printf("Usage: /home/cs50/pset2/caesar <key>");
        return 1;
        
    }
    // initialising variables
    char sig[100];
    int i=0, anum = atoi(argv[1]), bump=0, len=0;
    // scanf("%d\n",&a);

    // printf("plaintext: \n");
    // scaning a string with spaces
    scanf("%[^\n]s", sig);
    len = strlen(sig);
    // appling loop for check of values
    for (i = 0; i < len; i++)
    {
        if ( (sig[i] >= 'a') && (sig[i] <= 'z') )
        {
            bump = (sig[i] - 'a' + anum) % 26;
            printf("%c",'a' + bump);
            
        }
        else if ( (sig[i] >= 'A') && (sig[i] <= 'Z') )
        {
            bump = (sig[i] - 'A' + anum) % 26;
            printf("%c",'A' + bump);
            
        }
        else
        {
            printf("%c",sig[i]);
            
        }
    }
    // for \n
    printf("\n");
    return 0;
}