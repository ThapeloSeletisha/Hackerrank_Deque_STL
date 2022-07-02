#include <iostream>
#include <deque> 
#include <bits/stdc++.h>
using namespace std;

int getKMAX(int arr[],int start, int length)
{
    int max = 1;
    for (int i = start; i < start + length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void printKMax(int arr[], int n, int k){
    int max = getKMAX(arr, 0, k);
    cout << max << " ";
    for (int i = 1; i <= (n - k); i++)
    {
        if (max < arr[i + k - 1])
        {
            max = arr[i+k-1];
        }
        else if (arr[i - 1] == max)
        {
            max = getKMAX(arr, i, k);
        }
        cout << max << " ";
    }
    cout << endl;
}


int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
