// Copyright 2021 NNTU-CS
using namespace std;
int countPairs1(int *arr, int len, int value) {
  return 0;
}
void findPairs1(vector<int>& arr, int sum)
{
    int n = arr.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x = sum - arr[i];
        if (m[x]) {
            cout << arr[i] << " " << x << endl;
        }
        m[arr[i]]++;
    }
}
int countPairs2(int *arr, int len, int value) {
  return 0;
}
void findPairs2(vector<int>& arr, int sum)
{
    int n = arr.size();
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int x = sum - arr[i];
        if (s.find(x) != s.end()) {
            cout << arr[i] << " " << x << endl;
        }
        s.insert(arr[i]);
    }
}
int countPairs3(int *arr, int len, int value) {
  return 0;
}
void findPairs(vector<int>& arr, int sum)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] + arr[j] == sum) {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < sum) {
            i++;
        }
        else {
            j--;
        }
    }
}

