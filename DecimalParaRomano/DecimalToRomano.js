let matrizDecimal = [
    [1, 'I'],    
    [4, 'IV'],
    [5, 'V'],
    [9, 'IX'],
    [10, 'X'],
    [40, 'XL'],
    [50, 'L'],
    [90, 'XC'],
    [100, 'C'],
    [400, 'CD'],
    [500, 'D'],
    [900, 'CM'],
    [1000, 'M'],
];



function converteToDecimal() {
   let decimal = document.getElementById("numero").value.toString();
   let tamNum = decimal.length;
   let profundidade = 0;
   let resultado = "";
   let resultadoFinal = "";

   for (let i = tamNum - 1; i >= 0; i--, profundidade++){
        let numero = decimal[i] * (10 ** profundidade);
        let romano = searchRoman(resultado, numero);
        resultadoFinal = romano + resultadoFinal;
   }

   console.log(resultadoFinal);
   document.getElementById("resultado").innerHTML = "Resultado = " + resultadoFinal;
}

function searchRoman(resultado, numero) {

    for (let i = 0; i < matrizDecimal.length; i++) {
        if (numero >= matrizDecimal[i][0]) {
            if (numero == matrizDecimal[i][0]) {
                resultado += matrizDecimal[i][1];
                return resultado;
            }
        }
        else if (numero > 0){
            resultado += matrizDecimal[i-1][1];

            if (numero == matrizDecimal[i-1][0])
                return resultado;
            else {
                numero -= matrizDecimal[i-1][0];
                resultado = searchRoman(resultado, numero);
                return resultado;
            }
        }
    }

    return resultado;
}

var romanMatrix = [
    [1000, 'M'],
    [900, 'CM'],
    [500, 'D'],
    [400, 'CD'],
    [100, 'C'],
    [90, 'XC'],
    [50, 'L'],
    [40, 'XL'],
    [10, 'X'],
    [9, 'IX'],
    [5, 'V'],
    [4, 'IV'],
    [1, 'I']
  ];

  function pegaNumero() {
    let decimal = document.getElementById("numero").value;
    let resultado = convertToRoman(decimal);
    document.getElementById("resultado").innerHTML = `Resultado = ${resultado}`
  }
  
  function convertToRoman(num) {
    if (num === 0) {
      return '';
    }
    for (var i = 0; i < romanMatrix.length; i++) {
      if (num >= romanMatrix[i][0]) {
        return romanMatrix[i][1] + convertToRoman(num - romanMatrix[i][0]);
      }
    }
  }

