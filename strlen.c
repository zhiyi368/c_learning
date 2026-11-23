#include<stdio.h>
int my_strlen(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char ar;
    int i=0;
    char gh[300];
    while((ar=getchar())!=EOF&&ar!='\n'){
        gh[i]=ar;
        i++;
    }
    gh[i]='\0';
    int len=my_strlen(gh);
    printf("%d",len);
    return 0;
}