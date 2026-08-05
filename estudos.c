/* 
	! Stack e Heap
São dois âmbitos de memória, Stack seria uma memória automática
e a Heap seria uma memória manual. A Stack tem certo limite de
de tamanho enquanto a Heap pode ter uma memória muito maior. Mas
a maior diferença das duas, é que a Stack não precisa ser limpa
enquanto a Heap precisa ser limpo ou deletado.

	! Ponteiro e Referência
Um ponteiro armazena o endereço de memória de outra varíavel. 
Você o declara com o * e obtém um endereço usando &. Uma
referência é um apelido para uma variável existente. Uma vez 
vinculada, ela sempre se refere a essa variável. Você a declara
com &.
		? Principais diferenças
	-> Ponteiros:
	Podem ser nulos.
	Podem ser reatribuidos.
	Use * para acessar o valor.
	Podem apontar para nada.

	-> Referências:
	Devem ser inicializadas.
	Não podem ser vinculadas novamente.
	Acessam o valor diretamente.
	Sempre válidas.

	! Fixed Point
Existem duas formas de representar números com casas decimais, temos:
Floating Point (Float/Double) que o "ponto decimal" pode se mover,
tem expoente. Complexo e depende se o computador tem o hardware dedicado
que é o FDU tambem podendo ser chamado de Unidade de Ponto Flutuante
para poder fazer as contas.
Fixed Point que o "ponto decimal" fica numa posição fixa e combinada
previamente, dentro de um número inteiro normal.

Basicamente é como se pegassemos um int comum e dividissemos em duas
partes.
m
*/