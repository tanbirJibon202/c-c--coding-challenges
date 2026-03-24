// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n){
//   //  if(n==0) return 0;
//   //  if(n==1) return 1;
//   if(n<=1) return n;
//   return fib(n-1) + fib(n-2);
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<fib(n)<<endl;
//   return 0;
// }

// memoization
// #include <bits/stdc++.h>
// using namespace std;
// int mem[100005];
// int mark[100005];
// int fib(int n){
//   if(n<=1) return n;
//   if(mark[n] == 1){
//     return mem[n];
//   }
//   mem[n] = fib(n-1) + fib(n-2);
//   mark[n] = 1;
//   return mem[n];
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<fib(n)<<endl;
//   return 0;
// }



#include <bits/stdc++.h>
using namespace std;
// long long dp[100005]; 
// long long fib(int n) {
//     if (n <= 1) return n;
//     if (dp[n] != -1) {
//         return dp[n];
//     }
//     return dp[n] = fib(n - 1) + fib(n - 2);
// }
// int main() {
//     int n;
//     if (!(cin >> n)) return 0;
//     memset(dp, -1, sizeof(dp));
//     cout << "Fibonacci of " << n << " is :  " << fib(n) << endl;
//     return 0;

long long power(long long a, long long b){
    if(b == 0) return 1;

    if(b % 2 == 0){
        long long x = power(a, b / 2);
        return x * x;
    } 
    else{
        return power(a, b - 1) * a;
    }
}
int main(){
    long long a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}