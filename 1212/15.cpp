#include <list>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int n, A[50];

int solve(int selection, int mass){
    if(mass == 0) return true;
    if(selection >= n) return false;
    return solve(selection+1, mass) || solve(selection+1, mass - A[selection]);
}

int main(void){
    int q, M, i;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> M;
        if(solve(0, M)) cout << "true" << endl;
        else cout << "false" << endl;
    }
    return 0;
}
