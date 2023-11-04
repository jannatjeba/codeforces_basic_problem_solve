#include<stdio.h>
int main(){
    int stop,p=0,seat=0;
    scanf("%d",&stop);
    for(int i=0;i<stop;i++){
        int out,in;
        scanf("%d%d",&out,&in);
        p=p-out+in;
        if(p>seat)
        seat=p;
    }
printf("%d",seat);
    return 0;
}