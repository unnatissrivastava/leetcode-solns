int pdigit(int n){
    int p = 1;
    while (n!= 0){
        int a = n%10;
        p *= a;
        n/=10;
    }
    return p;
}
int smallestNumber(int n, int t) {
    while(pdigit(n)%t != 0) n++;
    return n;   
}
