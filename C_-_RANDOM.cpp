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
    int h,w;
    cin>>h>>w;
    string s[h],t[h];
    for(i=0;i<h;i++){
        cin>>s[i];
    }
    for(i=0;i<h;i++){
        cin>>t[i];
    }
    vector<string>v1,v2;
    string b="",c="";
    for(i=0;i<w;i++){
        for(j=0;j<h;j++){
            b+=s[j][i];
            c+=t[j][i];
        }
        v1.push_back(b);
        v2.push_back(c);
        // cout<<b<<" "<<c<<endl;
        b="";
        c="";
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1==v2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return (0);
}