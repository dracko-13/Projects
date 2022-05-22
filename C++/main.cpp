#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {

	srand(time(NULL));

	int k, total_1 = 0, total_2 = 0, total_3 = 0, total_4 = 0, candidato_1[4], candidato_2[4], candidato_3[4], candidato_4[4];
	char mas_votado[5] = "";
	double total = 0.0, porcentaje_1 = 0, porcentaje_2 = 0, porcentaje_3 = 0, porcentaje_4 = 0;

	for(k = 0; k < 5; k++) {
		candidato_1[k] = 1 + rand() % 250;
		candidato_2[k] = 1 + rand() % 250;
		candidato_3[k] = 1 + rand() % 250;
		candidato_4[k] = 1 + rand() % 250;
	}

	cout << "DISTRITO | Candidato A | Candidato B | Candidato C | Candidato D" << endl;
	for(k = 0; k < 5; k++) {
		cout << setw(4) << (k +1) << setw(15) << candidato_1[k] << setw(13) << candidato_2[k] << setw(13) << candidato_3[k] << setw(14) << candidato_4[k] << endl;
	}

	for(k = 0; k < 5; k++) {
		total_1 += candidato_1[k];
		total_2 += candidato_2[k];
		total_3 += candidato_3[k];
		total_4 += candidato_4[k];
	}

	total = total_1 + total_2 + total_3 + total_4;

	cout << endl;

	cout << "Total del candiadto A: " << total_1 << endl;
	cout << "Total del candiadto B: " << total_2 << endl;
	cout << "Total del candiadto C: " << total_3 << endl;
	cout << "Total del candiadto D: " << total_4 << endl;

	cout << endl;

	if((total_1 > total_2) && (total_1 > total_3) && (total_1 > total_4)) {
		strcpy(mas_votado, "A");
	} else if((total_2 > total_1) && (total_2 > total_3) && (total_2 > total_4)) {
		strcpy(mas_votado, "B");
	} else if((total_3 > total_1) && (total_3 > total_2) && (total_3 > total_4)) {
		strcpy(mas_votado, "C");
	} else {
		strcpy(mas_votado, "D");
	}

	cout << "El candidato más votado es: " << mas_votado << endl;

	cout << endl;

	porcentaje_1 = ((total_1 * 100) / total);
	porcentaje_2 = ((total_2 * 100) / total);
	porcentaje_3 = ((total_3 * 100) / total);
	porcentaje_4 = ((total_4 * 100) / total);

	cout << "Porcentaje del candiadto A: " << porcentaje_1 << " %" << endl;
	cout << "Porcentaje del candiadto B: " << porcentaje_2 << " %" << endl;
	cout << "Porcentaje del candiadto C: " << porcentaje_3 << " %" << endl;
	cout << "Porcentaje del candiadto D: " << porcentaje_4 << " %" << endl;

	cout << endl;

	if(porcentaje_1 > 50) {
		cout << "Candidato A ganador" << endl;
	} else if(porcentaje_2 > 50) {
		cout << "Candidato B ganador" << endl;
	} else if(porcentaje_3 > 50) {
		cout << "Candidato C ganador" << endl;
	} else if(porcentaje_4 > 50) {
		cout << "Candidato D ganador" << endl;
	} else {
		cout << "No hay candidato ganador" << endl;
	}

	cout << endl;

	if(porcentaje_1 < 50) {
		cout << "Candidato A no alcanzo el 50%" << endl;
	} else if(porcentaje_2 < 50) {
		cout << "Candidato B  no alcanzo el 50%" << endl;
	} else if(porcentaje_3 < 50) {
		cout << "Candidato C  no alcanzo el 50%" << endl;
	} else if(porcentaje_4 < 50) {
		cout << "Candidato D  no alcanzo el 50%" << endl;
	}

	cout << "Total de votos: " << total << " corrrespondiente a:  " << ((total  * 100) / total) << " %" << endl;

	return 0;
}

// clear && g++ main.cpp -o main && ./main
