# 42-Madrid Libft
*Este proyecto ha sido creado como parte del currículo de 42 por lretamal.*

# 📚 Libft

## 🧩 Descripción

**libft** es el primer proyecto del cursus de **42** y consiste en la creación de una librería propia en C.  
El objetivo es reimplementar una selección de funciones estándar de la libc, siguiendo fielmente su comportamiento según las páginas de manual (`man`), y empaquetarlas en una librería estática llamada **libft.a**.

Esta librería servirá como herramienta base reutilizable a lo largo del cursus, permitiendo comprender en profundidad el funcionamiento interno de funciones fundamentales del lenguaje C, la gestión de memoria y la manipulación de strings.

Todas las funciones implementadas utilizan el prefijo `ft_` y no dependen de funciones externas, salvo cuando se indica explícitamente en el enunciado.

---

## 🛠️ Instrucciones

### 📦 Compilación

El proyecto incluye un **Makefile** con las siguientes reglas:

```bash
make        # Compila la librería libft.a
make clean  # Elimina los archivos objeto
make fclean # Elimina los archivos objeto y libft.a
make re     # Recompila el proyecto completamente
