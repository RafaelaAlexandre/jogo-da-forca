**O que e o projeto?**

    O projeto e um tradicional jogo da forca criado em linguagem c.

**Por que fazer o projeto?** 

    O objetivo do projeto e aplicar  os conceitos de string de maneira funcional e divertida.

**Como criar o projeto?** 

    #  regras do jogo:

        Sao dois jogadores: 
        O primeiro escolhe uma palavra com x letras.  
        Essa palavra e escondido e somente e revelado o numero de letras que a palavra possui. 
        O segundo usuario escolhe uma letra com que devera estar na palavra. Se o jogador  acertar, a posicao da letra e revelada. Se o jogador errar, e contabilizado 1 erro.
        Perde se o jogador errar uma quantidade  y de tentativas. Ganha se o jogador acertar todas as letras.

    #  ALgoritimo programa:
    
        -exibir regras
        -pedir dados: string 
        -tratar dados: 
            -letras maiusculas/minuscolas
            -acentuacao 
        -exibir string(letras econdidas)
        - pedir dados: caracter
        - tratar dados:
            -letras maiusculas/minuscolas 
            -acentuacao 
        -procurar letra ( varrer string  ) 
            condicao:
                - errar: 
                contar erro
                -acertar:  
                exibir string(letra revelada)