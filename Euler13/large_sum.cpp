#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    string str;
    int carry = 0;
    while(n--){
        string temp;
        cin >> temp;
        
        if(str.length() == 0)
        {
            str = temp;
            continue;
        }
        else 
        {
            int z = str.length() - temp.length();
            while (z > 0){
                temp = "0" + temp;
                z--;
            }
            for (int i=str.length()-1; i >= 0; i--){
                int x = str[i] - '0';
                int y = temp[i] - '0';
                int sum = x + y + carry;
                if (sum == 10){
                    sum = 0;
                    carry = 1;
                } 
                else 
                {
                    int t = sum;
                    sum = t % 10;
                    carry = t / 10;    
                }
                char s = (char) sum + '0';
                str[i] = s;
            }    
            if (carry > 0)
            {
                string c = to_string(carry);
                str.insert(0, c); 
            }
            carry = 0; 
        }
    }
    cout << str.substr(0,10);
    
    return 0;
}
