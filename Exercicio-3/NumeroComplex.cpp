#include <iostream>
using namespace std;

struct NumeroComplexo{
    float A;
    float B;
};

void Soma(NumeroComplexo x, NumeroComplexo y);
void Sub(NumeroComplexo x, NumeroComplexo y);
void Mult(NumeroComplexo x, NumeroComplexo y);

int main(){
    NumeroComplexo z, w;
    cout << "Z: " << endl;
    cin >> z.A >> z.B;
    cout << "W: " << endl;
    cin >> w.A >> w.B;

    Soma(z, w);
    Sub(z, w);
    Mult(z, w);
    
    return 0;
}

void Soma(NumeroComplexo x, NumeroComplexo y){
    int somaY= ((x.B + y.B)>0?  x.B + y.B : (x.B + y.B)*(-1));
    cout << x.A + y.A << ((x.B + y.B)>0? " + " : " - ") << somaY << "i" << endl;
}
void Sub(NumeroComplexo x, NumeroComplexo y){
    int subY= ((x.B + y.B)>0?  x.B + y.B : (x.B + y.B)*(-1));
    cout << x.A - y.A << ((x.B - y.B)>0? " + " : " - ") << subY << "i" << endl;
}
void Mult(NumeroComplexo x, NumeroComplexo y){
    float DestReal = x.A * y.A + (x.B * y.B)*(-1);
    float DestImag = ((x.A * y.B + x.B * y.A)>0? x.A * y.B + x.B * y.A: (x.A * y.B + x.B * y.A)*(-1));

    cout << DestReal << ((x.A * y.B + x.B * y.A)> 0? " + " : " - ") << DestImag << "i" << endl;
}