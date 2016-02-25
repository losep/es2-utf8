// whip.c

#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name( "拂柳鞭" , ({ "whip" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "条");
		set("value", 3000);
		set("material", "leather");
		set("rigidity", 30);
		set("wield_msg", "$N从腰间解下一条$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n缠回腰间。\n");
	}
	init_whip(23);
	setup();
}