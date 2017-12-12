#include <list>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int n, M;
int S[20];
int total;

void solve(int i){
    if(i == n){
        int counter = 0;
        for(int j = 0; j < i; j++){
            // cout << S[j] << endl;
            if(S[j]==1){
                counter++;
            }else{
                counter = 0;
            }
            if(counter == M){
                counter = 0;
                total++;
                break;
            }
        }
        // 枝の先端
        return;
    }
    S[i] = 0; // i を選択しない
    solve(i + 1);
    S[i] = 1; // i を選択する
    solve(i + 1);
}

int main(void){
    cin >> n;
    cin >> M;
    for(int i=0; i<n; i++){
        S[i] = 0;
    }
    total = 0;
    solve(0);
    cout << total << endl;
    return 0;
}
