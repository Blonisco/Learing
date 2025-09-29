#include <stdio.h>
#include <stdlib.h>
void dv(int y);
char* result[10000];

int main (){
    int num;
    scanf("%d",&num);
    for (int x = 0;x <= num-1;x++){
        dv(x);
    }
    for(int x = 0;x <= num-1;x++){
        printf("%s\n",result[x]);
    }
    return 0;
}

void  dv(int y){
    int m,n;
    char b[100],c[100];
    char *a;

    scanf("%d", &n);
    a = (char*)malloc(n + 100); 
    scanf("%s", a);
    scanf("%d", &m);
    scanf("%s", b);
    scanf("%s", c);
    for(int x = 1;x <=m;x++  ){
        if (c[x-1] == 'V'){
            for( int y =100;y >=1;y--){
                a[y]=a[y-1];
            }

            a[0]=b[x-1];//开头插入字符
        }
        if (c[x-1] =='D'){
            a[n+x-1]=b[x-1];//结尾插入字符
        }
    }
    a[n+m] = '\0';
    result[y]=a;
}