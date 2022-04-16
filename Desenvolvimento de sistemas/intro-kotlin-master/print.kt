fun main(args: Array<String>) {
    val x = 10
	when (x) {
   1,2,3 -> print("Valor ruim")
   4,5,6 -> print("Valor aceito")
   7,8,9,10 -> print("Valor ótimo")
    else -> { 
       print("Valor não encontrado")
   }
}
}