#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
string tens[] = { "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
string thousandsGroups[] = {"", "Thousand", "Million", "Billion", "Trillion" };

void solve(string s){
    int len = s.length();
    double l = ceil((double)len/3);
    int z = len;
    string num = "";
    int count = 0;
    while(l--){
        string tmp = "";
        int c = 1;
        for(int i = z-1; i>=z-3; i--){
            if(i < 0){
                break;
            }
            int index = (int) s[i] - 48;
            
            if (index == 0){
                c++;
                continue;
            }
                
            if (c == 1)
                tmp = ones[index] + " ";
                
            if (c == 2){
                if (index == 1){
                    int x = (int) s[i+1] - 48;
                    tmp = teens[x] + " ";
                }
                else {
                    tmp = tens[index-2] + " " + tmp;
                }
            }

            if (c == 3){
                tmp = ones[index] + " Hundred " + tmp;
            }   
            c++;
        }
        z -= 3;
        if (tmp != "")
            num = tmp + thousandsGroups[count] + " " + num;
        count++;
    }

    cout << num << "\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        solve(n);
    }
    return 0;
}
