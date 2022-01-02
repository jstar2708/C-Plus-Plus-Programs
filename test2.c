#include<stdio.h>
#include<conio.h>

void main(){
    int n, x, i, ans = 0, j = 0, z = 1;
    printf("Enter the no. of terms u want : ");
    scanf("%d", &n);

    printf("Enter the value of X : ");
    scanf("%d", &x);

    for(i = 0; i <= n-1; i++){
        
        j = i;
        z = 1;
        while(j > 0){
            z = z*x;
            j--;
        }

        if(i == n-1){
            printf("%d^%d " , x, i);
        }
        else{
            printf("%d^%d + " , x, i);
        }

        ans += z;
    }

    printf("\nSum of n terms is : %d", ans);
}