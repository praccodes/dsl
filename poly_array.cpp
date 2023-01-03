#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cout<<"ENTER THE HIGHEST DEGREE FOR FIRST POLYNOMIAL"<<endl;
cin>>n;
cout<<"ENTER THE HIGHEST DEGREE FOR second POLYNOMIAL"<<endl;
cin>>m;
int k=max(m+1,n+1);
int a[n],b[m];
int sum[k];
for(int i=0;i<n+1;i++){
    cout<<"enter the number of degree"<<i<<" for first polynomial"<<endl;
    cin>>a[i];
    sum[i]=a[i];
}
cout<<"THE ENTERED POLYNOMIAL"<<endl;
  for (int i=0; i<n+1; i++)
    {
       cout << a[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n)
       cout << " + ";
    }
for(int i=0;i<m+1;i++){
    cout<<"enter the number for second"<<i<<endl;
    cin>>b[i];
    sum[i]+=b[i];
}
cout<<"THE ENTERED POLYNOMIAL"<<endl;
  for (int i=0; i<m+1; i++)
    {
       cout << b[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != m)
       cout << " + ";
    }

    cout<<"THE SUMMATION OF THE GIVEN POLYNOMIAL IS"<<endl;
      for (int i=0; i<k; i++)
    {
       cout << sum[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != k)
       cout << " + ";
    }
//multiplication
int x;
cout<<"ENETR THE VALUE OF X"<<endl;
cin>>x;
int z(0);
for(int i=0;i<k;i++){
     z+=sum[i]*pow(x,i);
}
cout<<"THE EVALUATION"<<z<<endl;
//multiplication
int i,n;
cout<<"eneter the \n";
cin>>n;
int a[n];
for(i=0;i<n;i++){
  cin>>a[i];
}
cout<<a[0];




int *multiplyTwoPolynomials(int A[], int B[], int m, int n) {
   int *productPolynomial = new int[m + n - 1];
   for (int i = 0; i < m + n - 1; i++) {
      productPolynomial[i] = 0;
   }
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         productPolynomial[i + j] += A[i] * B[j];
      }
   }
   return productPolynomial;
}
void printPolynomial(int polynomial[], int n) {
   for (int i = n - 1; i >= 0; i--) {
      cout << polynomial[i];
      if (i != 0) {
         cout << "x^" << i;
         cout << " + ";
      }
   }
   cout << endl;
}
int main() {
   int A[] = {1, 2, 3, 4};
   int B[] = {4, 3, 2, 1};
   int m = 4;
   int n = 4;
   cout << "First polynomial: ";
   printPolynomial(A, m);
   cout << "Second polynomial: ";
   printPolynomial(B, n);
   int *productPolynomial = multiplyTwoPolynomials(A, B, m, n);
   cout << "Product polynomial: ";
   printPolynomial(productPolynomial, m + n - 1);
   return 0;
}







    return 0;
}