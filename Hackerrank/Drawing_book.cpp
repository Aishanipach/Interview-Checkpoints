#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
        
int diff;
diff=n-p;
if((p==1)||(p==n))
    return 0;

if(n-p<2)
{   
    if((n%2==0)&&(p%2!=0))
        return 1;
    cout<<"hi";
    return 0;
}
int num_f=p/2;
int num_b=((n-p)/2);

if(num_f<num_b)
{
    cout<<"num_f";
    return num_f;
}
else 
{   
    cout<<"num_b";
    return num_b;
}

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
 
