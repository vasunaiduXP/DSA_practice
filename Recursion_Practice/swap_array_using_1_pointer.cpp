#include <bits/stdc++.h>
using namespace std;

void f(vector<int> & v, int i) {
    int n = v.size();
    if(i>=n/2) {
        return ;
    }

    swap(v[i], v[n-i-1]);
    f(v, i+1);

}

int main() {
    vector <int> v= {1,2,3,4,5};
    int n = v.size();
    
    for(int i=0;i<n; ++i) {
        cout<<v[i]<<" ";
    }
    
    cout<<"\n";
    
    f(v, 0);


    for(int i=0;i<n; ++i) {
        cout<<v[i]<<" ";
    }
}

//output:
// 1 2 3 4 5 
// 5 4 3 2 1 
