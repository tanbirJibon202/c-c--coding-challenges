#include <stdio.h>
#include <string.h>
#define N 100005
struct info{
    char code[10];
    char name[20];
    double cgpa;
    int order;
};

struct info arr[N];
struct info temp[N];

int compare(struct info *x, struct info *y){

    int cmp = strcmp(x->name, y->name);

    if(cmp < 0) return 1;
    if(cmp > 0) return 0;

    return x->order < y->order;
}

void merge(int left, int mid, int right){

    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right){

        if(compare(&arr[i], &arr[j])){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while(j <= right){
        temp[k++] = arr[j++];
    }

    for(i = left; i <= right; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int left, int right){

    if(left >= right) return;

    int mid = (left + right) / 2;

    mergeSort(left, mid);
    mergeSort(mid + 1, right);

    merge(left, mid, right);
}

void solve(){

    int n;
    int i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%s %s %lf",
              arr[i].code,
              arr[i].name,
              &arr[i].cgpa);

        arr[i].order = i;
    }

    mergeSort(0, n - 1);

    for(i = 0; i < n; i++){

        printf("%s %s %.2lf\n",
               arr[i].code,
               arr[i].name,
               arr[i].cgpa);
    }
}
int main(){
    solve();
    return 0;
}