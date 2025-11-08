// It is linear and contiguous.
int missingNum(vector<int> &arr)
{
    // code here
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    // sum of nnumber
    int n = arr.size() + 1;
    int ans = n * (n + 1) / 2;
    return ans - sum;
}