<!-- Autor: Daniel Benjamin Perez Morales -->
<!-- GitHub: https://github.com/DanielPerezMoralesDev13 -->
<!-- Correo electrónico: danielperezdev@proton.me -->
# ***Explicación detallada de los resultados de `strcmp`***

*Cuando utilizamos `strcmp` para comparar dos cadenas de caracteres `str1` y `str2`, el resultado puede ser uno de los siguientes:*

1. **`strcmp(str1, str2) == 0`:** *Esto significa que las dos cadenas son iguales. Cada carácter en `str1` es igual al correspondiente carácter en `str2`. Esto incluye tanto el contenido de las cadenas como la longitud de las mismas.*

2. **`strcmp(str1, str2) > 0`:** *Esto indica que `str1` es "mayor" que `str2` en términos lexicográficos. En otras palabras, la cadena `str1` sigue después de `str2` en orden alfabético. Este valor positivo específico indica cuál es el primer par de caracteres diferentes entre las dos cadenas.*

3. **`strcmp(str1, str2) < 0`:** *Esto indica que `str1` es "menor" que `str2` en términos lexicográficos. En otras palabras, la cadena `str1` precede a `str2` en orden alfabético. Este valor negativo específico indica cuál es el primer par de caracteres diferentes entre las dos cadenas, pero en el orden inverso al caso `> 0`.*

*La magnitud exacta del resultado (ya sea positiva o negativa) no tiene un significado específico en términos de la distancia entre las cadenas. Es simplemente un indicador de cuál cadena viene primero en orden alfabético si se ordenaran como palabras.*

**Por ejemplo:**

- *Si `strcmp(str1, str2)` devuelve `2`, significa que `str1` sigue después de `str2` en orden alfabético.*

- *Si `strcmp(str1, str2)` devuelve `-3`, significa que `str1` precede a `str2` en orden alfabético.*
