# Somador de Números

Nesta tarefa, o programa receberá como entrada um texto contendo diversas
palavras e números. Deverá retornar, na saída, a soma de todos os números
encontrados. Para isso, algumas regras deverão ser observadas:

1. Um número só é válido se for precedido de espaços. Isso significa que
   `PALAVRA123` não contém um número válido, mas `PALAVRA 123` contém.
1. Um número deve ser seguido de espaço, caractere fim de linha ou fim de
   arquivo, de forma que `123 PALAVRA` gera um número válido mas `123PALAVRA`
   não gera.
1. Um número pode estar em formato ponto flutuante. Assim, `0.123` é um número
   válido. A omissão da parte inteira também é válida, e, portanto, `.123`
   também é um número válido. Pela primeira regra, porém, `PALAVRA.123` não gera
   um número válido.
1. O número pode estar escrito na forma de um fatorial, se for inteiro. Isso
   significa que `5!` representa o número 5 fatorial, isto é, 120.
1. A saída do programa deve ser dada em formato ponto flutuante,
   obrigatoriamente com duas casas decimais (ou seja, duas casas depois da
   vírgula), seguida de um caractere quebra de linha `\n`.

## Exemplos

Entrada | Saida
------- | -----
`1 2 3` | `6.00\n`
`1.1 OLA MUNDO 12` | `13.10\n`
`5 5OLA 3! 12.5 MUNDO` | `23.50\n`

## Instruções adicionais

1. Vá diretamente ao conjunto de testes para verificar como tratar casos
   limítrofes ou mal-definidos.
1. Lembre-se de seguir as [instruções de submissão](doc/instrucoes.md).
1. Se desejar, proponha novos casos de teste.
