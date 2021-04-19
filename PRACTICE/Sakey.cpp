#include<iostream>
using namespace std;
class complex {
   float real, imgnry;
   public:
      complex() {
         real = 0.0; imgnry = 0.0;
      }
      complex(float r, float img) {
         real = r; imgnry = img;
      }
      void display(){
      	if(imgnry < 0)
     		if(imgnry == -1)
         		cout << "The complex number is: "<< real << "-i" << endl;
      		else
         		cout << "The complex number is: "<< real << imgnry << "i" << endl;
      	else
        	if(imgnry == 1)
            	cout << "The complex number is: "<< real << " + i"<< endl;
         	else
            	cout << "The complex number is: "<< real << " + " << imgnry << "i" <<endl;
	  }
	  friend complex add(complex, complex);
};

complex add(complex cmplx1, complex cmplx2) {
   complex result;
   result.real = cmplx1.real + cmplx2.real;
   result.imgnry = cmplx1.imgnry + cmplx2.imgnry;
   return result;
}

int main() {
   complex cmplx1(3, 3), cmplx2(6, -9);
   complex cmplx3;
   cmplx3 = add(cmplx1,cmplx2);
   cmplx3.display();
   return 0;
}

