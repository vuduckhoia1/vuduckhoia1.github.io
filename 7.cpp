#include <stdio.h>
#include <string.h>
int isWhiteSpace(char c){
  return c==' '||c=='\t';
}
void hienThiTu(char *a,int n){
    int i=n;
    while(!isWhiteSpace(a[i])) printf("%c", a[i++]);
}
int viTriTuDaiNhat(char *a){
    int i,j=0,*max=0,l,h;
    for(i=0;i<strlen(a);i++){
        if((!isWhiteSpace(a[i])&&isWhiteSpace(a[i-1]))||!isWhiteSpace(a[i=0])) l=i;
        if(!isWhiteSpace(a[i])){
            ++j;
            continue;
        }
        if(*max<j) {
            *max=j;
            h=l;
        }
        j=0;
    }
    return h;
}
int main()
{
    char cc[1000];
    fgets(cc, 999, stdin);
    int n=viTriTuDaiNhat(cc);
    hienThiTu(cc, n);
}