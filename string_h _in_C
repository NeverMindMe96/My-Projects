#include<stdio.h>
#include<string.h>
void main(){

    //Copying
    char a[]= {"hello world"};
    char b[100];
    memcpy(b,a,10);
    printf("memcpy: %s\n",b);

    memmove(b,"Very good",10);
    printf("memmove: %s\n",b);

    char c[100];
    strcpy(c,"Hello there");
    printf("strcpy: %s\n",c);

    char d[100];
    strncpy(d,"hello There",5);
    printf("strncpy : %s\n",d);

    //Concatination

    strcat(d," Added string");
    printf("%s\n",d);

    strncat(d,"Another string",5);
    printf("%s\n",d);

    //Comparision

    printf("memcmp : %d\n",memcmp(a,b,100));
    
    printf("strcmp : %d\n",strcmp(a,b));

    printf("strcoll : %d\n",strcoll(a,b));// more grammatical or literal way to compare two stirngs

    printf("strncmp : %d\n",strncmp(a,b,5));

    printf("before strxfrm a: %s and b is %s\n",a,b);

    int len = strxfrm(b,a,100);//a combination of len and strcpy

    printf("After Strxfrm : %d a: %s and b: %s\n",len,a,b);

    //Searching

    char *z ;
    z= memchr(a,'w',100);
    printf("memchr : %s\n",z);

    char * z2;
    z2 = strchr(a,'w');//the second parameter should be in single quote
    printf("strchr : %s\n",z2);

    printf("strcspn : %d \n",strcspn(a,"wo"));

    char * z3;
    z3 = strpbrk(a,"w");
    printf("strpbrk : %s\n",z3);

    printf("strchr : %s\n",strchr(a,'e'));

    printf("strstr : %s\n",strstr(a,"llo"));

    char * z4;

    char L[]={"hello-there-hai-there"};
    printf("Strtok: \n");
    z4 = strtok(L,"-");
    while(z4!=NULL){
        printf("%s\n",z4);
        z4 = strtok(NULL,"-");
    }

    //Macros 

    // NULL

    //Other

    //strlen()
    //memset()
    //strerror()

    char k[]= {"hello world"};

    memset(k,'-',5);//the second argunment should be single quoted
    printf("memset : %s",k);





}
