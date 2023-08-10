#include<iostream>
class Library
{
    public:
    int id;
    char name[100];
    char author[100];
    char student [100];
    int price;
    int page;
};

int main()
{
   Library lib[20];
   int input=0;
   int count=0;
   
   while(input!=5)
   {
       std:: cout<<"Enter 1 to input details like id, name, author, student, price, page"<<std::endl;
       std::cout<<"Enter 2 to display details"<<std::endl;
       std::cout<<"Enter 3 to quit"<<std::endl;
       std::cin>>input;
       
       
       switch(input){
           case 1:
           start:
               std::cout<<"Enter Book id"<<std::endl;
               std::cin>>lib[count].id;
               std::cout<<"Enter Book name"<<std::endl;
               std::cin>>lib[count].name;
               std::cout<<"Enter Book author"<<std::endl;
               std::cin>>lib[count].author;
               std::cout<<"Enter student name"<<std::endl;
               std::cin>>lib[count].student;
               std::cout<<"Enter Book price"<<std::endl;
               std::cin>>lib[count].price;
               std::cout<<"Enter Book page"<<std::endl;
               std::cin>>lib[count].page;
           count++;
           break;
           
        case 2:
        
        for(int i=0;i<count;i++){

            std::cout<<"Book id: "<<lib[i].id<<std::endl;
            std::cout<<"Book name: "<<lib[i].name<<std::endl;
            std::cout<<"Book author: "<<lib[i].author<<std::endl;
            std::cout<<"Book student: "<<lib[i].student<<std::endl;
            std::cout<<"Book price: "<<lib[i].price<<std::endl;
            std::cout<<"Book page: "<<lib[i].page<<std::endl;
            
        }
          break;
          
          
          case 3:
           exit(0);
           break;
           
           default:
               std::cout<<"You have entered wrong details, please type again"<<std::endl;
           goto start;
       }
       
   }
}
