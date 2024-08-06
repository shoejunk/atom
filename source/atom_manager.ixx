export module stk.atom_manager;

import stk.atom;
import stk.hash;
import std.core;

namespace stk
{
	export class c_atom_manager
	{
	public:
    private:
		std::unordered_map<c_hash, c_atom*> m_bank;
	};
}