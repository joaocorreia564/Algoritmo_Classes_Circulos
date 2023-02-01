#include <iostream>
#include <cmath>

using namespace std;

class Circulo {
private:
  double x, y; // Coordenadas do centro do círculo
  double raio; // Raio do círculo
  
  // Métodos privados
  double calcArea() {
    return M_PI * pow(raio, 2);
  }
  
  double calcDist(Circulo outroCirculo) {
    double distX = pow(outroCirculo.x - x, 2);
    double distY = pow(outroCirculo.y - y, 2);
    return sqrt(distX + distY);
  }
  
  double calcCircunf() {
    return 2 * M_PI * raio;
  }

public:
  // Métodos públicos
  void setRaio(double novoRaio) {
    raio = novoRaio;
  }
  
  void aumentaRaio(double percentual) {
    raio += raio * (percentual / 100);
  }
  
  void setCentro(double novoX, double novoY) {
    x = novoX;
    y = novoY;
  }
  
  void imprimeRaio() {
    cout << "Raio: " << raio << endl;
  }
  
  void imprimeCentro() {
    cout << "Centro: (" << x << "," << y << ")" << endl;
  }
  
  void imprimeArea() {
    cout << "Área: " << calcArea() << endl;
  }
};

int main() {
  Circulo c1, c2;
  
  c1.setRaio(10);
  c1.setCentro(5, 5);
  
  c2.setRaio(20);
  c2.setCentro(10, 10);
  
  c1.imprimeRaio();
  c1.imprimeCentro();
  c1.imprimeArea();
  
  c2.imprimeRaio();
  c2.imprimeCentro();
  c2.imprimeArea();
  
  return 0;
}

