class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={}
        for num in nums: #�C�ӼƦr�ۤ@��
            if num in table:#�C�ӼƦr�Ѥ@��
                table[num] +=1 #����+1
            else:
                table[num]=1 #�Ĥ@���X�{
            #print(table)
            #�����٨S��X��

        ans=0
        for num in table: #��table���������Ʀr�Ѥ@��
            if table[num]==2:#�p�G�Ʀr��n�X�{�⦸
                ans=ans ^ num #�⵪�׷��D��XOR�V�_��
        return ans

