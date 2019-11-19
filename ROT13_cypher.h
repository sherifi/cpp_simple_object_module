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
#include <cctype>
#include <iostream>
#include <string>
#ifndef ROT13_cypher
#define ROT13_cypher
namespace ROT13
{
	template<typename T>
	class Rot13
	{
	private:
		T source_1;
	protected:
	public:
		Rot13();
		Rot13(T);
		T rot13() {};
	};
};
#endif // !ROT13_cypher
