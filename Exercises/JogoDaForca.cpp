#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <string>
// #include <cstring> - Para utilizar strlen();

using namespace std;

int main() {
  const string palavrasAleatorias[] = {"Alegria", "Borboleta", "Celular", "Oxente", "Varanda"};

  unsigned char continuar, letra, recomecar;
  unsigned short int acertos = 0, erros = 0, opcao, posicaoLetra, rodada = 1;
  string nomeJogador, palavraEscolhida;
  
  inicioJogo:

  system("cls");
  
  cout << "+ + + + + + + + + + + + + + +" << endl;
  cout << "J O G O     D A     F O R C A" << endl;
  cout << "+ + + + + + + + + + + + + + +" << endl << endl;
  cout << "  /---" << endl;
  cout << "  |  |" << endl;
  cout << "  |  " << endl;
  cout << "--|--" << endl << endl;
  cout << "Iniciar jogo? (s/n) ";
  cin >> continuar;
  
  if (toupper(continuar) == 'S') {
    cout << "Ola, jogador. Digite o seu nome: ";
    cin >> nomeJogador;
    cout << "Voce deseja digitar uma palavra ou escolher uma palavra aleatoria para adivinhar? (1/2) ";
    cin >> opcao;
    if (opcao == 1) {
      cout << "Okay, " << nomeJogador << ". Digite sua palavra: ";
      cin >> palavraEscolhida;
    } else if (opcao == 2) {
      unsigned short int numeroAleatorio = rand() % 5;
      cout << "Numero sorteado foi " << numeroAleatorio << ". ";
      palavraEscolhida = palavrasAleatorias[numeroAleatorio];
    }
    cout << "Palavra escolhida com sucesso." << endl;
    
    system("cls");

    unsigned char palavraAdivinhada[palavraEscolhida.length()];
    unsigned short int tamanhoPalavra = palavraEscolhida.length();
    for (int i = 0; i < tamanhoPalavra; i++) {
      palavraAdivinhada[i] = '_';
    }

    cout << "Iniciando JOGO DA FORCA..." << endl << endl;
    // cout << palavraEscolhida.length() << endl;
    // cout << palavraEscolhida.size() << endl; - Mesmo resultado de string.length;
    //cout << strlen(palavraEscolhida) << endl;

    while (1) {
      cout << "Rodada atual: " << rodada++ << endl;
      cout << "Tentativas falhas: " << erros << endl;
      for (int i = 0; i < tamanhoPalavra; i++) {
        cout << palavraAdivinhada[i] << " ";
      }
      cout << endl;

      cout << "Escolha uma letra: ";
      cin >> letra;
      posicaoLetra = palavraEscolhida.find(tolower(letra));
      if (posicaoLetra <= tamanhoPalavra) {
        for (int i = 0; i < tamanhoPalavra; i++) {
          if (tolower(letra) == tolower(palavraEscolhida[i])) {
            palavraAdivinhada[i] = palavraEscolhida[i];
            acertos ++;
          }
        }
        palavraAdivinhada[posicaoLetra] = palavraEscolhida[posicaoLetra];
        palavraEscolhida[posicaoLetra] = '_';
      } else {
        if (++erros >= 3) {
          cout << "Voce errou 3 vezes, logo, voce perdeu. Sinto muito." << endl;
          cout << "Deseja recomecar? (s/n) ";
          cin >> continuar;
          if (tolower(continuar) == 's')
            goto inicioJogo;
          else
            break;
        }
      }
      if (acertos >= tamanhoPalavra) {
        cout << "Parabens, voce ganhou. Deseja recomecar? (s/n) ";
        cin >> continuar;
        if (tolower(continuar) == 's')
          goto inicioJogo;
        else if (tolower(continuar) == 'n')
          break;
      }


      system("cls");
    }
  }
  
  cout << "Jogo da forca encerrado. Volte sempre!" << endl;
  
  return 0;
}
