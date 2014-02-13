// funciones externas
#include "cabecera.h"


void mostrarequipo() // subprograma que muestra el contenido del fichero en pantalla
{
  ifstream fi("fichero.txt");
 while(!fi.eof()) {
      fi >> cadena;
      cout << cadena << endl;}
      fi.close();
      menu();

}

void guardarequipo() //subprograma que guarda la array de equipo en un fichero
{ 
  ofstream fi("fichero.txt");
 int i=0,j=0;
  while(i<3)
  {
    fi << "·";
    fi <<grupo[i].codigo << endl;
  while(j<2)
   {
    fi << "··";
    fi << grupo[i].jugador1[j].dorsal << "_";
    fi << grupo[i].jugador1[j].puesto << "_";
    fi << grupo[i].jugador1[j].canastas << "_";
    fi << grupo[i].jugador1[j].asistencias << "_";
    fi << grupo[i].jugador1[j].rebotes << "_";
    fi << grupo[i].jugador1[j].valor << "_";
    j++;
   }
   fi << endl;
   j=0;
   i++;
 }

  fi.close();
  menu ();
}

void verjugador() // subprograma que muestra un jugador
{
	int i = 0;
	int r = 0;
	int k;
	int ww;
	cout << "inserta el código del equipo del que deseas ver los juadores" << endl;
	cin >> ww;
	while (i < 3)
	{
		if (ww == grupo[i].codigo)
		{
			cout << "introduzca el dorsal del jugador que desea ver" << endl;
			cin >> k;
		}
				while (r < 2)
				{
					if (k == grupo[i].jugador1[r].dorsal)
					{
						cout << "el puesto del jugador con el dorsal" << k << "es:" << grupo[i].jugador1[r].puesto << endl;
						cout << "el numero de canastas del jugador con el dorsal" << k << "es:" << grupo[i].jugador1[r].canastas << endl;
						cout << "el numero de asistencias del jugador con el dorsal" << k << "es:" << grupo[i].jugador1[r].asistencias << endl;
						cout << "el numero de rebotes del jugador con el dorsal" << k << "es:" << grupo[i].jugador1[r].rebotes << endl;
					}
					r++;
				}
	i++;
	}
	
	menu ();
	
}

void verequipo(int j) // subprograma que muestra un equipo
{
	int i = 0;
	
	cout << "los equipos son:" << endl ;
		while (i <= j)
		{
			cout << "el codigo del equipo    " << i << "    es :   " << grupo[i].codigo << endl;
			i++;
		}
			menu ();
}

float porcentaje() //subprograma que calcula el porcentaje de un jugador respecto al mejor jugador de su clase y de su equipo
{
    int gg;
	float a;
	int kk = 0;
	int i = 0;
	int j = 0;
	int hh, h;
	cout << "introduce el equipo donde se encuentra el jugador" << endl;
	cin >> gg;
	
	while (j < 3)
	{
		if(gg == grupo[j].codigo)
		{
			h=j;
			cout << "introduzca el dorsal" << endl;
				cin >> hh;
					while (i < 3) {
						//if(!hh == grupo[j].jugador1[i].dorsal)
							//i++;
						if(hh == grupo[h].jugador1[i].dorsal)
						{
						  
						      cout << "paso1" << endl ;
						      j = 0;
						      while(j <= grupo[h].numero)
						      {
							    cout << "paso2" << endl ;
							    
							   if (grupo[h].jugador1[i].puesto == grupo[h].jugador1[j].puesto)
							   {
								cout << "paso3" << endl ;
								if (grupo[h].jugador1[j].valor > kk)
								  cout << "paso4" << endl ;
								  kk = grupo[h].jugador1[j].valor;
								  
							      }
							   
							  j++;
							    
							}
								
							    
						}
						else {
						  i++;
						}
							}
		}
			j++;
	}

i--;
a = (100 * grupo[h].jugador1[i].valor) / kk;
return a;
menu ();

}

void insertarjugador(int i) // subprograma que inserta un jugador que esta dentro de un equipo
{
	
	int rrr = 0;
while (rrr < 2) {
	int cc=0;
	while ( cc == 0 ){// creamos un while para poder hacer repetitiva la estructura
    
	cout << " introduzca el dorsal del jugador " << endl ;
	cin >> grupo[jui].jugador1[i].dorsal ;
  
	if(grupo[jui].jugador1[i].dorsal <= 25 && grupo[jui].jugador1[i].dorsal >= 1)
    cc=1;
	}
	
	int g=0;
	
	 while (cc==1){
  cout << " eliga el numero correspondiente al jugador " << endl << "puede ser:" << endl << "1 -> base" << endl << "2 -> escolta" << endl << "3 -> alero" << endl << "4 -> ala pivot" << endl << "5 -> pivot" << endl ;
  cin >> g ;
  switch (g){ //menu para escoger el puesto del jugador que se desea insertar
    case 1: grupo[jui].jugador1[i].puesto = "base";
    break;
    case 2: grupo[jui].jugador1[i].puesto = "escolta" ;
    break;
    case 3: grupo[jui].jugador1[i].puesto = "alero" ;
    break;
    case 4: grupo[jui].jugador1[i].puesto = "ala pivot" ;
    break;
    case 5: grupo[jui].jugador1[i].puesto = "pivot" ;
    break;
    default: cout << " ERROR " << endl ;
  }
  if(g>0 && g<6)// if para diferenciar el fin de el switch
    cc=0;
  }
  
   cout << " introduzca el numero del canastas del jugador " << endl ;
  cin >> grupo[jui].jugador1[i].canastas ;
  
  cout << " introduzca el numero de asistencias del jugador " << endl ;
  cin >> grupo[jui].jugador1[i].asistencias ;
  
  cout << " introduzca el numero de rebotes del jugador " << endl ;
  cin >> grupo[jui].jugador1[i].rebotes ;
  
  grupo[jui].jugador1[i].valor = ( (grupo[jui].jugador1[i].canastas * 3) + (grupo[jui].jugador1[i].asistencias * 2) + (grupo[jui].jugador1[i].rebotes) ) ;
  
  cout << "el valor del jugado es : " << grupo[jui].jugador1[i].valor << endl;
  rrr++;
  i++;
  
}
	jui++;
menu ();

}

void insertarequipo() //subprograma que inserta un equipo que esta 
{

	int i = 0;
	cout << "introduce el codigo del equipo" << endl;
	cin >> grupo[jui].codigo;
	
	//j++;
	//while (i < 1)
	//{
	insertarjugador(i);

	//}
}

void menu () //subprograma que muestra el menu de opciones
{

int opcion;

cout << "menu" << endl << endl << "opcion1 : insertar equipo" << endl << "opcion2 : calcular porcentaje" << endl << "opcion3: ver el equipo" << endl << "opcion4 : ver jugador" << endl << "opcion5 : guardar datos en ficheros" << endl << "opcion6: mostrar datos de fichero" << endl;
cout << "opcion7 : salir"<< endl;
cin >> opcion;

int i = 0;
//while (ko == 0){

//}
while (i==0)
switch (opcion)
{
	case 1: 
		

		
			
			if (jui == 3)
			{
			  cout << "no se pueden introducir mas equipos" << endl;
			  menu ();
			}
			else
				insertarequipo(); 
		
			
				
	break;
	case 2: porcentaje();
	break;
	case 3: verequipo(jui);
	break;
	case 4: verjugador();
	break;
	case 5: guardarequipo();
	break;
	case 6: mostrarequipo();
	break;
	case 7: i=1;
	break;
	default: cout << "LA OPCION ES INCORRECTA" << endl;
}
}

