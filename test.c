    #include<stdio.h>

    void SelectionSort(int arr[],int n);
    void BubbleSort(int arr[],int n);
    void InsertionSort(int arr[],int n);
    void Merge(int a[],int low,int mid,int high);
    void MergeSort(int a[],int low,int high);
    
    void SelectionSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    }

    void BubbleSort(int arr[],int n){
        int i,j,temp;
        for(i=0;i<n-1;i++){
            int swapped=0;
            for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swapped=1;
            }    
            }
            if(swapped==0){
                break;

            }
        }
    }

    void InsertionSort(int arr[],int n){
        int i,j,temp;

        for(i=1;i<n;i++){
            j=i;
            while(j>0&&(arr[j-1]>arr[j])){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
    }

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
        int a[20],i,n,choice;
        printf("Enter the number of elements you want to store in the array\n");
        scanf("%d",&n);

        printf("Enter the elements of the array\n");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }

        printf("Before sorting the array: \n");
        for(i=0;i<n;i++){
        printf("%d ",a[i]);
        }

        printf("\n");

        printf("Which sorting technique would you like to apply\n");
        printf("1.Selection Sort\n");
        printf("2.Bubble Sort\n");
        printf("3.Insertion Sort\n");
        printf("4.Merge Sort\n");
        scanf("%d",&choice);
        switch(choice){
        
            case 1:
            SelectionSort(a,n);
            break;

            case 2:
            BubbleSort(a,n);
            break;

            case 3:
            InsertionSort(a,n);
            break;

            case 4:
            MergeSort(a,0,n-1);
            break;

            default:
            printf("Invalid number or character.\n");
        }
        
        printf("After sorting the array: ");
        
        for(i=0;i<n;i++){
        printf("%d ",a[i]);
        }

        return 0;
    }
