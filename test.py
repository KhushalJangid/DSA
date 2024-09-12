def solve(s):
    result = []
    lst=[]
    l = s.split(" ")
    for i in l:
        lst = list(i)
        lst[0] = lst[0].upper()
        result.append("".join(lst))
    return " ".join(result)

if __name__ == '__main__':
    print(solve("hello world lol"))
