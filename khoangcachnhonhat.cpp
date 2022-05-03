#include<bits/stdc++.h>
using namespace std;
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
 

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        
        int pi = partition(arr, low, high);
 
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[100005];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		quickSort(A, 0, n-1);
    	int min = pow(10,9);
    	for(int i = 0; i < n- 1; i++){
    		if(A[i+1] - A[i] < min) min = A[i+1] - A[i];
		}
		cout << min <<endl;
	}
	return 0;
}

