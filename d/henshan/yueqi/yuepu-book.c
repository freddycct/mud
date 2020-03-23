#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIW "「古乐谱篇」" NOR, ({ "yuepu book", "yuepu", "book" }));
        set_weight(200);

	if (clonep())
		set_default_object(__FILE__);
	else {
                set("unit", "本");
                set("long", HIW "记载着古代乐谱的笔记，你闲着没事儿"
                            "可以看看(read)。\n" NOR);
                set("value", 50);
		set("material", "paper");
	}
	setup();
}

void init()
{
	add_action("do_read", "read");

}

int do_read(string arg)
{
        if (arg == "yuepu book" || arg == "yuepu" || arg == "book")
                return notify_fail(WHT "\n"
"---------------------------------------------------\n\n"
"		   中国古乐谱介绍\n\n"
"                       文王操\n\n"
"    汉初《韩诗外传》记孔子向师襄学奏此曲。琴曲中讲\n"
"述了周文王在渭水之滨访子牙的故事，后世传有《文王思\n"
"士》的曲目。存谱八至十段不等，见于《琴谱正传》等书。\n\n"
"                       大雅\n\n"
"    因《诗经》有《大雅》而传为周公所作。传谱九至十\n"
"二段不等。音乐变幻重叠，有“外调莫过斯曲之妙”之谓\n"
"《琴瑟合谱》。\n\n"
"                       关雎\n\n"
"    关雎为《诗经》第一篇，孔子称赞它“乐而不淫，哀\n"
"而不伤”。现存琴谱多为无词曲。\n\n"
"   		        鹿鸣\n\n"
"    鹿鸣为《诗经·小雅》首篇。原为周朝宴乐群臣嘉宾\n"
"所用。为汉代仅存雅歌四篇之一。蔡邕《琴赋》以及《琴\n"
"操》均有此曲目。据说，由汉未杜夔传至魏左延年，晋荀\n"
"勖用为行礼诗。唐韩愈：“举于其乡，歌‘鹿鸣’而来”\n"
"取自《送杨少尹序》。宋朱熹：此谱乃赵彦肃所传，即是\n"
"所谓开元遗声”。明张廷玉将此曲收人《理性元曲》，至\n"
"清朝仍有刊传。现存曲谱与历史记载有无联系，尚无定论。\n\n"
"                       湘妃怨\n\n"
"    琴歌。传说尧的两个女儿娥皇、女英嫁给舜。舜死后，\n"
"两人十分悲痛，后人据此作歌，表现对亲人的思念之意。\n\n"
"	                广陵散\n\n"
"    广陵散又名广陵止息。现存的琴谱最早见于《神奇秘\n"
"谱》，又见于《西麓堂琴谱》，各谱均有“取韩”，“投\n"
"剑”等分段标题，因此，近人认为它源于为《琴操》所载\n"
"的《聂政刺秦王曲》。传说晋嵇康由于不满司马氏专政而\n"
"遭杀害，临刑前从容弹奏此曲，曲罢长叹：“广陵散从此\n"
"绝矣！”后由有心人记谱而流传至今。于是，广陵散因嵇\n"
"康而闻名于世。明宋濂跋《太古遗音》则谓“其声忿怒噪\n"
"急，不可为训”。现存曲谱共四十五段。\n\n"
"		       高山流水\n\n"
"    内容根据《吕氏春秋》中伯牙在鼓琴的故事。伯牙在\n"
"琴中先表现高山，又表现流水，他的知音好友钟子期都能\n"
"深刻领会。表明音乐可以独立进行艺术创造，不必借助文\n"
"词。人们常以此为例，说明琴曲很早就可以独奏。现存曲\n"
"谱初见于《神奇秘谱》。该书解题中说：“ 《高山流水》\n"
"本只一曲，至唐分为二曲，不分段数。宋代分《高山》四\n"
"段，《流水》八段”。《神奇秘谱》所收为不分段的，后\n"
"世流传的多为分段 。清代川派琴家张孔山弹奏的《流水》\n"
"增强了许多滚拂手法，借以增强水势湍急、波涛汹涌的艺\n"
"术效果，号称《七十二滚拂流水》或《大流水》，是近代\n"
"流传最广的曲目之一。近人管平湖弹奏此曲甚得好评，灌\n"
"有唱片（中国3--3122甲、乙及M-248）。另有浙江、河南\n"
"两地同名筝曲流传。\n\n"
"                       酒狂\n\n"
"    曲谱初见于《神奇秘谱》。魏晋竹林七贤之一阮籍由\n"
"于“叹道之不行”，“托兴于酗酒”所作。乐曲素材简炼，\n"
"描绘醉酒佯狂步履颠踬的神态。\n\n"
"---------------------------------------------------\n\n"
"\n\n" NOR);
}
