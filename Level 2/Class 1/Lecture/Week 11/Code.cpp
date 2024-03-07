#include <iostream>

using namespace std;


   /// vector

template <class T> class Vector
{


    int size,ccount;
    T*arr;

   public:
    Vector(){
    size=5;
    arr=new T[size];
    ccount=0;
    }

    ~Vector (void) {

    delete[] arr;

    }

    int Length(){
     return ccount;
   }

   void Append(T val){

     if(ccount==size){

      Expand();

     }

     arr[ccount]=val;
     ccount++;
   }

   T At(int pos){

     if(pos>=ccount){
       throw invalid_argument("pos should be >= 0 and < count");
     }

     return arr[pos];
   }

   void deleteAt(int pos){

     if(pos>=ccount){

           throw invalid_argument("pos should be >= 0 and < count");
     }



     //shift elements to the left
   /*  0 1 2 3 4 5
     0 1 2 4 4 5
     0 1 2 4 5 5

     0 1 2 4 5*/
     for(int i=pos;i<ccount-1;i++)
      arr[i]=arr[i+1];

     ccount--;

    }

    void insertAt(int pos, T val){

     if(pos>=ccount){

           throw invalid_argument("pos should be >= 0 and < count");

     }



     if(ccount==size)
      Expand();



     //shift elements to the right
     /*0 1 2 4 5 5
     0 1 2 3 4 5*/


     for(int i=ccount;i>pos; i--){
       arr[i]=arr[i-1];
     }

     //insert value at required position

     arr[pos]=val;
     ccount++;
    }



    void clear(){

      delete[] arr;

     size=5;

     arr=new T[size];

     ccount=0;

    }

    void Expand(){

     size*=2; //define new capacity

     T* tmp=new T[size];



     for(int i=0; i<ccount;i++){
      tmp[i]=arr[i];
     }



     delete [] arr; //releas e old space

     arr=tmp;

   }
};





/// linked lists


template <class T> class Node {

     public:

     T value;

     Node<T> * next;



     Node(){

         value=0;

         next=nullptr;

     }

     Node(T val){

         value=val;

         next=nullptr;

      }

};



template <class T> class LinkedList{



int count;
Node<T> *head,*tail;

public:
LinkedList(){

head=tail=nullptr;

count=0;

}
~LinkedList()
{
   clear();
}

int Length(){
   return count;
}



void Append(T val){
Node<T>* newNode=new Node<T>(val);

if(count==0)

     head=tail=newNode;

else
{
tail ->next=newNode;
tail=newNode;
}

count++;

}




T At(int pos){



if(pos<0 || pos>=count){
throw invalid_argument("pos should be >=0 and < count");
}



Node<T>* tmp=head;



for(int i=0;i<pos;i++)
tmp=tmp->next;



return tmp->value;

}

void DeleteAt(int pos)

{

     if(pos<0 || pos>=count){

         throw invalid_argument("pos should be >=0 and < count");

     }

     Node<T>* tmp=head;

     if(pos==0)

     {

          head=head->next;

          delete tmp;

     }

     else

     {

          for(int i=0; i<pos-1; i++)

             tmp=tmp->next;

          Node<T>* del=tmp->next;

          tmp-> next=del->next;

          delete del;

          if(pos==count-1)

              tail=tmp;

     }

     count--;

}




void InsertAt(int pos,T val)

{

    if(pos<0 || pos>=count){

        throw invalid_argument("pos should be >=0 and < count");
    }



    Node<T>* tmp=head;

    Node<T>* newNode=new Node<T>(val);

    if(pos==0)
    {

       newNode->next=head;

       head=newNode;

    }

    else

    {

       for(int i=0;i<pos-1;i++)

           tmp=tmp->next;



       newNode ->next=tmp->next;

       tmp->next=newNode;

    }

count++;

}

void clear()

{

     if (count==0)

           return;

     Node<T>* tmp=head->next;

     while(tmp->next != 0)

     {

           delete head;

           head = tmp;

           tmp = tmp->next;

     }

     delete head;

     head = tail = 0;

     count=0;

}
};






/*
void fun2()
{
    int x=20;
    cout<<20;
}*/
/*
void fun1()
{

    int z=10;
    cout<<z;
    fun1();
}*/



/*
struct Person {

     string name;

     int age;

     string address;

 };*/



/*
class BankAccount {

     private:

        double balance;
        string accountNumber;



    public:

        BankAccount(double initialBalance, string number) {

            balance = initialBalance;

            accountNumber = number;

         }

         void deposit(double amount) {

             balance += amount;

         }

         void withdraw(double amount) {

             balance -= amount;

         }

        double getBalance() {

             return balance;

         }

};

double add(double x) {

     return x ;

 }

 double add(double x, double y) {

     return x + y;

 }
*/

/*

template <typename T>

class Point {

public:



    T xAxis, yAxis;



    Point(T x, T y) {

      xAxis=x;

      yAxis=y;

    }

 };*/

int main()
{
    LinkedList<int> L;
    L.Append(5);
    L.Append(10);
    //cout<<L.Length();
    //cout<<L.At(1);
    L.DeleteAt(1);
    L.InsertAt(0,50);
   // cout<<L.At(1);
    L.clear();
    cout<<L.Length();


    /*Vector<int> v;
    v.Append(5);
    v.Append(6);
    v.Append(10);
    v.deleteAt(1);
    v.insertAt(1,100);
    v.clear();*/



    //cout<<add(3,2);


   /* Point<double> p(1.5,3.5);

    cout<<p.xAxis<<" "<<p.yAxis;*/

   /* cout<<add(5);
    cout<<add(5.5,5.5);*/

    /*BankAccount p1(700,"123");
    p1.withdraw(100);
    p1.deposit(1000);
    cout<<p1.getBalance();
*/
  /*  Vector<int> v;
    v.Append(5);
    v.Append(6);
    v.Append(7);

    cout<<(v.At(1));*/

  /*  int x=5;
    cout<<x;
    fun1();
    int a[1000];

    vector<int> v;*/


/*
   int *ptr2=new int;
   *ptr2=5;
   *ptr2+=2;
   int z=*ptr2+9;
   cout<<*ptr2<<"\n";
   delete ptr2;
   *ptr2=0;
   int x=*ptr2
   cout<<*ptr2;*/


  /* Person p1,p2;

    p1. name = "Alice";

    p1.age = 25;

    p1.address = "123 Main St";

    p2. name = "BOB";

    p2.age = 20;

    p2.address = "125 Main St";

    cout << p1.name << " is " << p1.age << "years old and lives at" << p1.address <<endl;
    cout << p2.name << " is " << p2.age << "years old and lives at" << p2.address <<endl;

*/



       /*  int * arr = new int[5];
         delete [] arr;
         *arr=5;

         cout<<*arr;*/
         //arr = new int[2];






return 0;

}
