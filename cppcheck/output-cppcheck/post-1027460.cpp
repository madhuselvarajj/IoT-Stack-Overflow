class TestSuite {
public:
  TestSuite(const std::string &name):name_(name) {
  }

  ~TestSuite() {
  }

private:
  std::string name_;
};
