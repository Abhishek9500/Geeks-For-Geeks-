int Count(string S) {
    // complete the function here
    int count=0;
    for(int i=0;i<S.size();i++){
        if((S[i]>=65 && S[i]<=95) || (S[i]>=97 && S[i]<=122)) count++;
    }
    return count;
}