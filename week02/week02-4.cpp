//今天的leetcode 挑戰題，二進位的數字的字串，裡面有一堆0和1
//想用這些0和1湊出一個最大的奇數(最右邊有一個1)
//解法: 先數「有幾個」,把1個放右邊,其他都放左邊,中間塞一堆0
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    int N = s.length();
    int one = 0;
    for (int i=0; i<N; i++){
        if(s[i]=='1') one +=1;
    }
    //print("N:%d one:%d",N, one);
    string ans;
    for(int i=0; i<one-1; i++) ans +='1';
    for(int i=0; i<N-one; i++)ans +='0';
    ans+='1';
    return ans;
    }
};