//
// Created by V on 4/27/2022.
//
///

//problem link:https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main() {
    string input;
    int middlepoint;
    cin >> input;
    int counter = 0;
    int n = input.length();
    bool palindrome = true;

    for (int i = 0; i < (n/2)+1; i++) {
        if(input[i] == '?' && input[n-i-1] != '?'){
            input[i] = input[n-i-1];
        }
        if(input[n-i-1] == '?' && input[i] != '?'){
            input[n-i-1] = input[i];
        }
        if(input[i] == '?' && input[n-i-1] == '?'){
            input[i] = 'a';
            input[n-i-1] ='a';
        }
        if (input[i] == input[n-i-1]) {
            palindrome = true;
        }
        else{
            palindrome = false;
            break;
        }
    }
    if(palindrome == true) cout << input;
    else cout << "-1";
}
