**O que é o projeto?**

    O projeto é um tradicional jogo da força criado em linguagem c.

**Por que fazer o projeto?** 

    O objetivo do projeto é aplicar  os conceitos de string de maneira funcional e divertida.

**Como criar o projeto?** 

    #  regras do jogo:

        São dois jogadores: 
        O primeiro escolhe uma palavra com x letras.  
        Essa palavra é escondido e somente é revelado o número de letras que a palavra possui. 
        O segundo usuário escolhe uma letra com que deverá estar na palavra. Se o jogador  acertar, a posição da letra é revelada. Se o jogador errar, é contabilizado 1 erro.
        Perde se o jogador errar uma quantidade  y de tentativas. Ganha se o jogador acertar todas as letras.

    #  ALgoritimo programa:
    
        -exibir regras
        -pedir dados: string 
        -tratar dados: 
            -letras maiúsculas/minuscolas
            -acentuação 
        -exibir string(letras econdidas)
        - pedir dados: carácter
        - tratar fados:
            -letras maiúsculas/minuscolas 
            -acentuação 
        -procurar letra ( varrer string  ) 
            condição:
                - errar: 
                contar erro
                -acertar:  
                exibir string(letra revelada)