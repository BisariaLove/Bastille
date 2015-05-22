# Enter your code here. Read input from STDIN. Print output to STDOUT

'''
	https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list
'''

N= int(raw_input())
lis = []
M= raw_input()
temp = M.split(' ')

lis = map(int, temp)
first = int()
second = int()
first = None
second = None
lis.sort()
for i in lis:
    if first == None and second == None:
        first = i
        second = i
    if i > first:
        second = first
        first = i
print second
