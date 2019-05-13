#include "lib/TP4.h"

#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#include <stdio.h>

_TestMainWindow* w = nullptr;
using std::size_t;
using std::string;

void HuffmanHeap::insertHeapNode(int heapSize, char c, int frequences)
{

}

void HuffmanNode::insertNode(HuffmanNode* node) {

}

void HuffmanNode::processCodes(std::string baseCode)
{

}

void charFrequences(string data, Array& frequences)
{

}

void huffmanHeap(Array& frequences, HuffmanHeap& heap)
{

}

void huffmanDict(HuffmanHeap& heap, HuffmanNode*& dict)
{
	dict = new HuffmanNode('\0', heap[0].value + heap[1].value);
	dict->left = &heap[0];
	dict->right = &heap[1];


}

string huffmanEncode(HuffmanNode** characters, string toEncode)
{
	string encoded= "";

	return encoded;
}

string huffmanDecode(HuffmanNode* dict, string toDecode)
{
	string decoded= "";

	return decoded;
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 30;
	NumberGraphicsItem::baseColor = QColor(240,255,245);
	w = new HeapTestMainWindow();

	string data = "Ouesh, bien ou bien ? Ceci est une chaine de caractere sans grand"
				  " interet";

	Array& frequences = w->newArray(256);
	HuffmanHeap heap(256);
	HuffmanNode* dict;

	for (int i=0; i<frequences.size(); ++i)
		frequences.__set__(i, 0);

	charFrequences(data, frequences);
	huffmanHeap(frequences, heap);
	huffmanDict(heap, dict);
	dict->processCodes("");

	HuffmanNode* characters[256];
	memset(characters, 0, 256 * sizeof (HuffmanNode*));
	dict->fillCharactersArray(characters);

	string encoded = huffmanEncode(characters, data);
	string decoded = huffmanDecode(dict, encoded);

	w->updateScene();
	w->addBinaryNode(dict);
	qDebug("Encoded: %s\n", encoded.c_str());
	qDebug("Decoded: %s\n", decoded.c_str());

	w->show();
	return a.exec();
}
