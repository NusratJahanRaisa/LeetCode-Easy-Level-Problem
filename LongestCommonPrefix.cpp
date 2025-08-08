#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


string longestCommonPrefix(vector<string>& s){

       if(s[0]=="") return "";

       sort(s.begin(), s.end());
      
       int i=0;
       string s2="";

       while(i<=s[0].size()-1 && i<=s[s.size()-1].size()-1 && s[0][i] == s[s.size()-1][i]){
        s2.push_back(s[0][i]);
        i++;
       }

       return  s2;
       }




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // before callin function
    return 0;
}
