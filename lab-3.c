#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int f=-1,r=-1;
void enqueue (int value){
    if(f==-1){
        f=0;
        r++;
        queue[r]=value;
    }
    printf("%dinserted into queue \n",value);

}
void dequeue(){
    if(f==-1 || f>r){
        printf("Queue is empty  \n ");
    }else{
        printf("%d delete from queue \n");
        queue[f];
        f++;
    }
}
void over_under(){
    if(r==size-1){
        printf("Queue is opverflow ");
    }else if (f==-1 || f>r){
        printf("Queue is underflow ");
    }else{
        printf("Queue neither underflow nor overflow ");
    }
}
void display(){
    int i;
    if(f==-1 || f>r){
        printf("queue is empty \n ");
    }else{
        printf("Queue element  are ");
        for(i==f;i<=r;i++){
            printf("%d",queue[i]);
        }printf("\n ");
    }
}
int main(){
    int value ,n,i;
    while(n){
        printf("Enter your choice \n 1 . for insert \n 2. for for delete \n 3. for overflow_underflow \n 4. display \n 5. for exit ");
        scanf("%d",&n);
          switch (n) {
            case 1:
                printf("Enter character: ");
                scanf(" %c", &value); 
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                over_under();
                break;
            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
        
