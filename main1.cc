#include <iostream>
#include <string>


class VowelLatin {
public:
  std::string translate(std::string word);
};

std::string VowelLatin::translate(std::string word)
{
  std::string consonant, vowels;

  for (char* p = (char*)word.c_str(); *p != '\0'; p ++)
    switch (*p) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': {
      vowels.push_back(*p);
      break;
    }
    default: {
      consonant.push_back(*p);
      break;
    }
    }

  return consonant + vowels;
}

int main(int argc, char** argv)
{
  while (1) {
    std::string word;
    
    std::cin >> word;

    if (! word.size())
      break;

    std::cout << VowelLatin().translate(word) << std::endl;
  }
}
