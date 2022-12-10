#include <iostream>
using namespace std;

bool isPali(string &s, int i) {
    int n = s.size();
    if(i==n/2) return true;
    
    if(s[i]!=s[n-i-1]) return false;

    return isPali(s, i+1);

}

int main() {
    string s1 ="abcedf";
    string s2 ="madam";

    cout<<isPali(s2,0);
}

// output:
// 1
