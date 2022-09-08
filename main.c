#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char pw[20];
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    up:
    printf("\n password :  ");
    scanf("%s",&pw);
    for(int i=0;i<=20;i++){
        if(isupper(pw[i])){
            a=1;
        }
        if(isalnum(pw[i])){
            b=1;
        }
        if(isalpha(pw[i])){
            c=1;
        }
        if(!isupper(pw[i]) && !isalnum(pw[i]) && !isalpha(pw[i])){
            d=1;
            }

    }
    if(a==1 && b==1 && c==1 && d==1){
    printf("votre mot de pass est fort .");
    }else{
       printf("votre mot de pass n'est pas fort /!\ \n");
        goto up;    }

    return 0;
}
