void printArray(int a[], int index, int n){
    if(n==0){
        return;
    }
    else{
        printf("%d", a[index]);
        printArray(a, index+1, n-1);
    }
}

int main(){
    int t;
    int n;
    printf("ENTER t:");
    scanf("%d",&t);

    int a[t];
    for(int i=0; i<t; i){
        printf("ENTER n:");
        scanf("%d",&a[i]);
        
    }
    printArray(a, 0, t);
}