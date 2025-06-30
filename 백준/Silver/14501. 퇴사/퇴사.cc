#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> T(n + 1, 0);
    vector<int> P(n + 1, 0);
    
    for(int i = 1; i <= n; i++){
        cin >> T[i] >> P[i];
    }
    
    vector<int> dp(n + 2, 0);
    for(int i = n; i >= 1; i--){
        if(i + T[i] <= n + 1){
            dp[i] = max(P[i] + dp[i + T[i]], dp[i + 1]);
        }
        else{
            dp[i] = dp[i + 1];
        }
    }
    
    cout << dp[1] << '\n';
    
    return 0;
}