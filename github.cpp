//windows sliding
//We can find maximum sum of four continous number through this technique in o(n) complexity.
int maxSum(int arr[], int n, int k) 
{ 
    // Initialize result 
    int max_sum = INT_MIN; 
  
    // Consider all blocks starting with i. 
    for (int i = 0; i < n - k + 1; i++) { 
        int current_sum = 0; 
        for (int j = 0; j < k; j++) 
            current_sum = current_sum + arr[i + j]; 
  
        // Update result if required. 
        max_sum = max(current_sum, max_sum); 
    } 
  
    return max_sum; 
} 
