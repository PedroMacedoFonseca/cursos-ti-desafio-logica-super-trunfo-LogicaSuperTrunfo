# SuperTrunfo - Comparação de Cidades

Este programa é uma versão simples do jogo SuperTrunfo, onde o usuário pode comparar duas cidades com base em diferentes atributos, como população, área, PIB, pontos turísticos e densidade populacional.

## Funcionalidades: 
O usuário escolhe uma cidade (entre São Paulo e Rio de Janeiro) e seleciona um atributo para comparação.
O programa compara as cidades com base no atributo escolhido e exibe quem é o vencedor ou se houve empate.

## Atributos Disponíveis para Comparação

População - Compara o número de habitantes.

Área - Compara a área territorial (em km²).

PIB - Compara o Produto Interno Bruto (em bilhões de R$).

Número de pontos turísticos - Compara a quantidade de pontos turísticos.

Densidade demográfica - Compara a densidade populacional (habitantes por km²).

## Como Compilar e Executar

### Pré-requisitos: 

Certifique-se de ter o compilador GCC instalado em seu sistema.

Caso não tenha, você pode instalar o GCC da seguinte forma:

No Windows: Instale o MinGW ou use o WSL.

No Linux: O GCC pode ser instalado com o comando sudo apt install gcc no Ubuntu, por exemplo.

No macOS: O GCC pode ser instalado com o Homebrew (brew install gcc).

### Compilando o Programa: 

Abra o terminal no diretório onde o código está localizado.
Compile o programa com o seguinte comando:

gcc -o supertrunfo supertrunfo.c

Isso criará um arquivo executável chamado supertrunfo.exe

### Executando o Programa: 

Após compilar o código, execute o programa com o comando:

./supertrunfo

## Exemplo de Execução:

O programa exibirá o menu de escolha de atributo para comparação:

Qual atributo será usado para fazer a comparação?

1 - População

2 - Área

3 - PIB

4 - Número de pontos turísticos

5 - Densidade demográfica

Escolha uma opção (1-5):

O usuário deve escolher uma opção (1-5) para o atributo desejado.

Em seguida, será solicitado para o usuário escolher uma cidade para comparação:

Agora, escolha qual cidade será o seu representante para a comparação:

1 - São Paulo

2 - Rio de Janeiro

Escolha uma opção (1-2):
O programa fará a comparação com base no atributo escolhido e informará o resultado:

Exemplo 1: Se a opção escolhida for População e o usuário escolher São Paulo, o programa mostrará:

Você venceu! São Paulo tem mais população.

Exemplo 2: Se a opção escolhida for Área e o usuário escolher Rio de Janeiro, o programa mostrará:

Você perdeu! São Paulo tem mais área.
