class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26]={0};
        for(char c: s){
            freq[c-'a']++;
        }
        string left="";
        for(int i=0;i<26;i++){
            left.append(freq[i]/2,char(i+'a'));
        }
        string middle="";
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                middle+=char(i+'a');
                break;
            }
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};