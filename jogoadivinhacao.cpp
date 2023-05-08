#include <iostream>



int main()
{
    std::cout << "******************************************" << std::endl;
    std::cout <<"Bem vindo ao jogo da adivinhação" << std::endl;
    std::cout << "******************************************" << std::endl;
    std::cout <<"Escolha o seu nível de dificuldaed: " << std::endl;
    std::cout <<"Fácil (F), Médio (M) ou Difícil (D) " << std::endl;

    // Criando variáveis 
    char nivelDificuldade;
    int numeroTentativas;
    bool opcaoinvalida = true;


    // Variavel que receberá o input do nivel da dificuldade    
    
    while(opcaoinvalida)
    {
        std::cin >> nivelDificuldade;
        switch (nivelDificuldade)
        {
            case 'F':
                numeroTentativas = 15;
                opcaoinvalida = false;
                break;
            case 'M':
                numeroTentativas = 10;
                opcaoinvalida = false;
                break;
            case 'D':
                numeroTentativas = 5;
                opcaoinvalida = false;
                break;
            default:
                std::cout <<"A letra deve ser Maiuscula e você só pode escolher entre [F], [M] e [D]" << std::endl;
                opcaoinvalida = true;
                break;
        }       
    }
    
    


    const int NUMEROSECRETO = 42;
    int chute;
    int tentativas = 0;

    double pontos = 1000;
    
    for(tentativas; tentativas < numeroTentativas; ++tentativas )
    {
        
        std::cout << "Tentativa: " << tentativas << std::endl;
        std::cout << "Qual o seu chute?" << std::endl;
        std::cin >> chute;


        std::cout << "O valor do chute é: " << chute << std::endl;

        bool acertou = (chute == NUMEROSECRETO);
        bool maior = (chute > NUMEROSECRETO);
        
        if(acertou)
        {
        std::cout << "Parabéns! VocÊ acertou o número!" << std::endl;
        std::cout.precision(2);
        std::cout << std::fixed;
        std::cout <<"Você acertou o jogo em " << tentativas << " tentativas" << std::endl;
        break;
        
        }
        else if(maior)
        {
            std::cout << "O número que você chutou é muito grande!" << std::endl;
        }
        else
        {
            std::cout << "O número que você chutou é muito pequeno!" << std::endl;
        }

        double pontosPerdidos = (double) abs((chute - NUMEROSECRETO)) / 2;
        std::cout << "Voce perdeu: " << pontosPerdidos << "pontos" << std::endl;

        pontos = pontos - pontosPerdidos;
    }
       


    std::cout << "Sua pontuação foi: " << pontos << " pontos."<< std::endl;










    return 0;
}