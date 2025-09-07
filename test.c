    #include<stdio.h>

    void SelectionSort(int arr[],int n);
    void BubbleSort(int arr[],int n);
    void InsertionSort(int arr[],int n);

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

            default:
            printf("Invalid number or character.\n");
        }
        
        printf("After sorting the array: ");
        
        for(i=0;i<n;i++){
        printf("%d ",a[i]);
        }

        return 0;
    }