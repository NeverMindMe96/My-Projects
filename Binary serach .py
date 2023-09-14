import math

num = []

for i in range(1,11):
    num.append(i)
    
print"The generated list is:",num

print"Entering binary serach"

def Binary_search(List,target):
    low = 0
    high = len(List) - 1
    print "The lenght of the list is",high
 
    while low <= high:
        mid = (high+low)//2
        
        
        print "The value of the middle is:",mid
        if target < num[mid]:
            high = mid - 1
        if target > num[mid]:
            low = mid +1
        else:
            return mid
    
    else:
        print "Unsuccessful"
            
    

index = Binary_search(num,10)

print "The index of the search element is",index