#include <bits/stdc++.h>
using namespace std;

void f(vector<int> & v, int l, int r) {
    if(l>=r) {
        return ;
    }

    swap(v[l], v[r]);
    f(v, l+1, r-1);

}

int main() {
    vector <int> v= {1,2,3,4,5};
    int n = v.size();
    
    for(int i=0;i<n; ++i) {
        cout<<v[i]<<" ";
    }

    f(v, 0, n);


    for(int i=0;i<n; ++i) {
        cout<<v[i]<<" ";
    }
}


/* 
output:
5 4 3 2 1
*/
