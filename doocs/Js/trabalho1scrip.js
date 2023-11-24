function displayRadioValue(){
    var elementos = document.getElementsByName('gender');
    for(i = 0; i < elementos.length; i++){
        if(elementos[i].checked){
            document.getElementById('result').innerHTML =
            "o genero selecionado e "+elementos[i].Value;
        }
    }
}


function getOption(){
    let selectElement = document.querySelector('#select1');
    let output = selectElement.Value;
    document.querySelector('.output').textContent = output;
}

function getCheckBox(){
    let getCheckBoxes = document.querySelectorAll('input[type="checkBox"]:checked');
    let text = "";
    for(i = 0; i < getCheckBoxes.length; i++){
        text = `${text} ${getCheckBoxes[i].Value},`
    }
    document.getElementById('pri').innerHTML = text
}