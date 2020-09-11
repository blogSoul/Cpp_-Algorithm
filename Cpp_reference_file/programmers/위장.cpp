// 직접 만든 코드
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int i, answer = 1, cnt = 0;
    string tmp;
    vector<string> key;
    for(i = 0; i < clothes.size();i++)
        key.push_back(clothes[i][1]);
    sort(key.begin(), key.end());
    
    tmp = key[0];
    for(i = 0; i < key.size();i++){
        if(key[i] == tmp){
            cnt += 1;
        }
        else{
            tmp = key[i];
            answer *= cnt + 1;
            cnt = 1;
        }
    }
    if(cnt != 1) 
        return answer*(cnt + 1) - 1;
    else
        return answer * 2 - 1;
}
*/

// unordered_map을 이용하는 방법
/*
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map <string,int> hash; // unordered_map 자료 구조는 hash table로 이루어져 있습니다.
    
    for(vector<string> pair : clothes){
        hash[pair[1]]++; // vector이지만 dereference함으로 pair로 대입이 이루어집니다.
        //When you dereference one of these iterators, you get a std::pair containing the key and its associated value.
    }// clothes에서 의상의 종류를 따로 분리해 hash에 넣어줍니다.
    // 따라서 hash는 [의상의 종류, 의상의 종류에 대한 갯수]로 저장이 이루어집니다. 
    
    //unordered_map <string,int>::iterator iter; 형식으로 이루어진 iterator를 만듭니다.
    for(auto iter = hash.begin(); iter!=hash.end(); iter++){
        answer *= (*iter).second + 1;
        // answer *= (*iter).second + 1; 와 answer *= iter->second + 1;은 같은 코드입니다.
        
        // Now the type std::pair gives you access to its elements through two members: first and second.
        // you know that dereferencing a std::map iterator gives you a std::pair, 
        // so you can then access its elements with first and second
    }
    return answer - 1;
}
*/