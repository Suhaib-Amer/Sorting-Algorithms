#include<stdio.h>

void Merge(int a[],int low,int mid,int high){
    int size=high-low+1;
    int temp[size];
    
    int left=low;
    int right=mid+1;
    int k=0;

    while(left<=mid&&right<=high){
        if(a[left]<=a[right]){
            temp[k++]=a[left++];
        }
        else{
            temp[k++]=a[right++];
        }
    }

    while(left<=mid){
        temp[k++]=a[left++];
    }

    while(right<=high){
        temp[k++]=a[right++];
    }

    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }

}




void MergeSort(int a[],int low,int high){
if(low>=high) return;

int mid=(low+high)/2;
MergeSort(a,low,mid);
MergeSort(a,mid+1,high);
Merge(a,low,mid,high);
}

int main(){
 int i,j,n,a[20];
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements you want to store in the array\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

    printf("The elements before sorting are ");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");

MergeSort(a,0,n-1);
printf("The elements after sorting are ");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
}