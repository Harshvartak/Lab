#include <stdio.h> 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 

        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 


void insertion_sort(int a[],int n){
    int i,j,temp;
    for (i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0)){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main(void) 
{ 
    int arr[30];  
    int result,n,x,i;
    printf("Enter the length of the array:");
    scanf("%d",&n); 
    for(i=0;i<n;i++){
        printf("a[%d]= ",i+1);
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printf("Enter the element to be searched: ");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    result=binarySearch(arr,0,n,x);
    // if(result==-1)
    //     printf("Element not found\n");
    // else 
    //     printf("Element %d found at %d position",x,result);
    (result == -1) ? printf("\nElement is not present in array") : printf("\nElement is present at index %d", result); 
    return 0; 
}