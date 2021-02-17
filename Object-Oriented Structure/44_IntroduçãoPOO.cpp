#include <iostream>
#include <string>

using namespace std;

class Aviao{
  public: // Declaração de variáveis públicas;
    unsigned short int velocidadeAtual = 0, velocidadeMaxima;
    string nome = "Sem nome", tipo;
    void alterarNome(string nome); // Protótipo de método alterarNome;
    void iniciarAviao(unsigned short int tipo); // Protótipo de método iniciarAviao;
  private:
};

void Aviao::alterarNome(string nome) {
  this->nome = nome;
}

void Aviao::iniciarAviao(unsigned short int tipo) { // Fora da classe, método é criado associando à classe original;
  if (tipo == 1) {
    this->tipo = "Jato"; // 'this' como ponteiro para alterar variável dentro da Classe;
    this->velocidadeMaxima = 800;
  } else if (tipo == 2) {
    this->tipo = "Monomotor";
    this->velocidadeMaxima = 350;
  } else if (tipo == 3) {
    this->tipo = "Planador";
    this->velocidadeMaxima = 180;
  }
}

void imprimirValores(Aviao *a);

int main() {

  Aviao *av1 = new Aviao(); // Necessidade de '*' para criar Objeto;
  Aviao *av2 = new Aviao();

  cout << "Velocidade atual.: " << av1->velocidadeAtual << endl; // Propriedades acessadas como '(*object).variable';
  av1->iniciarAviao(1);
  cout << "Tipo do aviao....: " << av1->tipo << endl;
  cout << "Velocidade maxima: " << av1->velocidadeMaxima << endl;
  av1->alterarNome("Relampago");
  cout << "Nome do aviao....: " << av1->nome << endl << endl;
  
  av2->iniciarAviao(2);
  imprimirValores(av2);

  return 0;
}

void imprimirValores(Aviao *a) {
  cout << "Nome do aviao....: " << a->nome << endl;
  cout << "Tipo do aviao....: " << a->tipo << endl;
  cout << "Velocidade atual.: " << a->velocidadeAtual << endl;
  cout << "Velocidade maxima: " << a->velocidadeMaxima << endl;
}
