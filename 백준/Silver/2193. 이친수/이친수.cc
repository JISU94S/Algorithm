#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if(n == 1){
        cout << 1 << '\n';
        return 0;
    }
    
    vector<long long> result(n + 1);
    result[1] = 1;
    result[2] = 1;
    
    for(int i = 3; i <= n; i++){
        result[i] = result[i - 1] + result[i - 2];
    }
    
    cout << result[n];
    return 0;
}