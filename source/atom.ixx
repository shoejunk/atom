export module stk.atom;

import std.core;

namespace stk
{
	export class c_atom
	{
	public:
    private:
        std::vector<c_atom*> children;
	};
}