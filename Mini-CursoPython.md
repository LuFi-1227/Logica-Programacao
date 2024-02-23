# Mini Curso de Lógica de Programação em Python
Curso feito para o python na versão 3.12.2, se você ler este arquivo em uma versão do python posterior, alguma coisa poderá ter sido modificada ou adicionada, pois python é uma linguagem que está sempre em desenvolvimento, nesse caso, fique ligado!

## Primeiros passos:
Os primeiros passos ao aprender uma linguagem são os mais importantes, pois são neles que aprendemos como escrever alguma coisa na tela, os tipos de variáveis, os loops e as estruturas condicionais.

### Escrever na tela (Output):
 Em python, assim como em toda linguagem de programação, deve haver alguma forma de dar um output - Um Output é uma forma de fazer o computador escrever na tela alguma informação - 
 seja para ver o valor de variáveis, seja para enviar uma mensagem ao usuário. Em todo caso, a forma de dar um output no python é usando o comando print:

 ```
print('mensagem')
```
Onde no lugar de mensagem, deve-se colocar o que quer que deva ser escrito na tela do computador.

- OBS: É importante que a mensagem esteja entre aspas simples ou duplas, a diferença entre uma e outra será explicada mais à frente.

### Receber dados do usuário (INPUT):
### Tipos de variáveis:
### Blocos de código:
### Identação:
### Estruturas condicionais:
### Estruturas Repetitivas:

## Ambientes Virtuais:
### O que é um ambiente virtual:
Um ambiente virtual é um espaço de trabalho que está dentro da máquina, porém, modularizado dela. Como assim?<br>

Ele é um espaço de trabalho no qual qualquer alteração que você fizer nos arquivos da linguagem ou instalação de bibliotecas não vai alterar nada no escopo global da linguagem por causa da característica de modularização. Ou seja, qualquer alteração que você fizer dentro de um ambiente virtual não valerá de nada quando este for apagado ou quando ele estiver desativado.<br>

Já no escopo global, tudo que você alterar nos arquivos, vai alterar na máquina inteira, ou seja, se você apaga uma biblioteca importante no escopo global, você terá que instalar ela novamente se precisar dela.<br>

- <strong>Vantagens de usar um ambiente virtual:</strong>
  - Você pode alterar/instalar/apagar o que quiser, não haverá efeito no sistema que poderá te prejudicar;
  - Você não possuirá conflito de bibliotecas;
  - Você terá mais liberdade para trabalhar com bibliotecas diferentes;

- <strong>Desvantagens de usar um ambiente virtual:</strong>
  - Talvez você tenha que dar o mesmo comando várias vezes em ambientes virtuais diferentes, o que é cansativo;
  - Você pode se confundir com muitos ambientes virtuais com perguntas como: "Eu já instalei biblioteca x no ambiente y ou não?";

### Como instalar a biblioteca de criação de ambiente virtual:
Depois de instalar o python na máquina, é bem simples instalar a virtual environment, para isto, basta usar o pip, você conseguirá instalar a venv com o seguinte comando:
```
pip install virtualenv
```
Com isto, você possui uma virtual env novinha e prontinha para usar.

### Como criar um ambiente virtual:
Com a biblioteca instalada, criar um ambiente virtual é simples, basta você se dirigir à uma pasta na qual você deseja criar seu ambiente virtual pelo prompt de comando ou pelo terminal e digitar o seguinte comando:
```
python -m venv "nome da virtualEnv"
```
No lugar de "nome da virtualEnv", você pode colocar qualquer nome que você desejar, no meu caso, criei uma virtualEnv com o seguinte nome:
```
python -m venv virtEnv
```
Fiquei meio sem criatividade para nomear meu ambiente virtual, com isso, o venv - Biblioteca do python - criou uma pastinha com os arquivos do meu ambiente virtual na pasta que estava no path do meu terminal.

### Como ativar um ambiente virtual:
### Como instalar arquivos no ambiente virtual:
### Como desativar um ambiente virtual:

### Possíveis erros:
- <strong>Restrição de permissões para rodar Scripts:</strong><br>

Ao tentar ativar um ambiente virtual no Windows, você pode obter o seguinte erro:<br>

"Execução de scripts foi desabilitada neste sistema"<br>

Nesse caso, o problema está associado à permissão de execução de scripts no seu sistema, mas em caso de dúvida, basta rodar o seguinte comando:<br>

```
Get-ExecutionPolicy
```

 Se o seu terminal te devolver "Restricted" como resposta, o erro é simples de corrigir, nesse caso, basta digitar o seguinte comando na linha:<br>
 
```
Set-ExecutionPolicy RemoteSigned
```

 Agora, é só tentar rodar o script de ativação novamente.
