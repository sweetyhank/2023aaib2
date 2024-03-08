class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101 #統計數字出現次數, 因數字1...100,陣列要開101個
        best=0 #最多的數字,出現幾次
        for num in nums:#迴圈,針對每個數字做處理
            T[num]+=1    
            if T[num]>best:best=T[num]#最多出現的T統計的數字
                #到這裡,T就有全部的數字出現的次數
                #把最多的加起來
        total=0
        for t in T:
            if t==best:total+=t
        return total    