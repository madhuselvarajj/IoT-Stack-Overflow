class myClass 
{ 
public: 
   myClass(){
      mt = T();    // value initialize.
   }
private:
   struct T{
      int _intArray[10]; 
   } mt;
};

int main(){
   myClass m;
}
