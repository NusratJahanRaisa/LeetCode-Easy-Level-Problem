#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


bool canMakeArithmeticProgression(vector<int>& v) {
        sort(v.begin(),v.end());
        int dif = v[1] - v[0];
        bool f=true;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]!=dif) f=false;
        }

        if(f) return true;
        else return false;
    }




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // before callin function
    return 0;
}
