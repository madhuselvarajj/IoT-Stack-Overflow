class myClass
{
public:
    MyClass( int size )
        : intArray_( size )    // Vector of given size with zero-valued elements.
    {}

private:
    std::vector<int> intArray_;
};
