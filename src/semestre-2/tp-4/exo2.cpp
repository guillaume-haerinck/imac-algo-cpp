#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#include <stdio.h>

MainWindow* w = nullptr;
using std::size_t;
using std::string;

struct HuffmanNode : public Node
{
	HuffmanNode(char c='\0')
	{
		this->c = c;
		this->frequences = 0;
	}

	char c;
	uint frequences;
};

HuffmanNode* createNode(char c='\0')
{
	return new HuffmanNode(c);
}

void charFrequences(string data, Array& frequences)
{

}

void huffmanHeap(Array& frequences, HuffmanHeap& heap)
{

}

void huffmanDict(Array& heap, HuffmanNode*& dict)
{
	dict = new HuffmanNode();
}

string huffmanEncode(HuffmanNode* dict, string toEncode)
{
	return "";
}

string huffmanDecode(HuffmanNode* dict, string toDecode)
{
	return "";
}


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 50;
	w = new MainWindow();
	w->show();

	string data = "Ouesh, bien ou bien ? Ceci est une chaine de caractere sans grand"
				  "interet";
	Array& frequences = w->newArray(256);
	HuffmanHeap heap(256);
	HuffmanNode* dict;

	for (int i=0; i<frequences.size(); ++i)
		frequences[i] = 0;

	charFrequences(data, frequences);
	huffmanHeap(frequences, heap);
	huffmanDict(heap, dict);
	string encoded = huffmanEncode(dict, data);
	string decoded = huffmanDecode(dict, encoded);

	w->addBinaryNode(dict);
	printf("%s\n", encoded.c_str());
	printf("%s\n", decoded.c_str());

	return a.exec();
}
