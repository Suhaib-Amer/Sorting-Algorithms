#include<stdio.h>
int main(){
    int a[20],i,j,n,temp,count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Unsorted elements before Bubble Sort: ");
      for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<n-1;i++){
        int swapped=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
            
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            swapped=1;
            count++;
            }
            
        }
       
        if(swapped==0){
                break;
            }
    }

    printf("Sorted elements after Bubble Sort: ");
      for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("loop count check %d",count);

return 0;
}