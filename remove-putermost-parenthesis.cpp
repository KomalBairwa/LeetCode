// in this we are maintaing a flag which is c which moves when the parenthsis is innermost
//like
// (()())
//  ans=0,  c=0,  i=0
//  c=1;
//  i=1  ans=(  c=2
//  i=2  ans=()  c=1
// i=3  ans=()( c=2
//i=4    ans=()() c=1
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(c>0){
                    ans+=s[i];
                }
                c++;}
                else{
                    if(c>1)
                       ans+=s[i];
                    c--;
                }
            }
        
         return ans;
    }
};
