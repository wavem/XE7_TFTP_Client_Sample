//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvMemo.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTrivialFTP.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TAdvMemo *memo;
	TIdTrivialFTP *TFTP_Client;
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);

public: // START
	void __fastcall InitProgram();
    void __fastcall PrintMsg(UnicodeString _str);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
