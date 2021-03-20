#include <string>
#include <vector>

#ifndef LFSR_H__
#define LFSR_H__

class LFSR
{
private:
  std::string seed_;
  std::string generated_;
  std::vector<int> taps_;

public:
  LFSR(const std::string &seed = "1", std::vector<int> taps = {0});
  ~LFSR(void){};

  const std::string &to_string(void) const { return this->string; }
  const std::string &generated_secuence(void) const { return this->generated_; }
  int step(void);
  std::vector<int> generate(const int &length);

private:
  void step(const int &times);
};

#endif /* LFSR_H_ */