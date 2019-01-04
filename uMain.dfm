object uMainForm: TuMainForm
  Left = 0
  Top = 0
  BorderStyle = bsSizeToolWin
  Caption = 'ColorReader_By Alexhohom'
  ClientHeight = 340
  ClientWidth = 371
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 244
    Width = 371
    Height = 96
    Align = alBottom
    TabOrder = 0
    object Image3: TImage
      Left = 8
      Top = 13
      Width = 106
      Height = 70
    end
    object Label1: TLabel
      Left = 124
      Top = 15
      Width = 42
      Height = 13
      Caption = 'Label1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = #40657#20307
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 124
      Top = 44
      Width = 42
      Height = 13
      Caption = 'Label2'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = #40657#20307
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 124
      Top = 74
      Width = 42
      Height = 13
      Caption = 'Label2'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = #40657#20307
      Font.Style = []
      ParentFont = False
    end
    object ScrollBar1: TScrollBar
      Left = 172
      Top = 12
      Width = 180
      Height = 20
      LargeChange = 10
      Max = 255
      PageSize = 0
      TabOrder = 0
      OnChange = ScrollBar1Change
    end
    object ScrollBar2: TScrollBar
      Left = 172
      Top = 41
      Width = 180
      Height = 20
      LargeChange = 10
      Max = 255
      PageSize = 0
      TabOrder = 1
      OnChange = ScrollBar1Change
    end
    object ScrollBar3: TScrollBar
      Left = 172
      Top = 71
      Width = 180
      Height = 20
      LargeChange = 10
      Max = 255
      PageSize = 0
      TabOrder = 2
      OnChange = ScrollBar1Change
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 371
    Height = 244
    Align = alClient
    TabOrder = 1
    object Image2: TImage
      Left = 254
      Top = 44
      Width = 80
      Height = 80
    end
    object Image1: TImage
      Left = 43
      Top = 34
      Width = 127
      Height = 158
    end
    object Label4: TLabel
      Left = 270
      Top = 23
      Width = 56
      Height = 13
      Caption = #23454#26102#39068#33394
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = #40657#20307
      Font.Style = []
      ParentFont = False
    end
    object ColorOutput: TEdit
      Left = 231
      Top = 140
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object BtnPause: TButton
      Left = 254
      Top = 187
      Width = 75
      Height = 32
      Caption = #26242#20572
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = #40657#20307
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = BtnPauseClick
    end
  end
  object Timer1: TTimer
    Interval = 500
    OnTimer = Timer1Timer
    Left = 200
    Top = 178
  end
  object MainMenu1: TMainMenu
    Left = 195
    Top = 10
    object N3: TMenuItem
      Caption = #35774#32622
      object N5: TMenuItem
        Caption = #32622#39030
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #25918#22823
        object Btn1Large: TMenuItem
          Caption = #31105#29992
          OnClick = Btn1LargeClick
        end
        object Btn2Large: TMenuItem
          Caption = '2'#20493
          OnClick = Btn2LargeClick
        end
        object Btn4Large: TMenuItem
          Caption = '4'#20493
          Checked = True
          OnClick = Btn4LargeClick
        end
      end
    end
    object N4: TMenuItem
      Caption = #20851#20110
      object N8: TMenuItem
        Caption = #29256#26412
        OnClick = N8Click
      end
      object N9: TMenuItem
        Caption = #25903#25345#25105#20204
        OnClick = N9Click
      end
    end
  end
end
