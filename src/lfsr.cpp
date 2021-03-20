#include "../include/lfsr.h"
LFSR::LFSR(const std::string &seed, std::vector<int> taps)
    : seed_(seed),
      taps_(taps),
      generated_("")
{
}
std::vector<int> LFSR::generate(const int &length)
{
  std::vector<int> result;
  for (int i = 0; i < length; ++i)
    result.push_back(step());

  return result;
}

int LFSR::step(void)
{

  std::vector<int> values;
  for (auto tap : this->taps_)
  {
    values.push_back(static_cast<int>(this->seed_[tap]))
  };
}