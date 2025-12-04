#include <iostream>
#include <ctime>
#include <iomanip> 
#include <sstream>
using namespace std;

string trocar(string texto) {
    string result = "";

    for (int i = 0; i < texto.length(); i++) {
        if (isalnum(texto[i])) { 
            result += texto[i];
        }else if(texto[i] == '&'){
             result += "&";
        }else if(texto[i] == '+'){
            if (texto[i-1] == ' ') {
                result += "plus";
            } else {
                result += "-plus";
            }
            if (isalnum(texto[i+1])) {
                result += "-";
            }
        }else {
            result += '-';
        }
    }
    return result; 
}

string escreverData(){
  std::time_t timestamp = time(nullptr);
  std::tm* tm_local = localtime(&timestamp);
  std::stringstream ss;
  ss << std::put_time(tm_local, "%y%m%d");
  return ss.str();
}

int main(int argc, char* argv[]){
    for (int i = 1; i < argc; i++) {
        cout << escreverData()+"-" << trocar(argv[i]) << endl;
    }
}

