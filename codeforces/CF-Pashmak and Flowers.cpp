#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
using ll = long long;
 
int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll input;
    ll mini = INT64_MAX;
    ll maxi = 0;
    ll minC = 0;
    ll maxC = 0;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    mini = v.front();
    maxi = v.back();
    if(maxi == mini){
        cout << maxi-mini << " " << (n*(n-1)/2); //do triangular sum formula if all elements are the same
    }
    
    else{
        for(int x = 0; x < n; x++){
            //TEST#cout <<"min loop  " << "index: "<< x << " "<<v[x] << endl;
            if(mini == v[x]){
                minC++;
            }
            if(maxi == v[x]){
                maxC++;
            }
        }
        //Test#cout << "min:" << min<< "max:" << max << "minC:"<< minC << "maxC:" << maxC << endl;
        cout << maxi - mini <<" " << minC*maxC <<endl;
    }
    return 0;
}
