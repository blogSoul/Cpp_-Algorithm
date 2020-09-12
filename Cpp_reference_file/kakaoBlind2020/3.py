import sys
input = sys.stdin.readline

def findApplyer(info, find):
    count = 0;
    for applyer in info:
        applyer_info = applyer.split(' ')
        for i in range(0, 5):
            if i < 4:
                if find[i] == '-':
                    continue
                if applyer_info[i] != find[i]:
                    break
            else:
                if int(applyer_info[i]) >= int(find[i]):
                    #print(applyer_info)
                    count+=1;
    return count;
                    
def solution(info, query):
    answer = []
    for i in query:
        find = i.split(' ')
        while 'and' in find:
            find.remove('and')
        #print(find)
        answer.append(findApplyer(info, find))
    return answer