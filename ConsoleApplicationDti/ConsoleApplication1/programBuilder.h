#ifndef ProgramBuilder_H
#define ProgramBuilder_H
class ProgramBuilder {

public:

	ProgramBuilder();

	void startProgram();

	void userOptionHandler(int userOption);


	ClientView clientInterface;
	list<Client> clientList;

private:

	int userOption;

};
#endif