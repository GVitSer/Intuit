//---------------------------------------------------------------------------

#ifndef VHelpUnitH
#define VHelpUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFormVHelp : public TForm
{
__published:	// IDE-managed Components
        TRichEdit *RichEdit1;
private:	// User declarations
public:		// User declarations
        __fastcall TFormVHelp(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormVHelp *FormVHelp;
//---------------------------------------------------------------------------
#endif
