// Copyright 2021 NNTU-CS
void findPairs(int arr[], int n, int sum) 
{ 
    std::unordered_set<int> s; 
    for (int i = 0; i < n; i++) { 
        int temp = sum - arr[i]; 
        if (s.find(temp) != s.end()) 
            std::cout << "(" << temp << ", " << arr[i] << ")" << std::endl; 
        s.insert(arr[i]); 
    } 
} 

int main() 
{ 
    int arr[]; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 8; 
    findPairs(arr, n, sum); 
    return 0; 
}
void findPairs(int arr[], int n, int sum) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = i+1; j < n; j++) { 
            if (arr[i] + arr[j] == sum) 
                std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl; 
        } 
    } 
} 

int main() 
{ 
    int arr[]; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 8; 
    findPairs(arr, n, sum); 
    return 0; 
}
void findPairs(int arr[], int n, int sum) 
{ 
    std::sort(arr, arr + n); 
    int low = 0; 
    int high = n - 1; 
    while (low < high) { 
        if (arr[low] + arr[high] == sum) { 
            std::cout << "(" << arr[low] << ", " << arr[high] << ")" << std::endl; 
            low++; 
            high--; 
        } else if (arr[low] + arr[high] < sum) { 
            low++; 
        } else { 
            high--; 
        } 
    } 
} 

int main() 
{ 
    int arr[]; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 8; 
    findPairs(arr, n, sum); 
    return 0; 
}
