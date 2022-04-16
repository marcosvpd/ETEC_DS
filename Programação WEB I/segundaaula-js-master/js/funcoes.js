function trocaFonte() {
	document.getElementById("demo").style.fontSize="35px"
}
function Fontetroca() {
	document.getElementById("demo").style.fontSize="18px"
}
function Ocultarelemento() {
	document.getElementById("demo").style.display="none"
}
function naoocultar() {
	document.getElementById("demo").style.display="block"
}
function calculo() {
	var total = document.getElementById("demo").innerHTML= parseFloat (document.getElementById("num1").value) + parseFloat (document.getElementById("num2").value);
	window.alert(total);
	}