<h2>🍕 Sistema Simples de Pizzaria em C</h2>
<p>Este é um sistema básico de pizzaria desenvolvido na linguagem C para demonstrar interações simples com o usuário na escolha de uma pizza. O programa permite selecionar o tamanho da pizza, adicionar borda recheada, escolher o sabor (inteiro ou dois sabores meio a meio) e retirar a cebola.
Este projeto é um exemplo introdutório e pode ser expandido com mais funcionalidades.</p>

<h2>⚙️ Como Executar</h2>
<p>Para executar este sistema, você precisará de um compilador C (como o GCC) instalado em seu sistema. Siga os seguintes passos:
Salve o código: Salve o código-fonte fornecido em um arquivo com a extensão .c (por exemplo, pizzaria.c).</p>

<p>Compile o código: Abra o seu terminal ou prompt de comando e navegue até o diretório onde você salvou o arquivo. Utilize o seguinte comando para compilar o código:<br>
  
```bash
gcc pizzaria.c -o pizzaria
```
Execute o sistema: Após a compilação bem-sucedida, execute o programa com o seguinte comando:<br>

```bash
./pizzaria
```
(Em alguns sistemas Windows, pode ser necessário usar pizzaria.exe).</p> 

<h2>🍕 Como Utilizar</h2>
<p>Ao executar o programa, você será guiado por uma série de perguntas para personalizar o seu pedido de pizza:

Tamanho da Pizza: Você deverá escolher o tamanho desejado digitando o número correspondente:<br>
<ol>(1) - Pequena
(2) - Média
(3) - Grande</ol>
Borda de Catupry: Será perguntado se você deseja adicionar borda de Catupry. Digite o número correspondente:<br>
<ol>(1) - Sim
(2) - Não
Modelo do Sabor: Você deverá escolher se deseja um sabor único ou dois sabores (meio a meio):<br>
(1) - Inteira
(2) - Meia a Meia</ol>

Escolha do(s) Sabor(es):<br>
Se você escolheu Inteira, será apresentada uma lista de sabores para você escolher digitando o número correspondente.
Se você escolheu Meia a Meia, você deverá escolher o primeiro sabor e, em seguida, o segundo sabor, utilizando os números correspondentes da lista.
Os sabores disponíveis são:<br>
<ol>(1) - Mussarela
(2) - Calabresa
(3) - Portuguesa
(4) - Franco C/ Catupry
(5) - Peperoni</ol>
Retirar Cebola: Por fim, será perguntado se você deseja retirar a cebola da pizza. Digite o número correspondente:<br>
<ol>(1) - Sim
(2) - Não</ol>
Após responder a todas as perguntas, o programa exibirá uma mensagem de agradecimento e informará que espera que você goste da pizza.</p>

<h2>🛠️ Estrutura do Projeto</h2>
<p>O projeto consiste em um único arquivo fonte em C (pizzaria.c). O código utiliza a função printf para exibir mensagens ao usuário e a função scanf para receber as entradas do usuário. A lógica de seleção de sabor é implementada utilizando a estrutura condicional if-else.</p>

<h2>📚 Bibliotecas Utilizadas</h2>
<p>stdio.h: Biblioteca padrão de entrada e saída em C, utilizada para as funções printf e scanf.</p>

<h2>📝 Observações</h2>
<p></p>Este é um sistema muito básico e não inclui funcionalidades como cálculo de preço, confirmação do pedido, etc.</br>
O tratamento de erros é mínimo. O programa assume que o usuário digitará as opções válidas.</br>
Este projeto pode ser expandido para incluir mais opções de sabores, tamanhos, bordas, ingredientes adicionais, cálculo de preço total, e até mesmo persistência de dados (como um histórico de pedidos).</br>
Sinta-se à vontade para modificar e expandir este código como desejar!</p>
