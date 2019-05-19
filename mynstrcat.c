//mynstrcat() fonksiyonu iki string ve bir integer parametresi alır birinci stringin sonuna ikinci stringdeki n kadar karakter eklenir//

#include <stdio.h>
#include <stdlib.h>
void mynstrcat(char* str1,char* str2,int s){
    int i=0,j=0;
    while(*(str1+i)!='\0'){
        i++;
    }
    for(j=0;j<s;j++){
        str1[i]=str2[j];
        i++;
}
    str1[i]='\0';
    printf("%s",str1);
}
int main()
{
    char str1[100],str2[100];
    int size;
    printf("str1 gir:");
    scanf("%s",&str1);
    printf("str2 gir:");
    scanf("%s",&str2);
    printf("size gir:");
    scanf("%d",&size);
    mynstrcat(str1,str2,size);

    return 0;
}
