# 11120428,侯嘉韋
# Problem : Sorting and merging two lists.
# Solution : using "sorted()" function.
# Limits : (1).Include the code.
def sortAndMerge(list1, list2):
    print("For ",list1,"and",list2,":","\nThe sorted and merged lists is:",sorted(list1+list2),"\n")
    #setting another list1 and list2
    list1 = ['For','Python','is','a','high-level','general-purpose', 'programming','language']
    list2 =['Its','design','philosophy','emphasizes','code','readability','with','the','use','of','significant','indentation']
    #Second sort and merge list1 and list2
    print("For\n ",list1,"and\n",list2,":","\n\nThe sorted and merged lists is:",sorted(list1+list2),"\n")
#------------main-------------
L1 = [9, 10, 2, 1, 4, 0]   
L2 = [4, 2, 1, 11, 19, 15]
sortAndMerge(L1,L2)  #First sort and merge list1 and list2