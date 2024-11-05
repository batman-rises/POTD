// Find All Triplets with Zero Sum
vector<vector<int>> findTriplets(vector<int> &arr)
{
    vector<vector<int>> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> triplet = {i, j, k};
                    ans.push_back(triplet);
                }
            }
        }
    }
    return ans;
}