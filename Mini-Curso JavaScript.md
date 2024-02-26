# Mini Curso de JavaScript
Este mini curso foi feito para quem está iniciando na linguagem javaScript e ainda não sabe nada, mas quer aprender rápido e já sair daqui programando, então se prepara e vamos lá.

## Índice:
- [O que é JavaScript?](#o-que-é-javascript)
- [Instalação](#instalação)
- [Primeiro Comando](#primeiro-comando)

## O que é Javascript?
- O JavaScript é uma linguagem de programação fracamente tipada que será interpretada pelo navegador para implementar itens complexos em páginas Web, estes itens complexos são itens que se atualizam automaticamente (Não estáticos), ou seja, itens que poderão ser modificados através do banco de dados da página, um exemplo disso são imagens de produtos em lojas da web ou mapas 2d/3d.

## Instalação:
- Não será necessário instalar nenhum aplicativo em específico, pois o javascript roda através das ferramentas de interpretação do navegador dentro do código html, porém, se você quiser rodar o JavaScript pelo seu terminal (o que eu recomendo para este curso), você pode começar instalando o Node.js pelo seguinte link:<br>

    - [Node](https://nodejs.org/en/download/current)

- Basta baixar o apk ou msi e rodar apertando em next e marcando para adicionar no path, futuramente, posso até fazer um tutorial.

## Primeiro Comando:
- Assim como em toda linguagem de programação, o primeiro passo é criar um arquivo da linguagem em seu computador, e independentemente do editor de texto que você prefere utilizar, a extensão do arquivo que você irá rodar deve ser .js, portanto, comece criando no seu diretório um arquivo .js, por exemplo, crie um arquivo com o nome:
```
  MeuPrimeiroCodigo.js
```
- Estando dentro do seu arquivo para começar a editá-lo, agora você poderá escrever o comando de Output do javascript, que é o seguinte:
```javascript
  console.log("mensagem");
```
- Onde você pode substituir a palavra mensagem por qualquer coisa que você queira, por exemplo:
```javascript
  console.log("Alô, mundo");
```
- Após isto, basta salvar o documento de texto da forma como está e abrir o diretório no qual está o seu arquivo no terminal, então você pode optar por rodar o script no navegador usando html (Ensinarei posteriormente), ou se você tiver o node instalado, basta digitar no seu terminal o seguinte comando:
```
  node MeuPrimeiroCodigo.js
```
- Aperte a tecla enter e veja seu código rodando no terminal!

## Variáveis:
- Como dito, o JavaScript é fracamente tipado, ou seja, o interpretador não diferencia um inteiro de um real ou de um caractere. Por isso, não é necessário aprender palavras reservadas como "int" ou "float" como na linguagem C, porém, há algumas palavras reservadas para o interpretador conseguir diferenciar quanto à parte do escopo do seu programa, sendo assim, aprenderemos as palavras, bem como diferenciar a serventia de cada uma.

### var:
- A palavra reservada <em>var</em> é usada para declarar variáveis que existem e podem ser acessadas mesmo que a própria existência dependa de um bloco de código e seja executada mesmo assim, como exemplo, usaremos o comando <em>if</em>, que em suma, é um comando que fará o que está em seu escopo (dentro das suas {}) se e somente se o que tiver como condição (dentro de seus ()) acontecer. Veja:
```javascript
if(true){
    var nome = "nome de alguem";
}

console.log(nome);
```
- Nesse caso, como a condição é <em>true</em>, quer dizer que o <em>if</em> é verdadeiro, ou seja, a variável nome é declarada na interpretação do código e pode ser usada logo em seguida sem nenhum problema.

### let:
- Já a palavra reservada <em>let</em> é usada para declarar variáveis que poderão ser acessadas somente se existirem no mesmo escopo do local onde serão acessadas, isto é, somente se não dependerem de outro bloco de código para existir, veja:
```javascript
if(true){
    let nome = "nome de alguem";
}

console.log(nome);
```
- Neste caso, o console dirá que há um erro de declaração de variável no código, isto porque mesmo que a nossa variável <em>nome</em> exista por causa do fato do <em>if</em> ser verdadeiro na execução deste código, não pode ser usada devido à possibilidade de não existir, neste caso, para obter o mesmo resultado de uma var, deveríamos rodar o seguinte código:
```javascript
let nome;
if(true){
    nome = "nome de alguem";
}

console.log(nome);
```
- Este código exibirá o <em>"nome de alguem"</em> pelo fato de a <em>let</let> existir independentemente do if na execução. Portanto, enquanto uma <em>var</em> existe independentemente de estar em um bloco de código, a <em>let</em> só existe se estiver no mesmo bloco de código onde será utilizada.
 
### const:
- Uma <em>const</em> é uma "variável" que não pode variar, ou seja, depois de uma vez declarada, nunca poderá ter seu valor modificado. Veja:
 ```javascript
const nome = "Cachorro";
const nome = "Gato";

console.log(nome);
```
- Este código devolverá um erro por causa da tentativa de mudar o valor de uma constante, sendo assim, fica provado que no javaScript, uma constante não pode mudar nunca, se você quiser fazer este código dar certo, remova a linha 1 ou a linha 2 conforme sua preferência. Veja:
 ```javascript
const nome = "Cachorro";

console.log(nome);
```
- Este código devolverá um Output como "Cachorro", já que não houve tentativa de mudar a const, ficando no final um código que deu certo e uma polêmica, já que o autor gosta mais de cachorro que de gato :)!

### Como declarar uma Variável:
- Existe apenas uma forma de declarar <em>uma</em> variável em javaScript com boas práticas, que é declarar seu tipo e o seu nome logo em seguida:
```javascript
    var variavel1;
    let variavel2;
    const constante1;
```
- Porém, se você precisar declarar mais de uma variável do mesmo tipo, você pode fazer tanto da seguinte forma:
```javascript
    var var1;
    var var2;
    var res;
    let let1;
    let let2;
    let let3;
```
- Quanto da seguinte forma:
```javascript
    var var1, var2, var3;
    let let1, let2, let3;
```
- Essa segunda é um pouco mais simples, não?

### Como inicializar uma variável:
- Inicializar uma variável também é simples, você pode inicializá-la na sua declaração ou após isso, da seguinte forma:
```javascript
    var var1 = 0; //Inicializando durante a declaração;
    let let1 = 0; //Inicializando durante a declaração;
    var var2;
    var2 = 0; //Inicializando depois da declaração;
```
- Porém, você também pode inicializar várias variáveis na mesma linha, assim:
```javascript
    var var1=0, var2=0, var3=0;
```
- Ou então, você também pode inicializá-las em linhas diferentes, assim:
```javascript
    var var1, var2, var3;
    var1=var2=var3=0;
```
- Sendo esta última forma mais confusa, porém, com o mesmo efeito!
- Agora, você sabe bastante sobre variáveis, vamos ao próximo tópico!

## Comentários:
- Você provavelmente já viu um comentário neste documento e ficou confuso, bom, um comentário é uma linha de alto nível que você escreve, mas o interpretador não considera na interpretação, ou seja, o comentário não deve nem pode alterar o código escrito, servindo mais para o ser humano que para a máquina para explicar o que foi feito no código, inclusive, é uma boa prática (Que eu particularmente não gosto. "he, he"), mas há duas formas de comentar em javaScript, que são:

### Comentário In-Line:
- O comentário In-line comenta uma única linha, isto é, quando você apertar enter(quebrar a linha), não haverá mais comentário e o interpretador voltará a interpretar a partir da quebra de linha, para fazê-lo, use o <em>//</em>.
```javascript
    //Isto é um comentário in line
    Esta linha é interpretada pelo compilador

    //Isto é outro comentário In-Line
    //Esta linha também está comentada
```
- Mas como você viu, dá trabalho para comentar mais de uma linha, já que você tem que escrever <em>//</em> em todas linhas abaixo para comentá-las, por isto, existe o comentário In-Block.

### Comentário In-Block:
- O comentário In-Block serve para comentar um bloco de linhas, ou seja, um conjunto de linhas demarcado por <em>/**/</em> não será considerado pelo interpretador na interpretação, sendo assim, as quebras de linha, desde que dentro da demarcação, serão consideradas como comentários pelo interpretador, se não entendeu, você entenderá agora:
```javascript
    //Isto é um comentário In-Line
    Esta linha não foi comentada

    /*
    Isto é um comentário In-BLOCK
    Esta linha está comentada
    Esta também
    Esta também
    Esta também
    */
    Esta linha já não está mais comentada!
```
