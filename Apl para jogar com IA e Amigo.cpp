


#include <ctime>
#include <iostream>
#include <cstdlib>
// #include <Windows.h> verifica ai, veja o 'GetKeyState'

using namespace std;

int main(void)
{

    int pts1 = 0;
    int pts2 = 0;
    string player1;
    string player2;
    int swi;
    int jogada;
    int joIA;
    char SN;
    int jogadap1;
    int jogadap2;
    string feedback;



    cout << "Olá, bem vindo ao Pedra, papel e tesoura." << endl;
    cout << "selecione seu modo de jogo: " << endl;
    cout << "1 - Jogar com 2 Jogadores (player 1, player 2)" << endl;
    cout << "2 - Jogar com a Máquina" << endl;
    cin >> swi;

    switch (swi){
    
    case 1:

        do
        {
            cout << "Nome do player 1: " << endl;
            cin >> player1;
            cout << "nome do player 2: " << endl;
            cin >> player2;
            cout << "o nome dos players estão corretos ? s/n" << endl;
            cin >> SN;
            SN = toupper(SN);
        } while (SN != 'S');
        do
        {
            cout << "Certo, " << player1 << "Faça uma jogada: " << endl;
            cout << "1 - Pedra" << endl;
            cout << "2 - Papel" << endl;
            cout << "3 - Tesoura" << endl;
            cin >> jogadap1;
            cout << "ok, aguarde!";
            cout << "Certo, " << player2 << "faça sua jogada: " << endl;
            cout << "1 - Pedra" << endl;
            cout << "2 - Papel" << endl;
            cout << "3 - Tesoura" << endl;
            cin >> jogadap2;
            
            

            if (jogadap1 == jogadap2) // aqui se a ambos escolherem a mesma opção ele vai exibir o cout e atribuir +5 pontos para cada um.
            {
                cout << "Singelo empate, +5 para cada.";
                pts1 += 5;
                pts1 += 5;
            } 
            else if (jogadap1 == 1 && jogadap2 == 2) // a estrutura precisa validar todo tipo de jogada, e comparar os valores informados pelo usuário 1 e 2. fora as atribuições de pontos.
            {
                cout << player2 << " Ganhou, +10 pontos";
                pts2 += 10;
            }
            else if (jogadap1 == 1 && jogadap2 == 3)
            {
                cout << player1 << " Ganhou, +10 Pontos";
                pts1 += 10;
            }
            else if (jogadap1 == 2 && jogadap2 == 1) // a lógica "&&" funciona, se for verdadeiro que os players jogaram aquele número(jogada) faça isto.
            {
                cout << player1 << " Ganhou, +10 Pontos";
                pts1 += 10;
            }
            else if (jogadap1 == 2 && jogadap2 == 3)
            {
                cout << player2 << " Ganhou, +10 Pontos";
                pts2 += 10;
            }
            else if (jogadap1 == 3 && jogadap2 == 1)
            {
                cout << player2 << " Ganhou, +10 Pontos";
                pts2 += 10;
            }
            else if (jogadap1 == 3 && jogadap2 == 2)
            {
                cout << player1 << " Ganhou, +10 Pontos";
                pts1 += 10;
            }
            //////////////////////////////////////////////////////////////////
            else if (jogadap1 == 2 && jogadap2 == 1)
            {
                cout << player1 << " Ganhou, +10 pontos";
                pts1 += 10;
            }
            else if (jogadap1 == 3 && jogadap2 == 1)
            {
                cout << player2 << " Ganhou, +10 Pontos";
                pts2 += 10;
            }
            else if (jogadap1 == 1 && jogadap2 == 2)
            {
                cout << player2 << " Ganhou, +10 Pontos";
                pts2 += 10;
            }
            else if (jogadap1 == 3 && jogadap2 == 2)
            {
                cout << player1 << " Ganhou, +10 Pontos";
                pts1 += 10;
            }
            else if (jogadap1 == 1 && jogadap2 == 3)
            {
                cout << player1 << " Ganhou, +10 Pontos";
                pts1 += 10;
            }
            else
            {
                cout << player1 << " Ganhou, +10 Pontos";
                pts1 += 10;
            }
        } while (pts1 < 60 || pts2 < 60);


        break;
    case 2:
        cout << "é simples, você precisa fazer 60 pontos para encerrar o game" << endl;
        do
        {
            cout << "Qual seu nome? " << endl;
            cin >> player1;
            cout << "o nome player 1 está certo ? s/n" << endl;
            cin >> SN;
            SN = toupper(SN);
        } while (SN != 'S');

        
       
            do {
                 
                cout << "Faça uma jogada :" << endl; 
                cout << "1 - Pedra" << endl;
                cout << "2 - Papel" << endl; // você não estava inicializando o switch!!!!
                cout << "3 - Tesoura" << endl;
                cin >> jogada;

       
            switch (jogada) {

            case 1:
                    srand(time(0));
                    joIA = rand() % 3 + 1;

            if (joIA == 1)
            {
                cout << "Empate, +5 pontos para cada";
                pts1 += 5;
                pts2 += 5;

            }
            else if (joIA == 2)
            {
                cout << "Perdeu, +10 pontos para IA";
                pts2 += 10;
            }

            else
            {
                cout << "Ganhou, +10 pontos para você";
                pts1 += 10;
            }
            break;


        case 2:
            srand(time(0));
            joIA = rand() % 3 + 1;

            if (joIA == 1)
            {
                cout << "Ganhou, +10 Pontos para Player";
                pts1 += 10;
            }
            else if (joIA == 2)
            {
                cout << "Empate, ambos marcaram +5";
                pts1 += 5;
                pts2 += 5;
            }
            else
            {
                cout << "Perdeu, a IA pontuou";
                pts2 += 10;
            }
            break;


        case 3:
            srand(time(0));
            joIA = rand() % 3 + 1;

            if (joIA == 1)
            {
                cout << "Perdeu, a IA ganhou 10 pontinhos";
                pts2 += 10;
            }
            else if (joIA == 2)
            {
                cout << "Ganhou, só gratidão. +10 Pontos";
                pts1 += 10;
            }
            else
            {
                cout << "Singelo empate, ambos ponturam +5";
                pts1 += 5;
                pts2 += 5;
            }

            break;

                } 
            } while (pts1 < 60 || pts2 < 60);
    } 
   
}
    
   


