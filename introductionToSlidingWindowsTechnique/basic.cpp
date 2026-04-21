// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, subArraySize;
//     cin >> n >> subArraySize;
//     vector<int> arr(n+1);
//     for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//     }
//     multiset<int> ms;
//     for (int i = 1; i <= subArraySize; i++){
//         ms.insert(arr[i]);
//     }
//     for (int i = 1; i <= n-subArraySize+1; i++){
//         int mn = *ms.begin();
//         int mx = *ms.rbegin();
//         cout << mn << " " << mx << endl;
//         ms.erase(ms.find(arr[i]));
//         if(i + subArraySize <= n){
//             ms.insert(arr[i+subArraySize]); 
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, subArraySize;
    cin >> n >> subArraySize;

    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    set<pair<int,int>> st;
    for (int i = 1; i <= subArraySize; i++){
        st.insert({arr[i], i});
    }

    for (int i = 1; i <= n - subArraySize + 1; i++){
        int mn = (*st.begin()).first;
        int mx = (*st.rbegin()).first;

        cout << mn << " " << mx << endl;

        st.erase({arr[i], i});

        if(i + subArraySize <= n){
            st.insert({arr[i + subArraySize], i + subArraySize});
        }
    }

    return 0;
}