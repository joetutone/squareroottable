//Joe Tutone
//CIS 278
//Module 1 2.29
//This program calculates the square and power of integers 1-10 and displays the results in a table

#include <iostream>
using namespace std;

int main()
{
    int a = pow(0, 2);//exponents for 0
    int b = pow(0, 3);
    int c = pow(1, 2);//exponents for 1
    int d = pow(1, 3);
    int e = pow(2, 2);//exponent fot 2
    int f = pow(2, 3); 
    int g = pow(3, 2);//exponent for 3
    int h = pow(3, 3);
    int i = pow(4, 2);//exponent for 4
    int j = pow(4, 3);
    int k = pow(5, 2);// exponents for 5
    int l = pow(5, 3);
    int m = pow(6, 2);//exponents for 6
    int n = pow(6, 3);
    int o = pow(7, 2);// exponents for  7
    int p = pow(7, 3);
    int q = pow(8, 2);// exponents for 8
    int r = pow(8, 3);
    int s = pow(9, 2);//exponents for 9
    int t = pow(9, 3);
    int u = pow(10, 2);//exponents for 10
    int v = pow(10, 3);

    cout << "integer\tsqure\tcube" << endl; //Printing the table using the \t escape sequence
    cout << "0\t" << a << "\t" << b << endl << "1\t" << c << "\t" << d << endl << "2\t" << e << "\t" << f << endl << "3\t" << g << "\t" << h << endl << 
        "4\t" << i << "\t" << j << endl << "5\t" << k << "\t" << l << endl << "6\t" << m << "\t" << n << endl << 
        "7\t" << o << "\t" << p << endl << "8\t" << q << "\t" << r << endl << "9\t" << s << "\t" << t << endl << 
        "10\t" << u << "\t" << v << endl;



}


