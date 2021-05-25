class myCLass {
public:
    myClass(int size)
        : intarray(size) {
    for(int i = 0; i < size; i++) intarray[i] = 0;
    }
private:
    std::vector<int> intarray;
};
