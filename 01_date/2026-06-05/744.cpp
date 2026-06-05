// 力扣
// 二分查找
// letters.back() vector最后一个元素；upper_bound返回的是地址

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       return target < letters.back() ? *upper_bound(letters.begin(),letters.end()-1,target) : letters[0]; 
    }
};