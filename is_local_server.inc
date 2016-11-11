function is_local_server()
{
        $ip_server = $_SERVER["HTTP_HOST"];
        $tab =explode (".",$ip_server);
        $ip1=$tab[0];
        settype ($ip1,integer);
        $ip2=$tab[1];
        settype ($ip2,integer);
        if ($ip1==10)
        {return("A");}
        if ($ip1==172)
        {if ($ip2>=16 && $ip2<=31 )
                        {return("B");}}
        if ($ip1==192 && $ip2==168)
        {return("C");}
 
        return "X";
}
