<?php
class pet{
    private $conn;
    private $usuario_id;
    public $nome;
    public $sexo;
    public $raca;
    public $foto;
    public $porte;

    public function _constructct($conn,$usuario_id, $nome, $sexo, $raca, $foto = null, $porte){
        $this ->conn = $conn ;
        $this->usuario_id = $usuario_id;
        $this ->nome = trim($nome);
        $this->sexo = $sexo;
        $this->raca = $raca;
        $this->foto = $foto;
        $this->porte = $porte;
    }
    public function salvar(){
        $sql = "INSERT INTO pets (usuario_id ,nome, sexo, raca, foto, porte) VALUES (?,?,?,?,?,? ) ";
        $stmt = $this->conn >prepare($sql);

        if ($stmt ->execute([$this->usuario_id,$this->nome, $this->sexo, $this->raca, $this->foto, $this->porte])) {
            return $this->usuario_id;
        } else{
            throw new Exception("Erro ao salvar o pet.", 1);
            
        }
    }
}
?>