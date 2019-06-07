#ifndef CONVERTERCHAINELEMENT_HPP
#define CONVERTERCHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>
#include <memory>

using namespace std;

class ConverterChainElement : public AbstractChainElement {
	private: 
	const string name = "ConverterChainElement";
	void internalProcessing(shared_ptr<MyDataObject> value) override;

	public:
	ConverterChainElement();
	virtual ~ConverterChainElement();
	string getName() override;
};

#endif