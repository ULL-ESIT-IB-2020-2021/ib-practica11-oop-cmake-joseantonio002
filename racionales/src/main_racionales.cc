#include "racionales.h"
#include <vector>

int main(int argc , char* argv[]){
  if (argc != 3){
    if (argc == 2){
      std::cout<<"fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio"<<std::endl;
      std::cout<<"fichero_salida:  Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`"<<std::endl;
      return 1;
    }
    else{
      std::cout<<"Modo de uso: "<<argv[0]<<" fichero_entrada fichero_salida"<<std::endl;
      std::cout<<"Pruebe "<<argv[0]<<" --help"<<std::endl;
      return 1;
    }
  }
  std::string fentrada = argv[1] , fsalida = argv[2];
  std::ifstream ifile(fentrada);
  std::ofstream ofile(fsalida);
  std::string fraccion , resultado{""};
  int n , cont = 0;
  std::vector<int> numeros;
  std::vector<Racional> racionales;
  Racional r1;
  while (ifile >> fraccion){
    fraccion += '/';
    for (const char i : fraccion){
      if (i == '/'){
        n = std::stoi(resultado);
        numeros.emplace_back(n);
        resultado.erase(resultado.begin(),resultado.end());
      }
      else{
        resultado += i;
      }
    }
    r1.set_num(numeros[0]);
    r1.set_dem(numeros[1]);
    racionales.emplace_back(r1);
    numeros.clear();
  }

  for (int i{0};i<racionales.size();i += 2){
    Racional r1{racionales[i]};
    Racional r2{racionales[i+1]};
    Racional r3{Sumar(r1,r2)};
    ofile<<"Suma = "<<r3.num()<<'/'<<r3.dem()<<'\n';
    Racional r4{Restar(r1,r2)};
    ofile<<"Resta = "<<r4.num()<<'/'<<r4.dem()<<'\n';
    Racional r5{Multiplicar(r1,r2)};
    ofile<<"Multiplicación = "<<r5.num()<<'/'<<r5.dem()<<'\n';
    Racional r6{Dividir(r1,r2)};
    ofile<<"División = "<<r6.num()<<'/'<<r6.dem()<<'\n';
    ofile<<Comparar(r1,r2)<<std::endl;
  }

  return 0;    
}