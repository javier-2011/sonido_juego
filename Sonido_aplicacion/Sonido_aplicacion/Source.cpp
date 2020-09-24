//Sonido: Solo reproduce un sonido de cada vez. Como se baja en mp3 hay que pasarlo a wav, que se puede hacer en paginas 
//encontrados con el buscador

#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	//Creación de pitidos
	//Sonido BEEP de Windows

	Beep(14500, 300); //Dos parámetros; frecuencia (Hz) y duraciòn del sonido  (ms)

	//Creacion de sonidos con caracter ASCII. El caracter 7 de la tabla ASCII es Bell

	//cout << (char)7; //Tambien '\7' que en octal tambien es 7

	//Reproductor de sonidos en windows 
	/*MessageBeep(MB_OK); //reproduce el sonido ok windows
	cin.get();
	MessageBeep(MB_ICONINFORMATION);
	cin.get();
	MessageBeep(MB_ICONHAND);
	cin.get();
	MessageBeep(MB_ICONEXCLAMATION);*/

	//REPRODUCIR FICHEROS wav. Poner el fichero de sonido al lado de fichero source.cpp
	PlaySound(TEXT("alerta2.wav"), NULL, SND_SYNC);//Ir a la documentacion de windocs
	//SND_SYNC; REPRODUCE SONIDO DE PRINCIPIO A FIN
	//SND_ASYNC; REPRODUCE SONIDO HASTA SER INTERRUMPIDO
	//SND_LOOP; REPRODUCE SONDIDO EN BUCLE
	//Al visual le falta una biblioteca Winmm.lib (Windows multimedia); Boton derecho en Sonido_aplicacion del 
	//explorador de soluciones->propiedades ->vinculador->entradas->pestaña->editar e incluir Winmm.lib

	//Se puede crear una carpeta en la misma que el de source y meter los sonidos a utilizar. Sin embargo
	//habrá que`poner la ruta y en lugar de "alerta2.wav" deberá ponerse "nombre_carpeta//disparo.wav"


	return 0;
}