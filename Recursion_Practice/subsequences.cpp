// subsequence : contiguous or non-contiguous sequence which follows order.
//The problem of counting distinct subsequences is easy if all characters of input string are distinct. The count is equal to nC0 + nC1 + nC2 + … nCn = 2n.

#include <bits/stdc++.h>
using namespace std;
void sub(int i, vector<int> &ds, vector<int> &arr , int n) {
	if(i>=n) {
		for(auto i : ds) cout<<i<<" ";
		if(ds.size()==0) cout<<"{}";
		cout<<"\n";
		return;
	}
	
	ds.push_back(arr[i]);
	sub(i+1, ds, arr, n);
	
	ds.pop_back();
	sub(i+1, ds, arr, n);
}
int main() {
	vector<int> v = {3,1,2};
	vector<int> a;
	
	sub(0, a, v, 3);
}

/*
output:
3 1 2
3 1
3 2
3
1 2
1
2
{}
*/
