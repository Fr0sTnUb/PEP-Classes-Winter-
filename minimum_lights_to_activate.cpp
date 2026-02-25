//InterView Bit Question: Minimum Lights to Activate

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* A, int n1, int B) {
    int count = 0;
    int i = 0;
    
    while(i<n1){
        int j =(i + B - 1 < n1-1) ? (i + B - 1) : (n1 - 1);
        while(j >= i && A[j] == 0){
            j--;
        }
        if(j < i){
            return -1;
        }
        count++;
        i = j + B;
    }
    return count;
}

