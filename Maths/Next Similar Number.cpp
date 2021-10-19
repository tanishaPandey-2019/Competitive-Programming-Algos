string Solution::solve(string A) {

    int n = A.size();
    int k = n - 2;
    for(k = n - 2; k >= 0; k--)
    {
        if(A[k] < A[k + 1])
        {
            break;
        }
    }

    if(k == -1)
    {
        return "-1";
    }
    
    int index;
    for(index = n - 1; index > k; index--)
    {
        if(A[index] > A[k])
        {
            break;
        }
    }
    swap(A[k],A[index]);
    sort(A.begin() + k + 1, A.end());

    return A;
}
