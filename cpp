
class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
           while(r--){
    string ns = "";
    int i = 0 ;
    while(i<s.size() && i<=n){
    if(s[i] == '0') ns+= "01";
    if(s[i] == '1')ns+= "10";
    i++;
    }
    s = ns ;
    }
    return s[n];
    }
};
