#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

using std::string;

class Aviao{
  public:
    unsigned short int velocidadeAtual = 0, velocidadeMaxima;
    string nome = "Sem nome", tipo;
    Aviao(unsigned short int tipo, string nome); // Definição de construtor;
    void imprimirValores();
  private:
};

Aviao::Aviao(unsigned short int tipo, string nome) { // 1 - Jato, 2 - Monomotor, 3 - Planador;
  if (tipo == 1) {
    this->tipo = "Jato"; // O this. é necessário para confirmar que é uma propriedade da classe;
    velocidadeMaxima = 800;
  } else if (tipo == 2) {
    this->tipo = "Monomotor";
    velocidadeMaxima = 350;
  } else if (tipo == 3) {
    this->tipo = "Planador";
    velocidadeMaxima = 180;
  }
  this->nome = nome;
}

void Aviao::imprimirValores() {
  cout << endl << "Nome do aviao....: " << nome << endl;
  cout << "Tipo do aviao....: " << tipo << endl;
  cout << "Velocidade atual.: " << velocidadeAtual << endl;
  cout << "Velocidade maxima: " << velocidadeMaxima << endl;
}

#endif // AVIAO_H_INCLUDED
