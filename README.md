<H1>Validação de RG em C++</H1>h1>
Este projeto implementa um programa em C++ para validar números de RG (Registro Geral), um documento de identificação brasileiro. O programa solicita ao usuário que insira seu RG no formato XX.XXX.XXX-X e realiza a validação do dígito verificador com base em um cálculo específico.

<h2>Funcionalidades:<h2>
<ul>  
<li>Entrada do Usuário: O programa solicita ao usuário a entrada do RG no formato <b>XX.XXX.XXX-X.<b></li>
<li>Validação de Formato: Verifica se o RG possui o comprimento adequado de 12 caracteres.</li>
<li>Cálculo do Dígito Verificador: Realiza o cálculo do dígito verificador a partir dos nove primeiros dígitos do RG, utilizando um algoritmo que multiplica os dígitos por valores decrescentes de 9 a 1.</li>
<li>Suporte para Dígito Verificador 'X': Trata o dígito verificador 'X' como equivalente a 10.</li>
<li>Verificação de Validade: Compara o resultado do cálculo com o dígito verificador informado e exibe se o RG é válido ou inválido.</li>
</ul>

<h2>Como Executar:<h2>
<ol>
<li>Compile o código com um compilador C++.</li>
<li>Execute o programa.</li>
<li>Insira um RG no formato XX.XXX.XXX-X quando solicitado.</li>
<li>O programa exibirá se o RG é válido ou inválido.</li>
</ol>
  
<h2>Requisitos:</h2>
Compilador C++ (g++, clang++, etc.)
