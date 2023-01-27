#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve (vector<string> v, int n)
{
    //sorting the vector
    sort(v.begin(), v.end());
    
    //input queries
    int q;
    cin >> q;
    
    string str;
    for (int i = 0; i < q; i++)
    { 
        cin >> str;
        int w = 0;
        for (int j = 0; j < str.length(); j++)
        {
            w += (str[j] - 'A') + 1;
        }
        auto it = find(v.begin(), v.end(), str);
        int index = it - v.begin() + 1;
        cout << index * w << "\n";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<string> v(n) ;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
       
    solve(v, n);
    return 0;
}
