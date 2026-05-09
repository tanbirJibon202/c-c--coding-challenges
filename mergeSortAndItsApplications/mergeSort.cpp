#include <bits/stdc++.h>
using namespace std;
int n, arr[100005], temp[100005];

void merge(int left, int right){
     int mid = (left + right)/2;
     int i1 = left, i2 = mid + 1, j = left;
     while (i1 <= mid && i2 <= right)
     {
         if(arr[i1] < arr[i2]){
           temp[j] = arr[i1];
           i1++;
         }else{
          temp[j] = arr[i2];
          i2++;
         }
         j++;
     }
     while (i1 <= mid)
     {
        temp[j] = arr[i1];
        j++, i1++;
     }
     while (i2 <= right)
     {
        temp[j] = arr[i2];
        j++, i2++;
     }
     for (int j = left; j <= right; j++)
     {
        arr[j] = temp[j];
     }
}

void mergeSort(int left, int right){
   if(left == right) return;
   int mid = (left + right)/2;
  //Divide
  mergeSort(left, mid);
  mergeSort(mid+1, right);
  //Conquer
  merge(left,right);
}

int main(){
  
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  mergeSort(0, n-1);
  for (int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}