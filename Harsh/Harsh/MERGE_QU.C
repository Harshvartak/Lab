#include<stdio.h>
#include<conio.h>

void merge(int a[],int beg, int mid, int end){
	int i,j,index,temp[100],k;
	i=beg;
	j=mid+1;
	index=beg;

	while((i<=mid)&&(j<=end)){
		if(a[i]<a[j]){
			temp[index]=a[i];
			i++;
		}
		else{
			temp[index]=a[j];
			j++;
		}
		index++;
	}
	if(i>mid){
		while(j<=end){
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	else{
		while(i<=mid){
			temp[index]=a[i];
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++){
		a[k]=temp[k];
	}
}

void merge_sort(int a[],int beg, int end){
	int mid;
	if(beg<end){
		mid=(beg+end)/2;
		merge_sort(a,beg,mid);
		merge_sort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}

int partition(int a[],int beg, int end){
	int left,right,loc,flag,temp;
	loc=left=beg;
	right=end;
	flag=0;
	while(flag!=1){
		while((a[loc]<=a[right])&&(loc!=right))
			right--;
		if(loc==right)
			flag=1;
		else if(a[loc]>a[right]){
			temp=a[loc];
			a[loc]=a[right];
			a[right]=temp;
			loc=right;
		}
		if(flag!=1){
			while((a[loc]>=a[left])&&(loc!=left))
				left++;
			if(loc==left)
				flag=1;
			else if(a[loc]<a[left]){
				temp=a[loc];
				a[loc]=a[left];
				a[left]=temp;
				loc=left;
			}
		}
	}
	return loc;
}

void quick_sort(int a[], int beg, int end){
	int loc;
	if(beg<end){
		loc=partition(a,beg,end);
		quick_sort(a,beg,loc-1);
		quick_sort(a,loc+1,end);
	}
}



int main(){
	int a[50],i,n,choice;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Choose a method of sorting:\n1.Merge Sort\n2.Quick Sort\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		  merge_sort(a,0,n-1);
		  break;
		case 2:
		  quick_sort(a,0,n-1);
		  break;

		default :

		  printf("Wrong method entered\n");
		  break;
	}
	printf("\nThe sorted Array: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	getch();
}





