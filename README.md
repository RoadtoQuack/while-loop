# while-loop
Der Editor vim und der Compiler clang-12 wird verwendet.

Mit der Funktion fgetc wird ein Zeichen aus der geöffneten Datei gelesen und dem Integer "zeichen" zugewiesen. Dann wird verglichen ob der Zeichenwert ungleich dem Ende der Datei (EOF) entspricht. Ist dies der Fall, dann wird Mithilfe von printf das gelesene Zeichen ausgegeben. Die while-Schleife wird solange wiederholt, bis das EOF (End of File) erreicht ist.

Damit lässt sich der gesamte Inhalt einer Datei zeichenweise verarbeiten und anzeigen.

Bei fgets werden Zeilenumbrüche eingelesen und beibehalten. Der Puffer sollte groß genug definiert werden. Wenn das Array zu klein definiert wurde, werden nur die ersten x Zeichen berücksichtigt. 
