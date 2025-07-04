#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> participant_map;
    
    for(const string& p : participant){
        participant_map[p]++;
    }
    
    for(const string& c : completion){
        participant_map[c]--;
    }
    
    for(auto const& [name, count] : participant_map){
        if(count > 0){
            return name;
        }
    }
    return "";
}