class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int largest=Integer.MIN_VALUE;
        int S_largest=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>largest){
                S_largest=largest;
                largest=arr[i];
            }
            else if(largest > arr[i] && arr[i] > S_largest){
                S_largest=arr[i];
            }
        }
        if(S_largest==Integer.MIN_VALUE) return -1;
        else return S_largest;
    }
}