def solution(boxes):
    list_1 = []
    list_2 = []
    for element in boxes:
        list_1.append(element[0])
        list_2.append(element[1])
    list_1 = sorted(list_1)
    list_2 = sorted(list_2)
    while len(list_1) != 0 and len(list_2) != 0:
        if list_1[0] == list_2[0]:
            del list_1[0]
            del list_2[0]
        else:
            break
    for element in list_1:
            if element in list_2:
                del list_1[list_1.index(element)]
                del list_2[list_2.index(element)]
    for element in list_2:
            if element in list_1:
                del list_1[list_1.index(element)]
                del list_2[list_2.index(element)]
    
    #print(list_1, list_2)
    if list_1 == []:
        answer = 0
    else:
        answer = len(list_1)
    return answer
