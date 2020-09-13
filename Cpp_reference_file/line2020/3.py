def solution(n):
    answer = []
    str1 = ""
    def findN(object_string): # n은 입력하는 숫자, count는 얼마나 했는지
        if n < 10:
            return str(n) + " " + str(count) 
        else:
            n, count = map(int , string_num.split(" "))
            num_len = len(str(n))
            for i in range(1, num_len + 1):
                a = n // pow(10, i)
                b = n % pow(10, i)
                str1 += findN(a + b, count + 1)
                return str1
                
    print(findN(n, 0))
    print(answer)
    return answer

