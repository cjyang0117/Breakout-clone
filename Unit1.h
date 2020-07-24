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
class ball:public TShape{                      //球類別 繼承TShape;
  private:
    int speedx,speedy;                         //速度
    int power;                                 //球的威力值
    void __fastcall move(TObject *Sender);     //OnTimer函式 使球移動 判斷碰撞
  public:
    ball();                                    //建構函式
    __fastcall ~ball();                        //解構函式
    TTimer *engine;                            //TTimer
    static int dele[];                         //用來記住被刪掉的磚塊
    static int deleN;                          //消除的磚塊數
    static int baN;                            //球的數量
    static int bloNN;                          //現在的檔板數
    static int bloN;                           //已產生過的檔板數
    static int delebaN;                        //現在的球數
    static bool deleB;                         //是否為已死亡的磚塊
    static int deleblo[];                      //用來記住被刪掉的檔板
    static int delebloN;                       //現在的檔板數
    static bool deleBlo;                       //是否為已死亡的檔板
    void op();                                 //多球 加速 多檔板
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

class brick:public TShape{                     //磚塊類別 繼承TShape
  private:

  public:
    int hp;                                    //磚塊生命值
    static int brN;                            //全磚塊數量
    brick();                                   //建構函式
    __fastcall ~brick();                       //解構函式
};
int brick::brN(77);

class block:public TShape{                     //檔板類別 繼承TShape
  private:

  public:
    int life;                                  //檔板承受火力
    block();                                   //建構函式
    __fastcall ~block();                       //解構函式
};


