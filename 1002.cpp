#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double xishu[1001]={0};
    int k=0;
    cin >> k;
    while(k--){
        int n;
        double d;
        cin>>n>>d;
        xishu[n]+=d;
    }
    cin >> k;
    while(k--){
        int n;
        double d;
        cin>>n>>d;
        xishu[n]+=d;
    }
    int Sum=0;
    for(int i=0;i<=1000;i++){
        if(xishu[i]!=0)Sum++;
    }
    cout<<Sum;
    for(int i=1000;i>=0;i--){
        if(xishu[i]!=0){
            printf(" %d %.1f",i,xishu[i]);
        }
    }
}