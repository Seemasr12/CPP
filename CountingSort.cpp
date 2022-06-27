#include<bits/stdc++.h>
using namespace std;
void countingSort(int A[], int n) {
    int out[10];
    int count[10];
    int max = A[0];

    for(int i=1;i<n;i++) {
        if (A[i]>max)
        max = A[i];
    }
    for(int i=0;i<=max;++i) {
        count[i] = 0;
    }

    for(int i=0;i<n;i++) {
        count[A[i]]++;
    }

    for(int i=1;i<=max;i++) {
        count[i] += count[i-1];
    }

    for(int i = n-1;i>=0;i--){
        out[count[A[i]] - 1] = A[i];
        count[A[i]]--;
    }

    for(int i = 0; i < n; i++){
        A[i] = out[i];
    }
}

void display(int A[], int n){
    cout<<endl<<"Sorted array using Counting Sort is: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
  cout << endl;
}

int main() {
int n, i;
	cout<<"Enter the number elements in the array: ";
	cin>>n;

	int A[n];
	for(i = 0; i < n; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>A[i];
	}

    countingSort(A, n);
    display(A, n);
}

