#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char metin[20];
    char metin1[10];
    char metin2[10];
    int i,j,k,l,m;
    int a,b;
    printf("bir metin gir\n");
    gets(metin);
    for(i=0;metin[i]!='\0';i++){}
    j=(i/2);
    k=i-j;
    for(a=0;a<j;a++){
    metin1[a]=metin[a];}
    for(b=0;b<k;b++){
    metin2[b]=metin[a+b];}
    
    
    for(l=0;l<j;l++){
    printf("%c",metin1[l]);}printf("\n");
    for(m=0;m<k;m++){
    printf("%c",metin2[m]);}
  
  system("PAUSE");	
  return 0;
}
