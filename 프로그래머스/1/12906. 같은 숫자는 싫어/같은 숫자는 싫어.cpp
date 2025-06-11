#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> answer;
    answer.push(arr[0]);
    
    for(int i = 1; i < arr.size(); i++){
        if(answer.top() != arr[i]){
            answer.push(arr[i]);
        }
    }
    
    vector<int> vec;
    while(!answer.empty()){
        vec.push_back(answer.top());
        answer.pop();
    }
    
    reverse(vec.begin(), vec.end());
    return vec;
}