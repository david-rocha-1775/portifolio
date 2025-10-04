<?php
echo" operadores basicos <br>as variaveis tem valor 40 e 30. <br><br>";
//adiçao
$produto1 = 40.00;
$produto2 = 30.00;
$resultado = $produto1 + $produto2;
echo"o resultado da soma é: $resultado <br>";

//subtraçao
$resultado = $produto1 - $produto2;
echo"o resultado da subtraçao é: $resultado <br>";

//mltiplicação
$resultado = $produto1 * $produto2;
echo"o resultado da multiplicação é: $resultado <br>";

//divisão
$resultado = $produto1 / $produto2;
echo"o resultado da divisão é: $resultado <br>";

//modulo
$resultado = $produto1 % $produto2;
echo"o resto da divisão inteira é: $resultado <br><br>";

//if else
echo'if else<br>';
$idade = 20;
if ($idade < 12){
    echo "voce é uma criaça tem apenas $idade anos.<br><br>";
}elseif ($idade >= 12 && $idade < 18){
    echo "voce é um adolescente tem $idade anos.<br><br>";
}elseif ($idade >= 18 && $idade < 60){
    echo "voce é um adulto tem $idade anos.<br><br>";
}else{
    echo "voce é um idoso tem $idade anos.<br><br>";
}
//switch case
echo'switch case<br>';
$prioridade = "Alta";
switch($prioridade){
    case"Baixa":
    echo" o chamado será atendido em 72 horas";
    break;
    case"Média":
    echo"o chamado será atendido em 24 horas";
    break;
    case "Alta":
    echo"o chamado será atendido imediatamente";
    break;
    default:
    echo"Prioridade inválida";
}   
?>