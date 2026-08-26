bool checkDivisibility(int n) {
    int sum=0 ,product=1;
    int a = n;
    while(a!=0){
        int b = a%10;
        sum += b;
        product *= b;
        a /= 10;

    }

    return n% (sum+product) == 0;
     
        
}
