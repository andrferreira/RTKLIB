//---------------------------------------------------------------------------
#ifndef navioptH
#define navioptH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <FileCtrl.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TOptDialog : public TForm
{
__published:
	TButton *BtnCancel;
	TButton *BtnOk;
	TOpenDialog *OpenDialog;
	TButton *BtnSave;
	TButton *BtnLoad;
	TSaveDialog *SaveDialog;
	TPageControl *Options;
	TTabSheet *TabSheet1;
	TLabel *Label3;
	TLabel *Label9;
	TLabel *Label8;
	TLabel *LabelPosMode;
	TLabel *LabelFreq;
	TLabel *LabelElMask;
	TLabel *Label32;
	TLabel *Label35;
	TComboBox *DynamicModel;
	TComboBox *IonoOpt;
	TComboBox *TropOpt;
	TComboBox *PosMode;
	TComboBox *Freq;
	TComboBox *Solution;
	TComboBox *SatEphem;
	TEdit *ExSatsE;
	TTabSheet *TabSheet2;
	TLabel *Label25;
	TLabel *Label24;
	TLabel *Label13;
	TLabel *LabelHold;
	TLabel *Label22;
	TLabel *Label14;
	TLabel *Label11;
	TLabel *Label37;
	TComboBox *AmbRes;
	TEdit *ValidThresAR;
	TEdit *LockCntFixAmb;
	TEdit *OutCntResetAmb;
	TEdit *ElMaskAR;
	TEdit *SlipThres;
	TEdit *MaxAgeDiff;
	TEdit *RejectThres;
	TEdit *NumIter;
	TTabSheet *TabSheet3;
	TLabel *LabelSolFormat;
	TLabel *LabelTimeFormat;
	TLabel *LabelLatLonFormat;
	TLabel *LabelFieldSep;
	TLabel *Label2;
	TLabel *Label18;
	TLabel *Label20;
	TLabel *Label36;
	TComboBox *SolFormat;
	TComboBox *TimeFormat;
	TComboBox *LatLonFormat;
	TEdit *FieldSep;
	TComboBox *OutputDatum;
	TComboBox *OutputHeight;
	TComboBox *OutputGeoid;
	TComboBox *OutputHead;
	TComboBox *OutputOpt;
	TComboBox *DebugTrace;
	TTabSheet *TabSheet4;
	TLabel *Label29;
	TGroupBox *GroupBox3;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label16;
	TEdit *MeasErrR1;
	TEdit *MeasErr2;
	TEdit *MeasErr3;
	TEdit *MeasErr4;
	TGroupBox *GroupBox4;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TEdit *PrNoise1;
	TEdit *PrNoise2;
	TEdit *PrNoise3;
	TEdit *SatClkStab;
	TTabSheet *TabSheet5;
	TLabel *Label4;
	TGroupBox *GroupRovAnt;
	TLabel *LabelRovAntD;
	TEdit *RovAntE;
	TEdit *RovAntN;
	TEdit *RovAntU;
	TEdit *RovPos1;
	TEdit *RovPos2;
	TEdit *RovPos3;
	TButton *BtnRovPos;
	TCheckBox *RovAntPcv;
	TComboBox *RovAnt;
	TComboBox *RovPosTypeP;
	TGroupBox *GroupRefAnt;
	TLabel *LabelRefAntD;
	TEdit *RefAntE;
	TEdit *RefAntN;
	TEdit *RefAntU;
	TEdit *RefPos1;
	TEdit *RefPos2;
	TEdit *RefPos3;
	TButton *BtnRefPos;
	TCheckBox *RefAntPcv;
	TComboBox *RefAnt;
	TComboBox *RefPosTypeP;
	TTabSheet *TabSheet7;
	TLabel *Label1;
	TSpeedButton *BtnAntPcvView;
	TLabel *Label38;
	TSpeedButton *BtnSatPcvView;
	TEdit *AntPcvFile;
	TButton *BtnAntPcvFile;
	TButton *BtnDCBFile;
	TEdit *DCBFile;
	TEdit *SatPcvFile;
	TButton *BtnSatPcvFile;
	TTabSheet *TabSheet8;
	TLabel *Label19;
	TEdit *SvrCycleE;
	TEdit *SvrBuffSizeE;
	TLabel *Label40;
	TButton *BtnFont;
	TLabel *FontLabel;
	TFontDialog *FontDialog;
	TLabel *Label41;
	TEdit *SolBuffSizeE;
	TLabel *Label42;
	TComboBox *NavSelectS;
	TEdit *SbasSatE;
	TLabel *Label5;
	TEdit *SavedSolE;
	TEdit *NmeaCycleE;
	TCheckBox *NavSys2;
	TCheckBox *NavSys3;
	TCheckBox *NavSys4;
	TCheckBox *NavSys1;
	TLabel *Label46;
	TLabel *Label44;
	TEdit *TimeoutTimeE;
	TEdit *ReconTimeE;
	TCheckBox *NavSys5;
	TComboBox *GloAmbRes;
	TCheckBox *BaselineConst;
	TEdit *BaselineLen;
	TEdit *BaselineSig;
	TEdit *TimeDecimal;
	TComboBox *DebugStatus;
	TLabel *Label10;
	TEdit *MeasErr5;
	TLabel *Label33;
	TEdit *PrNoise4;
	TEdit *PrNoise5;
	TLabel *Label47;
	TLabel *Label48;
	TEdit *GeoidDataFile;
	TButton *BtnGeoidDataFile;
	TLabel *Label17;
	TEdit *NmeaIntv1;
	TEdit *NmeaIntv2;
	TLabel *Label31;
	TEdit *LocalDir;
	TButton *BtnLocalDir;
	TComboBox *TideCorr;
	TEdit *FixCntHoldAmb;
	TEdit *MoniPortE;
	TCheckBox *NavSys6;
	TSpeedButton *BtnDCBView;
	TLabel *Label21;
	TComboBox *SolStatic;
	TEdit *StaPosFile;
	TLabel *Label30;
	TSpeedButton *BtnStaPosView;
	TButton *BtnStaPosFile;
	TLabel *Label34;
	TEdit *OLFile;
	TSpeedButton *BtnOLFileView;
	TButton *BtnOLFile;
	TEdit *MeasErrR2;
	TEdit *ElMaskHold;
	TEdit *FileSwapMarginE;
	TEdit *RejectGdop;
	TLabel *Label45;
	TEdit *ProxyAddrE;
	TLabel *Label23;
	TEdit *EOPFile;
	TButton *BtnEOPFile;
	TSpeedButton *BtnEOPView;
	TComboBox *ElMask;
	TEdit *ThresAR2;
	TEdit *ThresAR3;
	TLabel *Label12;
	TCheckBox *PosOpt1;
	TCheckBox *PosOpt2;
	TCheckBox *PosOpt3;
	TCheckBox *PosOpt4;
	TEdit *TLEFile;
	TLabel *Label15;
	TButton *BtnTLEFile;
	TLabel *Label39;
	TEdit *TLESatFile;
	TButton *BtnTLESatFile;
	TCheckBox *PosOpt5;
	TButton *BtnSnrMask;
	TComboBox *SyncSol;
	TLabel *Label43;
	TComboBox *PanelStackE;
	TComboBox *BdsAmbRes;
	TCheckBox *PosOpt6;
	TEdit *ARIter;
	TLabel *LabelMaxAveEp;
	TEdit *MaxAveEp;
	TCheckBox *ChkInitRestart;
	TCheckBox *NavSys7;
	void __fastcall BtnOkClick(TObject *Sender);
	void __fastcall RovAntPcvClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BtnAntPcvFileClick(TObject *Sender);
	void __fastcall BtnDCBFileClick(TObject *Sender);
	void __fastcall BtnAntPcvViewClick(TObject *Sender);
	void __fastcall AmbResChange(TObject *Sender);
	void __fastcall SatClkCorrClick(TObject *Sender);
	void __fastcall PosModeChange(TObject *Sender);
	void __fastcall SolFormatChange(TObject *Sender);
	void __fastcall BtnLoadClick(TObject *Sender);
	void __fastcall BtnSaveClick(TObject *Sender);
	void __fastcall IntpRefObsClick(TObject *Sender);
	void __fastcall FreqChange(TObject *Sender);
	void __fastcall BtnRefPosClick(TObject *Sender);
	void __fastcall BtnRovPosClick(TObject *Sender);
	void __fastcall RovPosClick(TObject *Sender);
	void __fastcall RefPosClick(TObject *Sender);
	void __fastcall BtnStaPosViewClick(TObject *Sender);
	void __fastcall BtnStaPosFileClick(TObject *Sender);
	void __fastcall OutputHeightClick(TObject *Sender);
	void __fastcall RefPosTypePChange(TObject *Sender);
	void __fastcall RovPosTypePChange(TObject *Sender);
	void __fastcall GetPos(int type, TEdit **edit, double *pos);
	void __fastcall SetPos(int type, TEdit **edit, double *pos);
	void __fastcall BtnFontClick(TObject *Sender);
	void __fastcall NmeaReqCClick(TObject *Sender);
	void __fastcall DgpsCorrLChange(TObject *Sender);
	void __fastcall BtnGeoidDataFileClick(TObject *Sender);
	void __fastcall NavSys2Click(TObject *Sender);
	void __fastcall BaselineConstClick(TObject *Sender);
	void __fastcall BtnSatPcvViewClick(TObject *Sender);
	void __fastcall BtnSatPcvFileClick(TObject *Sender);
	void __fastcall BtnLocalDirClick(TObject *Sender);
	void __fastcall BtnEOPFileClick(TObject *Sender);
	void __fastcall BtnEOPViewClick(TObject *Sender);
	void __fastcall BtnTLESatFileClick(TObject *Sender);
	void __fastcall BtnTLEFileClick(TObject *Sender);
	void __fastcall BtnSnrMaskClick(TObject *Sender);
	void __fastcall NavSys6Click(TObject *Sender);
private:
	void __fastcall GetOpt(void);
	void __fastcall SetOpt(void);
	void __fastcall LoadOpt(AnsiString file);
	void __fastcall SaveOpt(AnsiString file);
	void __fastcall ReadAntList(void);
	void __fastcall UpdateEnable(void);
public:
	prcopt_t PrcOpt;
	solopt_t SolOpt;
	TFont *PosFont;
	int SvrCycle,SvrBuffSize,SolBuffSize,NavSelect,SavedSol;
	int NmeaReq,NmeaCycle,TimeoutTime,ReconTime,DgpsCorr,SbasCorr;
	int DebugTraceF,DebugStatusF;
	int RovPosTypeF,RefPosTypeF,RovAntPcvF,RefAntPcvF,BaselineC;
	int MoniPort,FileSwapMargin,PanelStack;
	AnsiString ExSats,LocalDirectory;
	AnsiString RovAntF,RefAntF,SatPcvFileF,AntPcvFileF,StaPosFileF;
	AnsiString GeoidDataFileF,DCBFileF,EOPFileF,TLEFileF,TLESatFileF;
	AnsiString ProxyAddr;
	double RovAntDel[3],RefAntDel[3],RovPos[3],RefPos[3];
	double Baseline[2],NmeaIntv[2];
	__fastcall TOptDialog(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOptDialog *OptDialog;
//---------------------------------------------------------------------------
#endif
