#include <list>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int findMax(int A[], int left, int right) {
    int mid = (left + right) / 2;
    int former, later;
    if (left == right - 1){
        cout << A[left] << endl;
        return A[left];
    }else{
        former = findMax(A, left, mid);
        later = findMax(A, mid, right);
    }
    cout << max(former, later) << endl;
    return max(former, later);
}

int main(void){
    int n;
    int A[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    findMax(A, 0, n);
}
