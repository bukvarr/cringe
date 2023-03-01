#include <iostream>

class IceCream {
 public:
  std::string GetWeight() const {
    return flavour;
  }
  std::string GetShape() const {
    return shape;
  }
  virtual void SetFlavour();
  virtual void SetShape();

  std::string flavour;
  std::string shape;
};

class ClassicIceCream: public IceCream {
 public:
  void SetShape() override {
    shape = "waffle cone";
  }
  void SetFlavour() override {
    flavour = "vanilla";
  }
};

class ExtoticIceCream: public IceCream {
 public:
  void SetShape() override {
    shape = "eskimo";
  }
  void SetFlavour() override {
    flavour = "pineapple";
  }
};

 class IceCreamMaker: public IceCream {

 };

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
