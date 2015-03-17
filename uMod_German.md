# Universal Modding Engine (uMod) #



# Wichtige Hinweise #

Warnung: uMod **analysiert oder ändert nicht** den Code oder Daten des Spiels (mit drei Ausnahmen: 1) Hash bilden von Texturen 2) Speichern von Texturen und 3) die zweite dll-injection Methode schreibt Daten in die dll-Ladesequenz des Spiels). In uMod wird nur Code verwendet, welcher in ähnlicher Weise von offiziellen Microsoft Webseiten herunter geladen werden kann (mit Ausnahme der 2. dll-injection Methode). **ABER** es kann sein, dass uMod nicht kompatibel zur **EULA** einiger Spiel ist!

uMod braucht die **D3DX9\_43.dll (32bit)**. Diese dll ist nicht im uMod Paket enthalten. Wenn diese dll nicht auf deinem Computer installiert is, wird dich uMod darauf hinweisen. Du kannst diese dll im Internet runter laden oder die neuste [DirectX Enduser Runtime](http://www.microsoft.com/download/en/details.aspx?displaylang=en&id=35) installieren.



# Erster Schritt: Spiel starten #

Stelle erst einmal die Sprache auf Deutsch (Bild 1 Punkt 5).

![https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358404346/home/main_german.jpg](https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358404346/home/main_german.jpg)

Es gibt drei Möglichkeiten wie man uMod mit einem Spiel zum Laufen bekommt. Nicht jede Methode wird mit jedem Spiel unter jeder Windows Version funktionieren. Probiere also aus, welche Methode funktioniert und welche dir am besten gefällt. Aber verwende niemals mehr als eine Methode gleichzeitig für das selbe Spiel. Für verschieden Spiele kannst du natürlich verschiedene Methoden (auch gleichzeitig) nutzen.

Wenn du das Spiel gestartet hast, wird sich ein neuer Tab in uMod öffnen. In diesem Tab kannst du nun Mods laden, aktivieren, deaktivieren oder entfernen und Texturen aus dem Spiel speichern.

## Methode 1 ##
Die globale Hook ist die komfortabelste Methode. (_Es kann sein, dass diese Methode für manche Spiele unter WinXP nicht funktioniert, das Tab öffnet sich zwar, aber das Spiel lässt sich nicht modifizieren._)

  1. Starte uMod.
    1. Füge das Spiel einmal zu uMod hinzu (Bild 1 Punkt. 3).
    1. Aktiviere die Hook (Bild 1 Punkt 4).
  1. Starte das Spiel (z. B. durch Doppelklick auf ein Desktop Icon).

## Methode 2 ##

Das Spiel wird durch uMod gestartet.

  1. Starte uMod.
  1. Starte das Spiel durch das Menü,
    1. standardmäßig über (Bild 1 Punkt 1)
    1. oder mit Kommandozeilen-Parameter, die du an das Spiel übergeben kannst  (Bild 1 Punkt 2).

## Methode 3 ##

Das Spiel lädt die dll selber.

  1. Kopiere die mitgelieferte d3d9.dll in das Spiele-Verzeichnis.
  1. Starte uMod.
  1. Starte das Spiel (z. B. durch Doppelklick auf ein Desktop Icon) .



# Zweiter Schritt: Spiel modifizieren #

![https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358412717/home/modding_german.jpg](https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358412717/home/modding_german.jpg)

## Speichern von Texturen ##

Siehe rotes Rechteck im Bild 2.

Du kannst dir aussuchen ob uMod alle Texturen speichern soll oder ob du die Texturen aussuchen willst, die gespeichert werden sollen. Du musst einen Speicherpfad setzten (Bild 2 Punkt 2). Wenn du einzelne Texturen speichern willst muss du noch 3 Tasten über die 3 DropDown Menüs festlegen. Danach drücke den "Update" Knopf (Bild 2 Punkt 3).

Wenn du einzelne Texturen Speichern willst, kannst du mit den von dir ausgesuchten Vor- und Zurück-Tasten die Texturen auswählen. Die ausgewählte Textur wird grün (Standardeinstellung). Mit der Speicher-Taste speicherst du die angewählte Textur. Wenn du einen Mod geladen hast, kannst du gemoddete Texturen nicht auswählen.

Wen du "Speicher alle Texturen" aktiviert hast, speichert uMod alle Texturen, die vom Spiel geladen werden. Dies geschieht in diesem Moment (und ausschließlich in diesem Moment), wenn das Spiel die Textur lädt. Du solltest dies Option also anschalten bevor du eine Karte betrittst oder die Karte neu Laden. Du kannst diese Option auch aktivieren, deine Einstellungen als Template speichern, dieses Template als Standard wählen und anschließend das Spiel neu starten. Dadurch werden auch die aller ersten Texturen des Spiels gespeichert

Wenn du die Texturen editierst, kannst du sie einzeln zu uMod hinzufüge und während des Editierrens immer wieder in das Spiel hinein laden (Bild 2 Punkt 4), um die Änderungen direkt im Spiel verfolgen zu können.

Du kannst alle deine veränderten Texturen in einer Zip-Datei speichern und auch ein "Comment.txt" hinzufügen. In der "Comment.txt" kannst du Kommentare speichern, die in uMod angezeigt werden.

## Benutzen von Mods ##

Siehe grünes Rechteck im Bild 2.

Um Mods zu nutzen drücke den Knopf (Bild 2 Punk 1). Du kannst:

  1. einzelne Texturen(`*.dds`),
  1. Zip-Datein oder
  1. die originalen TexMod (`*.tpf`) Mods laden.

Für jede Textur oder Mod-Paket, dass du zu uMod hinzufügst, wird ein neuer Eintrag in der Liste hinzugefügt. Ist der Haken im Kästchen vor dem Dateinamen gesetzt, so ist der Mod aktiv, andernfalls ist er deaktiviert. Drücke "Update" (Bild 2 Punkt 3), um die Änderungen im Spiel zu sehen. Durch Drücken von "Update (neu laden)" (Bild 2 Punkt 4) zwingst du uMod die Texturen von der Festplatte neu zu laden. Dies ist nur interessant, wenn du die Texturen gerade editierst.

Sollten mehrere Mods die gleiche Textur verändern wollen, so wird nur der erste Mod in der Liste (der diese Textur verändern will) berücksichtigt. Wenn der erste Mod deaktiviert ist, dann wird diese Textur auch nicht gemoddet! Durch die Pfeiltasten kannst du die Reihenfolge der Mods verändern.

## Templates ##

Du kannst alle deine Einstellungen in dem Tab in einem Template speichern. Für jedes Spiel kann ein Template als Standard eingestellt werden. Wenn das Spiel gestartet wird, wird dieses Template geladen und alle Einstellungen und Mods werden an das Spiel automatisch gesendet.