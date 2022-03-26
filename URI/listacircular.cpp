class pessoa {
private:
	pont next;
	int key;
public:
	pessoa(int k);
	pont getNext();
	void setNext(pont n);
	int getKey();
	void setKey(int k);
};

pessoa::pessoa(int k) {
	next = NULL;
	key = k;
}

pont pessoa::getNext() {
	return next;
}

void pessoa::setNext(pont n) {
	next = n;
}

int pessoa::getKey() {
	return key;
}

void pessoa::setKey(int k) {
	key = k;
}

class circulo {
private:
	pont start, end;
	int s;
public:
	circulo(int tamanho);
	void matar(int n);
	int getS();
	int primeiro();

	};

circulo::circulo(int tamanho) {
	start = NULL;
	pont novo;
	s = tamanho;

	for (int i = s; i > 0; i--) {
		novo = new pessoa(i);
		if (i == s) {
			novo -> setNext(novo);
			start = novo;
			end = novo;
		}
		else {
			novo -> setNext(start);
			start = novo;
			end -> setNext(novo);
		}
	}
}

void circulo::matar(int n) {
	pont ante = start, atual;
	if (n == 1) {
		atual = ante;
		start = ante -> getNext();
		end -> setNext(start);
	}
	else {
		for (int i = 1; i < n-1; ++i)
			ante = ante -> getNext();
		end = ante;
		atual = ante -> getNext();
		start = atual -> getNext();
		ante -> setNext(atual -> getNext());
	}
	delete atual;
	s--;
}

int circulo::getS() {
	return s;
}

int circulo::primeiro() {
	pont atual = start;
	return atual -> getKey();
}

