#include <bits/stdc++.h>
using namespace std;

void sub(int i, vector<int> ds,int s, int sum, vector<int> arr,int  n) {
    if(i>=n) {
        if(s==sum) {
        for(auto i : ds) {
            cout<<i<<" ";
        }
        cout<<"\n";
        }
        
        return;
    }
    
    ds.push_back(arr[i]);
    s+=arr[i];
    sub(i+1, ds ,s, sum, arr, n);

    ds.pop_back();
    s-=arr[i];
    sub(i+1, ds, s, sum, arr, n);


}

int main() {
    vector <int> v = {1,2,1};
    vector <int> ds;
    int n = v.size();
    
    sub(0, ds, 0,  2, v, n);
} 


/*

output:
1 1
2

*/
//---------------------------------------------------------------------------- only 1 subsequenece is required 👇
#include <bits/stdc++.h>
using namespace std;

bool sub(int i, vector<int> &ds,int s, int sum, vector<int> &arr,int  n) {
    if(i>=n) {
        
        if(s==sum) {
        for(auto i : ds) {
            cout<<i<<" ";
        }

        return true;
        }
        else 
            return false;
    }
    
    ds.push_back(arr[i]);
    s+=arr[i];
    if(sub(i+1, ds ,s, sum, arr, n)==true) return true;

    ds.pop_back();
    s-=arr[i];
    if(sub(i+1,ds, s, sum, arr, n)==true) return true;

    return false;
}

int main() {
    vector <int> v = {1,2,1};
    vector <int> ds;

    sub(0, ds, 0, 2, v, v.size());
} 
