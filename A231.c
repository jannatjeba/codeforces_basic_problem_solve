#include<stdio.h>
int main(){

    int t,a,b,c,cnt=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>1)cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}