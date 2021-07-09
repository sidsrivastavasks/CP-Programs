#include <bits/stdc++.h>
using namespace std;

typedef struct Complex {
    float real;
    float imaginary;
} complexNumber;

complexNumber sum(Complex, Complex);
complexNumber product(Complex, Complex);
complexNumber conjugate(Complex);
double modulo(float , float );

int main() {
    complexNumber num1, num2, complexSum, complexproduct, cgt,cgt1,modulus;
    char signOfImag;

    cout << "For 1st complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> num1.real >> num1.imaginary;

    cout<< "For 2nd complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> num2.real >> num2.imaginary;

    complexSum = sum(num1, num2);
    complexproduct = product(num1, num2);
    cgt = conjugate(num1);
    cgt1 = conjugate(num2);
    
    if(complexSum.imaginary > 0 && complexSum.imaginary > 0)
    {
        signOfImag = '+';
        complexSum.imaginary = complexSum.imaginary;
    }
    else
    {
        signOfImag = '-';
        complexSum.imaginary = -complexSum.imaginary;
    }
    cout << "Sum = " << complexSum.real << signOfImag << complexSum.imaginary << "i"<<endl;
    cout<<"Modulud for Num1 = "<<modulo(num1.real,num1.imaginary)<<endl;
    cout<<"Modulud for Num2 = "<<modulo(num2.real,num2.imaginary)<<endl;
    signOfImag = (complexproduct.imaginary > 0) ? '+' : '-';
    complexproduct.imaginary = (complexproduct.imaginary > 0) ? complexproduct.imaginary : -complexproduct.imaginary;
   	cout << "Product = " << complexproduct.real << signOfImag << complexproduct.imaginary << "i"<<endl;
    cout << "Conjugate = "<<num1.real;
    if(cgt.imaginary>0){
    	cout<<"+"<<cgt.imaginary<<"i"<<endl;
	}
	else{
		cout<<cgt1.imaginary<<"i"<<endl;
	}
	cout << "Conjugate = "<<num2.real;
	if(cgt1.imaginary>0){
    	cout<<"+"<<cgt1.imaginary<<"i"<<endl;
	}
	else{
		cout<<cgt1.imaginary<<"i"<<endl;
	}
    return 0;
}

double modulo(float real, float img){
	double temp = (real)*(real)+(img)*(img);
	return sqrt(temp);
}
complexNumber sum(Complex num1, Complex num2) {
    Complex temp;
    temp.real = num1.real + num2.real;
    temp.imaginary = num1.imaginary + num2.imaginary;
    return (temp);
}

complexNumber product(Complex num1, Complex num2) {
    Complex temp;
    temp.real = num1.real * num2.real;
    temp.imaginary = num1.imaginary * num2.imaginary;
    return (temp);
}

complexNumber conjugate(Complex num1){
	Complex temp;
	temp.imaginary = num1.imaginary > 0? -(num1.imaginary): abs(num1.imaginary);
	return (temp);
}
