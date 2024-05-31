class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={}
        for num in nums: #–计Ω
            if num in table:#–计Ω
                table[num] +=1 #Ω计+1
            else:
                table[num]=1 #材Ω瞷
            #print(table)
            #氮临⊿衡ㄓ

        ans=0
        for num in table: #рtableń场计Ω
            if table[num]==2:#狦计瞷ㄢΩ
                ans=ans ^ num #р氮酚肈ヘXOR睼癬ㄓ
        return ans

