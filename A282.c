#include<stdio.h>
int main(){
int t,count=0;
scanf("%d",&t);
while(t--){
    char s[4];
    scanf("%s",s);
    if(s[1]=='+')count++;
    else count--;


}
printf("%d",count);

    return 0;
}