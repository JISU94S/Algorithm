#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> answer;
    
    
    answer.push(arr[0]);
    for(int i = 1; i < arr.size(); i++){
        //answer.push(arr[i]);
        
        if(answer.top() != arr[i]){
            //answer.pop();
            answer.push(arr[i]);
        }
    }
    
    vector<int> vec(answer.size());
    for ( int i = vec.size() - 1; i >= 0; i--)
    {
        vec[i] = answer.top();
        answer.pop();
    }
    
    return vec;
}