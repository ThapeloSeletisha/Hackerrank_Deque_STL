#include <iostream>
#include <deque> 
#include <bits/stdc++.h>
using namespace std;

int getKMAX(deque<int> queue, int k)
{
    int max = 1;
    for (int i = 0; i < k; i++)
    {
        if (queue[i] > max)
        {
            max = queue[i];
        }
    }
    return max;
}

void printKMax(int arr[], int n, int k){
    deque<int> queue;
    for (int i = 0; i < n; i++)
    {
        queue.push_back(arr[i]);
    }

    while (queue.size() >= k)
    {
        cout << getKMAX(queue, k);
        if (k != queue.size())
        {
            cout << " ";
        }
        queue.pop_front();
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
