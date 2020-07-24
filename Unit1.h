//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TButton *Button1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Panel1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Panel1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormDestroy(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
class ball:public TShape{                      //�y���O �~��TShape;
  private:
    int speedx,speedy;                         //�t��
    int power;                                 //�y���¤O��
    void __fastcall move(TObject *Sender);     //OnTimer�禡 �ϲy���� �P�_�I��
  public:
    ball();                                    //�غc�禡
    __fastcall ~ball();                        //�Ѻc�禡
    TTimer *engine;                            //TTimer
    static int dele[];                         //�ΨӰO��Q�R�����j��
    static int deleN;                          //�������j����
    static int baN;                            //�y���ƶq
    static int bloNN;                          //�{�b���ɪO��
    static int bloN;                           //�w���͹L���ɪO��
    static int delebaN;                        //�{�b���y��
    static bool deleB;                         //�O�_���w���`���j��
    static int deleblo[];                      //�ΨӰO��Q�R�����ɪO
    static int delebloN;                       //�{�b���ɪO��
    static bool deleBlo;                       //�O�_���w���`���ɪO
    void op();                                 //�h�y �[�t �h�ɪO
};
int ball::baN(1);
int ball::dele[77];
int ball::deleN(0);
bool ball::deleB(false);
bool ball::deleBlo(false);
int ball::bloN(1);
int ball::bloNN(1);
int ball::deleblo[20];
int ball::delebloN(0);
int ball::delebaN(1);

class brick:public TShape{                     //�j�����O �~��TShape
  private:

  public:
    int hp;                                    //�j���ͩR��
    static int brN;                            //���j���ƶq
    brick();                                   //�غc�禡
    __fastcall ~brick();                       //�Ѻc�禡
};
int brick::brN(77);

class block:public TShape{                     //�ɪO���O �~��TShape
  private:

  public:
    int life;                                  //�ɪO�Ө����O
    block();                                   //�غc�禡
    __fastcall ~block();                       //�Ѻc�禡
};


