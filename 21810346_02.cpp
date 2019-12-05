#include <iostream>
using namespace std;
class Complex
{
    private:
      float real;
      float img;
    public:
       Complex(): real(0), img(0)
       {
       }
       void input()
       {
           cout <<"Enter real and imaginary parts respectively: ";
           cin >> real;
           cout<<"\n";
           cin >> img;
           cout<<"Entered complex number : "<<real<<"+"<<img<<"i"<<endl;
       }
       // Operator overloading
       Complex operator + (Complex c2)
       {
           Complex temp;
           temp.real = real + c2.real;
           temp.img = img + c2.img;
           return temp;
       }
       void output1()
       {
           if(img < 0)
               cout << "Addition of Complex numbers is : "<< real << img << "i" << endl;
           else
               cout << "Addition of Complex numbers is : " << real << "+" << img << "i" << endl;
       }
       Complex operator * (Complex c2)
       {
           Complex temp;
           temp.real = real * c2.real + img * c2.img * (-1);
           temp.img = real * c2.img + img * c2.real;
           return temp;
       }
       void output2()
       {
           if(img<0)
               cout<<"Multiplication of Complex numbers is : "<< real << "+" << img << "i"<<endl;
           else
               cout<<"Multiplication of Complex numbers is : "<< real <<"+" << img <<"i"<<endl;
       }
};
int main()
{
    Complex c1, c2, addition, multi;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input();
    addition = c1 + c2;
    addition.output1();
    multi = c1 * c2;
    multi.output2();
    return 0;
}
