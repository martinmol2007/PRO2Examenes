# Arbre binari amb totes les fulles iguals

Donat un arbre binari, les seves *fulles* són els subarbres que tenen
les dues branques `left` i `right` buides. A més, en aquest problema
considerarem exclusivament arbres binaris que no tenen subarbres amb
només una branca buida. És a dir, en aquest tipus d'arbres un subarbre
és: o bé una fulla, o bé les dues branques són subarbres no buits.

Implementa la funció `tree_all_leaves_equal`, que determina si, en un
arbre binari d'enters, totes les fulles tenen el mateix valor:

    /**
     * @brief Determina si totes les fulles d'un arbre tenen 
     *        el mateix valor.
     * 
     * @param  t  Un arbre binari d'enters
     * @returns  `true` si totes les fulles són iguals, 
     *           `false` altrament.
     *
     * @pre  En tots els subarbres de `t` es compleix: o bé són 
     *       fulles, o bé les dues branques són no buides.
     */
    bool tree_all_leaves_equal(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) contenen:

  --------------------- ----------------------------------------------------
  `main.cc`             el programa principal, amb la entrada/sortida feta
  `bintree.hh`          la classe `BinTree<T>`
  `bintree-io.hh`       l'entrada/sortida de `BinTree<T>`
  `bintree-inline.hh`   l'entrada/sortida \"inline\" de `BinTree<T>`
  `Makefile`            per compilar amb `make` còmodament
  `.vscode`             carpeta per compilar i debuggar amb VSCode
  --------------------- ----------------------------------------------------

Cal implementar `tree_all_leaves_equal` en un **fitxer `.cc` nou**,
compilar, i finalment **enviar només el fitxer amb la funció**.

## Entrada

L'entrada comença amb \"visual\" o \"inline\" per indicar el format dels
arbres d'entrada. Després ve una seqüència d'arbres en el format
indicat. (D'això s'encarrega el programa principal).

## Sortida

La sortida són els `string`s resultants de cridar la funció
`tree_all_leaves_equal`, un resultat per línia. (D'això també
s'encarrega el programa principal.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:56:35.671Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
