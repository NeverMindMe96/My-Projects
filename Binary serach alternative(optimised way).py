from math import ceil

num = []

for i in range(1,11):
    num.append(i)
    
print "The generated list is:",num

def Binary_search_alternative(List,target):
    
    low = 0
    high = len(List)-1
    
    while high != low :
       mid = int(ceil(high+low/2))
       if target < num[mid]:
        high = mid -1
       else:
        low = mid
    if num[mid]== target:
        return mid
    else:   
        print "Unsuccessful"
        
        
    
   
    
Search_index=Binary_search_alternative(num,10)
print"The index of the searched element is:",Search_index