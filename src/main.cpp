

#include <iostream>
#include "Menu.h"
#include <stdio.h>
#include <cstdlib>
#include <istream>
using namespace std;
struct Element{

char Name[200];
char Version[100];
struct Element *Next;

};

struct Element *Last= NULL;

//the book's list method

static void BList(){
struct Element *see;
int i; i=0;
see = Last;
cout<< "Book's List" <<endl;
while(see!=NULL){
    printf("Name:%s, Version:%s \n",
           see->Name,see->Version);
           see = see->Next;
           i++;
}
if(i==0){printf("\n The book list is empty");
cout<<""<<endl;
cout<<""<<endl;
}
}

//for adds book to the list
static void Add(){
    struct Element *ONE;

//
 ONE=(struct Element *)malloc(sizeof(struct Element));

 if(ONE==NULL) cout<<"Warning!" <<endl;
    cout << "Insert Book Data" <<endl;
    cout<<""<<endl;
    printf(" Name    ");fflush(stdout);
    gets(ONE->Name);

     printf(" Edition");fflush(stdout);
     gets(ONE->Version);
ONE->Next= NULL;

if(Last==NULL){
    Last=ONE;
}else{
ONE->Next=Last;
Last = ONE;
    }

}

//fro delete books from the list
static void Delete(char a, char b){
struct Element *Erase;
Erase=Last;
if(Erase!=NULL){
        cout<<"Delete? Press Enter" <<endl;
  //printf("Delete? Press Enter    ");
   fflush(stdout);
  gets(Erase->Name);
  cout<<"Confirm pressing enter" <<endl;
  //printf("   confirm Press Enter");
  fflush(stdout);
  gets(Erase->Version);
  delete Erase->Name;
  delete Erase->Version;
}
Erase->Next=NULL;


}
//stop program method or exit
static void Stop(){

cout<<"close the message windows if there is one" <<endl;
abort();

}


int main()
{
cout<<"***Made by Carlos Sosa***" <<endl;



        char option; // for options
        //fro delete method
        char a;
        char b;

	do{
        Menu menu; // call menu class
	     menu.show(); // call show() method from menu class
//for select menu's options
  option = getchar();
		switch(option){
		    //book list- method
    case '1': BList();
        break;

        //add book - method
    case '2': Add();

        break;

        //delete book - method
    case '3': Delete(a,b);
        break;
        //exit program - method
    case '4': Stop();
        break;
		} //end switch
	}while(option!=4); // while option be different to 6 then do these actions

return EXIT_SUCCESS;

}
