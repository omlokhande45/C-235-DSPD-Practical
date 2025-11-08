#include<stdio.h>
int main(){
    int n,a[100],i ,ele;
    int even=0;
    int odd=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("/n Enter the element in array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            even =even+a[i];
        }else{
            odd=odd+a[i];
        }
    }printf("The sum of  even %d  \n ",odd);
    printf("The sum of odd %d",even);
    return 0;
}