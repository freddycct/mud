
int permit_recruit(object ob)
{
        if (ob->query("detach") || ob->query("betrayer"))
        {
                command("say 嘿嘿，朝三暮四之人一边玩去！");
                return 0;
        }

        if (ob->query("family/family_name")
           && ob->query("family/family_name") != "无门无派")
        {
                command("say 你既然已经有了名师指点，还来我着干什么？");
                return 0;
        }
        return 1;
}
