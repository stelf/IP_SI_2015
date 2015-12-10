#include <cstdio>

using namespace std;

int * func(int* arr){
    for(int i=0;i<10;i++){
        arr[i]++;
    }
    return arr;
}

int main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};
   int* b = func(a);
    for(int i=0;i<10;i++){
        printf("%d",b[i]);
    }
    return 0;
}
