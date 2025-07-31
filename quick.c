#include <conio.h>
#include <stdio.h>
int main() {
    int a[7];
    int i;
    for(i=0;i<7;i++){
    printf("Enter %d element: ",i+1);
    scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}