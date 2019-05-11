#include<stdio.h>
#include<string.h>

int main() 
{
    int n;
    scanf("%d\n",&n);

    char str[n][100];         
    char var[0][100];

    for(int i=0; i<n; i++) 
    { 
        scanf("%99s/n",str[i]);
    }

    for(int i=0;i<100;i++)
    { 
        for(int k=0;k<100;k++)
            if(str[0][i]==str[1][k])
                for(int j=0;j<strlen(str[0]);j++) 
                {
                    var[0][j]=str[0][j];          
                }
    }

    for(int l=0; l<strlen(str[1]); l++) 
    {                  
        int x;
        if(var[0][l]==str[l+2][l])
            x=strlen(var[0]);               
        printf("%d\n",x);
    }

    return 0;
}