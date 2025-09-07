#include<stdio.h>
int main(){
    int a[20],i,j,n,temp;

    printf("Enter the number of elements you want to insert into the array\n");
    scanf("%d",&n);

    printf("Enter the numbers into the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The sorted array is : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++){
        j=i;
        while(j>0&&a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;

        }
    }
    printf("The unsorted array is : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
