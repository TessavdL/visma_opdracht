# visma_opdracht

De programeeropdracht interest_calculations kan gecompiled worden met de Makefile.<br>
<code>make</code> - compiled de .cpp files en maakt een executable die interest heet

Nadat de executable interest is gemaakt kan hij worden uitgevoerd.<br>
<code>make run</code> - voert ./interest uit<br>
<code>make test</code> - voert ./interest uit met tests<br>
  
Mocht de Makefile niet werken dan kan het ook compiled worden met<br>
<code>c++ -Wall -Wextra -Werror *.cpp -o interest</code><br>
en uitgevoerd worden met<br>
<code>./interest</code><br>
en uitgevoerd worden met tests<br>
<code>./interest input.txt</code>
