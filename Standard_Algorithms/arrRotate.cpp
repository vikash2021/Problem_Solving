{
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	//code
	
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
// This function rotate array by D elements
// arr: input elements

void rotateArr(int arr[], int d, int n){

vector<int> v;

for(int i=0;i<=n-1;i++)

{

v.push_back(arr[i]);

}

reverse(v.begin(),v.begin()+d);

reverse(v.begin()+d,v.end());

reverse(v.begin(),v.end());

for(int i=0;i<=n-1;i++)

{

arr[i]=v[i];

}

}
   
