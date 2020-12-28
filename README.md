# Informática Básica Lab assignment 

This is a repository to host the code of your lab assignments
Create an appropriate directory structure to hold your project
If your assignment includes different exercises, use different directories for each

**Before** the evaluation session of the assignment, **do not forget** to upload the (git) link to your repository to the lab assignment (aula virtual)lab assignment (aula virtual)
**Remember also** to remove all empty directories in the final version of the project

This text is Markdown text. To learn about Markdown, Study these references:
* [Mastering Markdown](https://guides.github.com/features/mastering-markdown/)
* [StackEdit. An On-line MarkDown Editor](https://stackedit.io/)
* [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)

#include <iostream>

class Complejo{
 private:
  int real_;
  int im_;
 public:
  Complejo() = default;
  Complejo(int x): real_{x} {}
  Complejo(int x,int y): real_{x} , im_{y} {}
  friend Complejo Add(Complejo a,Complejo b);
  friend Complejo Subs(Complejo a,Complejo b);
  void Print(){
    std::cout<<real_<<" "<<im_<<"i"<<std::endl;
  }
};

Complejo Add(Complejo a,Complejo b){
  Complejo c{a.real_+b.real_,a.im_+b.im_};
  return c;
}

Complejo Subs(Complejo a,Complejo b){
  Complejo c{a.real_-b.real_,a.im_-b.im_};
  return c;
}

int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = Add(complejo1, complejo2);
  resultado.Print();
  resultado = Subs(complejo1, complejo2);
  resultado.Print();
  return 0;
}
