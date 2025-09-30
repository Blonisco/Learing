#include <stdio.h>
void bp(int i);
int result[10000];
int main(){
    int num;

    scanf ("%d",&num);
    
    for (int x = 0;x <= num-1;x++){
        bp(x);
    }
    
    for (int x = 0;x <= num-1;x++){
        printf("%d\n",result[x]);
    }
    return 0;
}

void bp(int i){
    int t;
    int num[3]={0,0,0};
    scanf("%d",&t);
    
    for(int x = 1;x <=t;x++){
        int ar;
        scanf("%d",&ar);
        if(ar == -1){
            num[0]++;
        }
        if(ar == 0){
            num[1]++;
        }
        if(ar == 1){
            num[2]++;
        }

    }
    int n1 = num[0]%2 == 0?0:2;
    result[i] = num[1] + n1; 

}