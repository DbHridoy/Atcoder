#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
int32_t main()
{
faster;
    int i,j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    string s;
    int c=0;
    cin>>s;
    j=s.length();
    for(i=0;i<j;i++){
        if(s[i]=='v'){
            c++;
        }
        else{
            c+=2;
        }
    }
    cout<<c<<endl;
    return (0);
}