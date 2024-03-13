def push_back(arr, A):
    arr.append(A)

def pop_back(arr):
    if arr:
        arr.pop()

def size(arr):
    return len(arr)

def get(arr, k):
    if k-1 < len(arr):
        print(arr[k-1])
    else:
        print("Index out of bounds.")

# 동적 배열로 사용할 리스트 생성
dynamic_array = []

# 입력 받기: 첫 줄에는 명령의 수 N이 주어지고, 이후 N개의 줄에 걸쳐 각 명령어가 입력됨
N = int(input())

for _ in range(N):
    command = input().split()
    
    if command[0] == 'push_back':
        push_back(dynamic_array, int(command[1]))
    elif command[0] == 'pop_back':
        pop_back(dynamic_array)
    elif command[0] == 'size':
        print(size(dynamic_array))
    elif command[0] == 'get':
        get(dynamic_array, int(command[1]))
    else:
        print("Invalid command.")