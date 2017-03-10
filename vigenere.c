// programer sunil
// dated oct 3
// lib taken in care
#include <stdio.h>
#include <string.h>
#include <cs50.h>
    
    int check(string new);
    
    int deco(int rep, string code, int leno);
    
int main(int argc, string argv[])
{
    // starting rtv=0
    int rtv = 0;
    if (argc != 2)
    {
        // argument taken
        printf("enter only one argument");
        return 1;
    }
    else
    {   
        // else condition used 
        rtv = check(argv[1]);
        if (rtv == 1)
        {
            printf("error");
            return 1;
                
        }
    }
        
    // initialising variables
    
    char sig[100];
    scanf("%[^\n]s", sig);
    int i = 0, anum = 0, bump = 0, len = 0, rep = 0, leno = 0;
        
    // scanf("%d\n",&a);
    
    leno = strlen(argv[1]);
        
    // printf("plaintext: \n");
    // scaning a string with space
    
    len = strlen(sig);
    // appling loop for check of values
    for (i = 0; i < len; i++)
    {
        if ( (sig[i] >= 'a') && (sig[i] <= 'z') )
        {
            anum = deco(rep, argv[1], leno);
            rep++;
            bump = (sig[i] - 'a' + anum) % 26;
            printf("%c", 'a' + bump);
            
        }
        else if ( (sig[i] >= 'A') && (sig[i] <= 'Z') )
        {
            anum = deco(rep,argv[1],leno);
            rep++;
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

// extra function declaed
// to check if string is ok in state
int check(string new)
{
    int rtv = 0, len = strlen(new);
    for(int i = 0; i < len; i++)
    {
        if ( ( (new[i] >= 'a') && (new[i] <= 'z'))
        || ( ( new[i] >= 'A') && (new[i] <= 'Z' ) ) )
        {
            rtv = 0;
                
        }
            else
        {
            rtv = 1;
            break;
                
        }
            
    }
    return rtv;
        
}
// funct made
// to asing correct key to code
// % sign bein used
int deco(int rep, string code, int leno)
{   
    int i = 0;
    i = rep % (leno);
    if ( (code[i] >= 'a') && ( code[i] <= 'z' ) )
    {
        return ( (int) (code[i] - 'a') );
        
    }
    else
    { 
        return ( (int) (code[i] - 'A') );
        
    }
}
