// https://csacademy.com/ieeextreme-practice/task/9ca8fafd184f553a903734761546a224/

#include <iostream>
using namespace std;

long long path_length(long long p, long long q) {
    long long len = 0;
    //Until p and q reach their lowest common ancestor.
    while (p != q ) {
        if( p > q ) {
            p = p/2;
            len++;
        }
        else if( q > p ) {
            q = q/2;
            len++;
        }
    }
    return len;
}

int main() {
	long long t;
	cin >> t;
	while(t--) {
	    long long i,j;
	    cin >> i >> j;
	    cout << path_length(i, j) << endl;
	}
	return 0;
}