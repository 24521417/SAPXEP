#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n;
    int m;
    cin >> n >>m;
    int A[n];
    int B[m];
    for (int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int i=0; i<m; i++){
        cin>>B[i];
    }
    int i=0, j=0;
    while(i<n && j<m){
        if(A[i]<=B[i]){
            cout<<A[i]<<" ";
            i++;
        }
        else {
            cout<<B[i]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<A[i]<<" ";
        i++;
    }

    while(j<m){
        cout<<B[j]<<" ";
        j++;
    }

    return 0;

}
