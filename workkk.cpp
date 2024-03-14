#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Name : Harshal Wasnik"<<endl;
    cout<<"Roll No. : 21115114"<<endl;
    vector<vector<char>> matrix(5,vector<char>(5));
    cout<<"Enter the keyword"<<endl;
    string keyword;
    cin>>keyword;
    unordered_map<char,bool> mp;
    unordered_map<char,pair<int,int>> ind;
    mp['j']=true;

    int j=0;
    for(int i=0;i<keyword.size();i++){
        if(mp.find(keyword[i])==mp.end()){
            matrix[j/5][j%5]=keyword[i];
            ind[keyword[i]]=make_pair(j/5,j%5);
            j++;
            mp[keyword[i]]=true;
        }

        else continue;
    }
    for(char ch='a';ch<='z';ch++){
        if(mp.find(ch)==mp.end()){
            matrix[j/5][j%5]=ch;
            ind[ch]=make_pair(j/5,j%5);
            j++;
            mp[ch]=true;
        }
        else continue;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    string pt;
    cout<<"Enter the plain text"<<endl;
    cin>>pt;
    string encrypt;
    char first;
    char second;
    for(int i=0;i<pt.size();i+=2){
        first=pt[i];
        second=pt[i+1];
        cout<<first<<" "<<second<<endl;

        pair<int,int> find=ind[first];
        pair<int,int> sind=ind[second];

        int i1=find.first;
        int j1=find.second;

        int i2=sind.first;
        int j2=sind.second;

        if(i1==i2){
            first=matrix[i1][(j1+1)%5];
            second=matrix[i2][(j2+1)%5];
        }
        else if(j1==j2){
            first=matrix[(i1+1)%5][j1];
            second=matrix[(i2+1)%5][j2];
        }
        else {
            first=matrix[i1][j2%5];
            second=matrix[i2][j1%5];
        }
        encrypt.push_back(first);
        encrypt.push_back(second);
    }

    cout<<"Plain text is "<<pt<<endl;
    cout<<"Encrypted text is "<<encrypt<<endl;

    return 0;    

}