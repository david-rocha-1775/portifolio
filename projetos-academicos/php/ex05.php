<?php
//while
$passos = 10;
while ($passos < 13){
    echo "A tartaruga deu um passo ($passos) <br>";
    $passos ++;
}

// do while 
$tentativas =0;
do{
    echo "O macaco tentou pegar a banana ($tentativas) <br>";
    $tentativas ++;
} while ($tentativas < 3);
 
// for
for ($i =1; $i <=3; $i++){echo "A formiguninha carregou a folha passo $i <br>";
}
//foreach
$frutas=["maça", "uva", "laranja"];
foreach($frutas as $frutas){
    echo"eu gosto de $frutas <br>";
}
$aluno = ["nome" => "joão", "idade" => 20];
foreach($aluno as $chave => $valor){
    echo "$chave: $valor <br>";
}
?>