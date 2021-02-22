#include <iostream>
#include <memory>

using namespace std;

class Aluno {
  public:
    bool aprovado;
    int nota;
    const char* getNome();
    Aluno();
    Aluno(const char* nome, int nota);
  private:
    const char* nome;
};

const char* Aluno::getNome() {
  return nome;
}

// Dois construtores de mesmo nome, porém com parâmetros distintos,
// o que remete ao polimorfismo;
Aluno::Aluno() { this->nome = "Sem nome"; this->nota = 0; }
Aluno::Aluno(const char* nome, int nota) : nome(nome), nota(nota) {}

int main() {
  unique_ptr<Aluno> a1 (new Aluno {});
  unique_ptr<Aluno> a2 (new Aluno {"John", 8});

  cout << a1->getNome() << " - " << a1->nota << endl;
  cout << a2->getNome() << " - " << a2->nota << endl;

  return 0;
}
