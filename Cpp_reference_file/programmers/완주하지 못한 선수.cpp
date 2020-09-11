// 비효율적인 방법 : n*2 방식
/*
#include <string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    for(auto j = completion.begin(); j != completion.end();j++){
        for(auto i = participant.begin(); i != participant.end();){
            if(*i == *j){
                //cout << *i << " " << *j << endl;
                i = participant.erase(i);
            }
            else{
                i++;
            }
        }
    }
    string answer = participant.front();
    return answer;
}
*/
// 구현하기 쉬운 방식 : n * log(n)방식
/*
#include <string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i = 0; i < completion.size();i++){
        if(participant[i] != completion[i])
            return participant[i];
    }
    string answer = participant[participant.size() -1];
    return answer;
}
*/
// map을 사용하는 방식 
// std::map container : Red-Black Tree를 사용해 키의 순서를 유지하므로 O(log n)을 가집니다.
// std::unordered_map container : hash Table을 사용해 키의 순서를 유지하지 않습니다. key 분포에 따라 탐색 속도는 O(1) 이상의 시간 복잡도를 가집니다.
/*
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string,int> participants;
    for(string name:participant){
        ++participants[name];
    }
    for(string name:completion){
        --participants[name];
    }
    for(auto pair : participants){
        if(pair.second > 0)
            return pair.first;
    }
}
*/