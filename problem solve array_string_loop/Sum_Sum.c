#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }int psum=0,nsum=0;
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            psum+=ar[i];
            //rintf("%d",psum);
        }if(ar[i]<0){
            nsum+=ar[i];
            // printf("%d",nsum);
        }
    }
 printf("%d %d",psum,nsum);
    return 0;
}