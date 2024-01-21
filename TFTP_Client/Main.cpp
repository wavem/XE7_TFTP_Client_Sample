//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvMemo"
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
	InitProgram();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::InitProgram() {

	PrintMsg(L"TFTP Client Init Complete");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PrintMsg(UnicodeString _str) {
	int t_Idx = memo->Lines->Add(_str);
    memo->SetCursor(0, t_Idx);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btn_ConnectClick(TObject *Sender)
{
	TFTP_Client->Active = true;
    TFTP_Client->Connect();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::TFTP_ClientStatus(TObject *ASender, const TIdStatus AStatus,
          const UnicodeString AStatusText)
{
	UnicodeString tempStr = L"";
    tempStr = L"[STATUS] : ";
    tempStr += AStatusText;
    PrintMsg(tempStr);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::TFTP_ClientConnected(TObject *Sender)
{
	PrintMsg(L"On Connected");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::TFTP_ClientDisconnected(TObject *Sender)
{
	PrintMsg(L"On Disconnected");
}
//---------------------------------------------------------------------------

