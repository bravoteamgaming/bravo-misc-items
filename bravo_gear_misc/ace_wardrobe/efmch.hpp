class bravo_mch_plain_oli : bravo_wardrobe_helmet_plain
{
	class modifiableTo
	{
		class bravo_mch_plain_oli_medic
		{};
	};
};
class bravo_mch_plain_oli_medic : bravo_wardrobe_helmet_medic
{
	class modifiableTo
	{
		class bravo_mch_plain_oli
		{};
	};
};

class ef_h_mch : bravo_wardrobe_helmet_plain
{
	class modifiableTo
	{
		class bravo_mch_plain_des_medic
		{};
	};
};
class bravo_mch_plain_des_medic : bravo_wardrobe_helmet_medic
{
	class modifiableTo
	{
		class ef_h_mch
		{};
	};
};

class ef_h_mch_basic : bravo_wardrobe_helmet_plain
{
	class modifiableTo
	{
		class bravo_mch_basic_des_medic
		{};
	};
};
class bravo_mch_basic_des_medic : bravo_wardrobe_helmet_medic
{
	class modifiableTo
	{
		class ef_h_mch_basic
		{};
	};
};

class bravo_mch_basic_oli : bravo_wardrobe_helmet_plain
{
	class modifiableTo
	{
		class bravo_mch_basic_oli_medic
		{};
	};
};
class bravo_mch_basic_oli_medic : bravo_wardrobe_helmet_medic
{
	class modifiableTo
	{
		class bravo_mch_basic_oli
		{};
	};
};