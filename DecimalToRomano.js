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

   for (i = tamNum - 1; i >= 0; i--, profundidade++){
        console.log("i", i)
        let numero = decimal[i] * (10 ** profundidade);
        let romano = searchRoman(resultado, numero);
        console.log(numero)
        /* resultadoFinal.unshift(romano); */
        resultadoFinal = romano + resultadoFinal;
   }

   console.log(resultadoFinal);
}

function searchRoman(resultado, numero) {

   /*  console.log("resultado:" ,resultado, "numero:", numero) */
   //o número está chegando corretamente

   console.log(numero)

    for (i = 0; i < matrizDecimal.length; i++) {
        if (numero >= matrizDecimal[i][0]) {
            if (numero == matrizDecimal[i][0]) {
                resultado += matrizDecimal[i][1];
                return resultado;
            }
        }
        else {
            /* console.log(matrizDecimal[i-1][1]); */
            /* resultado.push(matrizDecimal[i-1][1]); */
            resultado += matrizDecimal[i-1][1];

            if (numero == matrizDecimal[i-1][0])
                return resultado;
            else {
                numero -= matrizDecimal[i-1][0];
                console.log("numero depois da subtraçãp", numero)
                searchRoman(resultado, numero);
            }
        }
    }

    return resultado;
}

