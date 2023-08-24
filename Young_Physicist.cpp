#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int a[n][3];
int ans=0,ans2=0,ans3=0;
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++)
        cin>>a[i][j];
}
for(int i=0;i<n;i++){
for(int j=0;j<3;j++){
    if(j==0) ans+=a[i][j];

 if(j==1)ans2+=a[i][j];
if(j==2) ans3+=a[i][j];
}}

if(ans2==0&&ans==0&&ans3==0)cout<<"YES";
else cout<<"NO";


    return 0;
}
