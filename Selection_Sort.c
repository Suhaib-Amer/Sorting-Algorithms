#include<stdio.h>
int main(){
    int a[20],i,j,n,temp,min;

    printf("Enter the number of elements you want to store in the array\n");
    scanf("%d",&n);

    printf("Enter the elements into the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The unsorted array is ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
    }   
    
    printf("The sorted array is ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

  
