<?php 
$nome ='Joe';
$ano = 1980;
$ano_atual = date("Y");
$anos_passados = $ano_atual - $ano;
$peso = 100;
$peso_atual= ($anos_passados * 3) + $peso;
const PAIS ='Índia';
$numero = TRUE;
echo "o ano era $ano quando o elefante $nome que pesava $peso kg foi o $numero elefante a ser aprisionado e levado para a " .PAIS.". <br>";
echo "se passaram $anos_passados anos e agora o elefante $nome tem $peso_atual kg. ";
?>