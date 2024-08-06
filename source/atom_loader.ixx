export module stk.atom_loader;

import stk.atom;
import <nlohmann/json.hpp>;

namespace stk
{
	export class c_atom_loader : public c_atom
	{
	public:
		c_atom* load(nlohmann::json& json)
		{

		}
	};
}