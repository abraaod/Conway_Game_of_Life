#include "../include/header.h"

int main(int *argc,char *argv[]){

  Life obj;
  char key;
  if(argv[2] != NULL){
    obj = reader_file(argv[1], argv[2]);
  }else{
    obj = reader_file(argv[1],"../data/output.txt");
  }
  while(true){

      obj.print();
      std::cout << "Do you wish continue with the generation?\n (y,n)?\n";
      std::cin >> key;
      if(key != 'y' and key !='Y'){
        return -1;
      }
      obj.update();
      obj.set_alive(obj.aux_matrix, argv[2]);
  }


  return 0;
}
