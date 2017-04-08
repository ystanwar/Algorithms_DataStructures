#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;
#define MAX 100

#define LEN 10

int TOL=2;
int ptr;
struct Node{
    string word;
    int next[2*LEN];
    Node() {
    for(int i=0;i<2*LEN;i++){
        next[i]=0;
    }

    }


}tree[MAX],RT;

int mind(int a,int b,int c)
{
    return min(a,min(b,c));
}


int getdistance(string &a,string &b)
{
    int m=a.length();
    int n=b.length();
    int dp[m+1][n+1];


    for (int i=0; i<=m; i++)
        dp[i][0] = i;
    for (int j=0; j<=n; j++)
        dp[0][j] = j;

     for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (a[i-1] != b[j-1])
            {
                dp[i][j] = mind( 1 + dp[i-1][j],
                                1 + dp[i][j-1],
                                1 + dp[i-1][j-1]
                              );
            }
            else
                dp[i][j] = dp[i-1][j-1];
        }
    }
    return dp[m][n];
}
void add(Node& root,Node& curr)
{
    if(root.word=="")
    {
        root=curr;
        return;
    }
    int dist=getdistance(root.word,curr.word);
    if(tree[root.next[dist]].word=="")
    {
        ptr++;
        tree[ptr]=curr;
        root.next[dist]=ptr;
    }
    else{
        add(tree[root.next[dist]],curr);
    }
}
vector <string> getsimilarwords(Node& root,string& s){
vector <string> sim;
if(root.word=="")
    return sim;
    int dist=getdistance(root.word,s);
    if(dist<=TOL)
        sim.push_back(root.word);
     int start=dist-TOL;
     int endt=dist+TOL;
     if(start<0)
        start=1;
     while(start<endt){
        vector <string> tmp=getsimilarwords(tree[root.next[start]],s);
        for (int i=0;i<tmp.size();i++)
            sim.push_back(tmp[i]);
        start++;

     }
  return sim;
}

int main(){
    ptr = 0;
    string dictionary[] = {"hell","help","shel","smell",
                           "fell","felt","oops","pop","oouch","halt"
                          };
    int sz = sizeof(dictionary)/sizeof(string);

    for(int i=0; i<sz; i++)
    {
        Node tmp = Node();
        tmp.word=dictionary[i];
        add(RT,tmp);
    }


    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    vector < string > match = getsimilarwords(RT,str);
    cout << "similar words in dictionary for : " << str<< ":\n";
    if(match.size()==0)
        cout<<"No words found"<<endl;
    else{

    for (int i=0;i<match.size();i++)
        cout<<match[i]<<endl;

    }



return 0;
}
