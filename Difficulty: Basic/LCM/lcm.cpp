// User function Template for C++


int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int LCM(int a, int b) {

    // write your code here
     
     
    // we know that a*b=lcm(a,b)*hcf(a,b);
    
    int hcf=gcd(a,b);
    
    return a*b/hcf;
    // return LCM of a and b
}