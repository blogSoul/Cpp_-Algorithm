
def solution(ball, order):
    answer = []
    prepare = []
    
    def Prepare(prepare, ball): # 밀린 우선순위에 대한 처리
        for ordered in prepare: 
            if ordered == ball[0]:
                del ball[0]
                del prepare[prepare.index(ordered)]
                answer.append(ordered)
            elif ordered == ball[- 1]:
                del ball[- 1]
                del prepare[prepare.index(ordered)]
                answer.append(ordered)
        if len(ball) > 0:
            a = ball[0]
            b = ball[-1]
        else:
            return 0
        if a in prepare or b in prepare:
            return 1
        else:
            return 0

    for ordered in order:
        if ordered == ball[0]:
            del ball[0]
            answer.append(ordered)
        elif ordered == ball[- 1]:
            del ball[- 1]
            answer.append(ordered)
        else:
            prepare.append(ordered)
        while Prepare(prepare, ball) == 1:
            Prepare(prepare, ball)    
        #print(answer, prepare, ball)
    while Prepare(prepare, ball) == 1:
        Prepare(prepare, ball)
    #print(answer, prepare, ball)
    return answer
