#include<stdio.h>
#include<conio.h>
int main()
{
    int n,ans = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    for(int i = 2;i<=((int)n/2)+1;i++)
    {
        if(n==0 || n==1){
            printf("\nNO");
            ans = 1;
            break;
        }
        else if(n%i==0 && (n!=2))
        {
            ans = 1;
            printf("\nNO IT IS NOT PRIME");
            break;
        }
    }

    if(!ans)
    {
        printf("\nYES IT IS PRIME");
    }
    getch();
    return 0;
}
