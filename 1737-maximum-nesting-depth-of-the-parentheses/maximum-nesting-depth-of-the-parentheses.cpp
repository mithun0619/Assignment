class Solution {
public:
    int maxDepth(string s) {
        stack <int> st;
        int count=0;
        int maxi=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                maxi=max(maxi,count);
            }
            if(s[i]==')'){
                count--;
            }
             
           
        }
        return maxi;
    }
};