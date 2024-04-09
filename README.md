# Trabajo Práctico 1 
## Ejercicio 2
_2-a)_ **¿Por qué es conveniente incluirlo?** 
    .gitignore sirve para ignorar y no trackear archivos del repositorio, por lo que es conveniente incluirlo para no tener que subir o bajar, uno a uno, los archivos de un repositorio evitando los archivos que no queremos. 
    **¿Cuándo se debe hacer?**
    Es conveniente incluirlo en el primer commit, pero puede agregrarse en commits posteriores 
    **¿Como configuraría el archivo .gitignore?**
    Se debe configurar manualmente el contenido de  _.gitignore_ incluyendo los archivos o extensiones a ignorar. Por ejemplo, para ignorar un archivo _ignorado.txt_ debería: abir _.gitignore_ en un editor de texto, escribir en el: _ignorado.txt_, guardar y cerrar el editor de texto.

_3-d)_ En el repositorio se ven los archivos: README.md, tp1_1.cpp_ y tp1_1.exe. Me parece que no hace falta el archivo tp1_1.exe ni los .exe que sea crearan posteriormente.

_3-g)_ **Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe?**
    Los apartados 2 y 3 del punto anterior son iguales porque el puntero almacena la dirección de memoria de la variable y porque al momento de mostrarlos por pantalla utilizé %d. 
    **¿Que se obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por que?** 
    En el punto 4 se obtiene la dirección de memoria donde se encuentra el puntero. Es diferente a los anteriores porque al ser un puntero, su dirección de memoria que contiene otra dirección de memoria en este caso contiene la dirección de memoria de la variable num.
    