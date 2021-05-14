class TestSuite {
    public:
      TestSuite(const char* name) : name_(name) {}

      ~TestSuite() {}

    private:
      std::string name_;
};
