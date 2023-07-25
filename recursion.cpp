#include<iostream>
using namespace std;
#include <bits/stdc++.h>
void traingle(int x) {
    if (x <=0){
        return;
    }
    
    for(int i = 1; i <=x;i++){
        cout<<"*";
    }
    cout<<endl;
    traingle(x-1);
}

void printbits(int n){
    if(n){
        printbits(n/2);
        cout<<n%2;
    }
}
int gird[100][100];
int maxpathsum(int r, int c){
    if(!valid(r,c)){
        return 0;
    }
    if(r == n-1 && c == n-1){
        return gird[r][c];
    }
    int path1 =maxpathsum(r,c+1);
    int path2 =maxpathsum(r+1,c);
    
    return gird[r][c] + max(path1,path2);
}



int vis[100][100];
char maze[100][100];
int c=0;
int cntReachableCell(int r,int c){
    if(!valid(r,c) || maze[r][c]=='X' || vis[r][c]==1){
        return;
    }
    vis[r][c]=1;
    c++;
    cntReachableCell(r,c+1);
    cntReachableCell(r,c-1);
    cntReachableCell(r-1,c);
    cntReachableCell(r+1,c);
    
}
int main()

{
    int r,c;
    cin>>r>>c;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>maze[i][j];
        }
    }
    cntReachableCell(r,c);
    return 0;

} 
