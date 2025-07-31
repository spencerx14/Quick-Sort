#include <stdio.h>
int a[7];
int i;
int lb,ub,st,en,key,temp,n;
int quick(){
    printf("\n");
    key=a[0];
    lb=st=0;
    ub=en=6;
    while (st<en){
        while(a[st]<=key){
            st++;
        }
        while(a[en]>key){
            en--;
        }
        if (st<en){
            temp=a[st];
            a[st]=a[en];
            a[en]=temp;
        }
        else{
            temp=a[en];
            a[en]=a[lb];
            a[lb]=temp;
        }
    }
    printf("\n");
    printf("%d",key);
}

int main()
{

    for (i=0;i<7;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<7;i++){
        printf("%d",a[i]);
    }
   
    quick(a[7]);
}