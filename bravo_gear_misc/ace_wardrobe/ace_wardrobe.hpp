class ace_wardrobe
{
	class ace_wardrobe_base;
	class ace_wardrobe_base_u_sleeves_down;
	class ace_wardrobe_base_u_sleeves_up;
	class ace_wardrobe_base_U_gloves_on;
	class bravo_wardrobe_helmet_redteam : ace_wardrobe_base
	{
		displayName = "Switch to Red Team";
		gesture = "gestureNod";
	};
	class bravo_wardrobe_helmet_blueteam : ace_wardrobe_base
	{
		displayName = "Switch to Blue Team";
		gesture = "gestureNod";
	};
	class bravo_wardrobe_helmet_plain : ace_wardrobe_base
	{
		displayName = "Switch to Unmarked";
		gesture = "gestureNod";
	};
	class bravo_wardrobe_helmet_medic : ace_wardrobe_base
	{
		displayName = "Switch to Medic";
		gesture = "gestureNod";
	};
	
	#include "combatuniform.hpp"
	
	#include "combatsuit.hpp"
	
	#include "fast.hpp"
	
	#include "operator.hpp"
	
	#include "bdu.hpp"
	
	#include "efmch.hpp"
	
	#include "mich2000.hpp"
	
	#include "natofatigues.hpp"
	
	#include "fsuutv.hpp"
};