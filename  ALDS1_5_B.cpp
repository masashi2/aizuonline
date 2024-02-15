#include<iostream>
using namespace std;

int cmp_count=0;

void merge(int A[],int left,int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1+1],R[n2+1];
	for(int i = 0; i < n1; i++) L[i] = A[left + i];
	for(int i = 0; i < n2; i++) R[i] = A[mid + i];
	L[n1] = R[n2] =  INT_MAX;

	int i = 0, j = 0;
	for(int k = left;k < right; k++){
		if(L[i] <= R[j]){
			A[k] = L[i++];
			cmp_count++;
		}else{
			A[k] = R[j++];
			cmp_count++;
		}
	}
}

void mergeSort(int A[],int left,int right){
    if(left+1<right){
        int mid = (left+right)/2;
        mergeSort(A,left,right);
        mergeSort(A,mid,right);
        m
    }
}

int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++) cin>>s[i];

    
}