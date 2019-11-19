/*
 *copyright (C) 2019 SHERIFI.
 *
 *permission is hereby granted, free of charge, to any person obtaining a copy
 *of this software and association document files (the "Software"), to deal
 *in the software without restriction, including without limitation the rights
 *to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *copies of the software, and to permit persons to whom the software is
 *furnished to do so, subject to the following conditions:
 *
 *the above copyright notice and this permission notice shall be included in
 *all copies or substantial portions of the software.
 *
 *THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *FITNESS FOR PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *SOFTWARE.
 */
#include "ROT13_cypher.h"
//#include <cctype>
//#include <iostream>
//#include <string>
#ifdef ROT13_cypher
#undef main
int main(int argc, char* argv[], char** envp)
{
	ROT13::Rot13<std::string> r1;
	std::string result = r1.rot13();
	ROT13::Rot13<std::string> r2("13");
	std::string result = r2.rot13();
	std::cout << result << std::endl;
}
#endif // ROT13_cypher
