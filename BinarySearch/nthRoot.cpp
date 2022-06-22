
	double multiply(double num, int n) {
    double ans = 1.0;
    while(n--) 
        ans *= num;
    
    return ans;

    }
double findNthRootOfM(int n, long long m)  {
    double start = 1, end = m;
    double eps = pow(10, -10);

    while((end - start) > eps) {
        double mid = start + (end - start) / 2;
        if(multiply(mid, n) < m)
            start = mid;
        else
            end = mid;
    }
    return end;
}
