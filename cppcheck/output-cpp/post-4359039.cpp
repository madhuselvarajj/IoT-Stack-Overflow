class myClass
{
  public: 
    MyClass(int size);
    ~MyClass();
  private:
    int* _intArray;
};

MyClass::MyClass(int size) {
  _intArray = new int[size];
  for (int i=0; i<size; ++i) _intArray[i] =0; // or use memset ...
}

MyClass::~MyClass() {
  delete[] _intArray;
}
