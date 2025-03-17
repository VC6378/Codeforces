for test_case in range(int(input())):
    n, k = [int(_) for _ in input().split()]
    if k % 2 == 0:
        for i in range(n-2):
            print(n-1, end = ' ')
        print(n, end = ' ')
        print(n-1)
    else:
        for i in range(n-2):
            print(n, end = ' ')
        print(n, end = ' ')
        print(n-1)
        
# model solution
