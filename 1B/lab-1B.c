#include<stdio.h>
#include<stdlib.h>
int *search(int arr[], int size,int target);
int main(){
     int s,v;
     printf("Enter the size of array :");
     scanf("%d",&s);
     if(s<=0){
        printf("Invalid or empty array nothing to search ");
        return 0;
    }
    int arr[s];
    printf("Enter the elment of array : ");
    int i;
    for (i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter search value :");
    scanf("%d",&v);
    int *result= search(arr,s,v);
    if(result!=NULL){
        printf("%d if found in array ",v);
    }else{
        printf("%d id not found in array ",v);
    }return 0;
}
int *search(int arr[],int size,int target){
    if(arr==NULL || size ==0){
        return NULL;
    }
    int beg=0;
    int end=size-1;
    while(beg<=end){
        int mid = (beg+end)/2;
        printf("\n Seaching between indexes [%d - %d]\n",beg,end);
        int i;
        for(i=beg;i<=end;i++){
            if(i==mid){
                printf("[%d]",arr[i]);
            }else{
                printf("%d",arr[i]);
            }
        }
        if(arr[mid]==target){
            printf("\n Midpoint value %d is match with target %d",arr[mid],target);
            return &arr[mid];
		}
		else if(arr[mid]<target)
		{
			
			printf("\n target value %d is greater than midpoint value %d.Searching right side\n",target,arr[mid]);
			beg=mid+1;
		}
		else
		{
			printf("\n target value %d is lesser than midpoint value %d.Searching left side\n",target,arr[mid]);
			end=mid-1;
		}
	}
	return NULL;
	}