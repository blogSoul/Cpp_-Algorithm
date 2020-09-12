#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string answer = "";
    int i;
    // 1단계
    transform(new_id.begin(), new_id.end(), new_id.begin(), :: tolower);
    //cout << "1: "<< new_id << endl;
    // 2단계
    for(i = 0; i < new_id.size();){
       if(new_id[i] >= 'a' && new_id[i] <= 'z')
           i++;
       else if(new_id[i] >= '0' && new_id[i] <= '9')
           i++;
       else if(new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
           i++;
       else{
           new_id.erase(i, 1);
       }
    }
    //cout << "1: "<< new_id << endl;
    // 3단계
    for(i = 0; i < new_id.size() - 1;){
       if(new_id[i] == '.' && new_id[i+1] == '.'){
           new_id.erase(i, 1);
       }
       else{
           i++;
       }
    }
    //cout << "1: "<< new_id << endl;
    // 4단계
    if(new_id[0] == '.'){
        new_id.erase(0, 1);
    }
    if(new_id[new_id.size() - 1] == '.'){
        new_id.erase(new_id.size() - 1, 1);
    }
    //cout << "1: "<< new_id << endl;
    // 5단계
    if(new_id.size() == 0)
        new_id.append(1, 'a');
    //cout << "1: "<< new_id << endl;
    // 6단계
    if(new_id.size() >= 16){
        new_id.erase(15);
    }
    if(new_id[14] == '.')
        new_id.erase(14, 1);
    //cout << "1: "<< new_id << endl;
    // 7단계 
    if(new_id.size() == 1){
        new_id.append(1, new_id[new_id.size() - 1]);
        new_id.append(1, new_id[new_id.size() - 1]);
    }
    if(new_id.size() == 2)
        new_id.append(1, new_id[new_id.size() - 1]);
    //cout << "1: "<< new_id << endl;
    return new_id;
}