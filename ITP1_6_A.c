#include <stdio.h>
int main(void){
    // Your code here!
    int no;
    scanf("%d ",&no);
    int sequence[no];
    for(int i=0;i<no;i++){
        scanf("%d",&sequence[i]);
    }
    for(int i=0;i<no;i++){
        printf("%d",sequence[no-i-1]);
        if(no-1 != i){
            printf(" ");
        }
    }
    return 0;
    
    
}