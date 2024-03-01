
#今天的leetcode 挑戰題，二進位的數字的字串，裡面有一堆0和1
#想用這些0和1湊出一個最大的奇數(最右邊有一個1)
#解法: 先數「有幾個」,把1個放右邊,其他都放左邊,中間塞一堆0
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N=len(s)#s裡面,有幾個1呢
        one=0
        for c in s:
            if c=='1':one +=1
        return '1'*(one-1)+ '0'*(N-one)+'1'