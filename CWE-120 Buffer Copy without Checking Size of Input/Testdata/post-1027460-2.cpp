class TestSuite {
public:
  TestSuite(const char *name){
    memcpy(name_, name, min(16, strlen(name));
  }

private:
  char name_[16];
};
