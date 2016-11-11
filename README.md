# A quoi ça sert :
Script php pour déterminer si une page web est appelée à partir d'un réseau d'IP publique ou privée.
Exemple, une page Web hébergée sur un petit réseau local permet d'accèder à une série de webcams, pour obtenir des liens corrects vers la gestion de ces appareils, il faut savoir si la page est appelée depuis le réseau privé ou à partir de l'extérieur avec une adresse dyndns.

# Comment ça fonctionne :
Fonction ````is_local_server```` qui retourne la classe IP du réseau IP privée, A, B ou C sinon X pour un réseau public.

