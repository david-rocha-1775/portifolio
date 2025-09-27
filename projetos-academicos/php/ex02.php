<?php
//tipo de dados escalares
$inteiro = 42;
$decimal = 3.14;
$texto = 'O palmeiras não tem mundial.';
$booleano = true;

echo 'tipo inteiro';
var_dump($inteiro);

echo 'tipo float';
var_dump($decimal);

echo 'tipo string';
var_dump($texto);

echo 'tipo booleano';
var_dump($booleano);

// tipo composto
$arrayNumerico = [10,20,30];
$arrayAssociativo = [
    'nome' => 'david',
    'idade' => 18,
    'solteiro' => true,
];
echo 'arrayNumerico';
var_dump($arrayNumerico); 

echo 'arrayAssociativo';
var_dump($arrayAssociativo); 

//objeto (classe + instencia)
class Pessoa {
    public $nome;
    public $idade;

    public function apresentar(){
        return "Ola, eu sou {$this->nome},
        tenho {$this-> idade} anos.";
    }
}
$Pessoa = new Pessoa();
$Pessoa ->nome = 'david';
$Pessoa ->idade = 18;

echo"objeto Pessoa:";
var_dump($Pessoa);
echo $Pessoa ->apresentar();
?>