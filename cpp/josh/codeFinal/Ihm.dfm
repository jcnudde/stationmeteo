object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'GestionMeteo'
  ClientHeight = 541
  ClientWidth = 861
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBoxServer: TGroupBox
    Left = 16
    Top = 8
    Width = 249
    Height = 177
    Caption = 'Server'
    TabOrder = 0
    object voyantEtatServer: TShape
      Left = 156
      Top = 35
      Width = 61
      Height = 54
      Brush.Color = clRed
      Shape = stCircle
    end
    object LabelEtaServ: TLabel
      Left = 148
      Top = 16
      Width = 82
      Height = 13
      Caption = 'Etat du serveur :'
    end
    object LabelAfficheIp: TLabel
      Left = 145
      Top = 104
      Width = 3
      Height = 13
    end
    object LabelAffichePort: TLabel
      Left = 145
      Top = 136
      Width = 3
      Height = 13
    end
    object LabelIp: TLabel
      Left = 24
      Top = 104
      Width = 72
      Height = 13
      Caption = 'IP du serveur :'
      Visible = False
    end
    object LabelPort: TLabel
      Left = 24
      Top = 136
      Width = 82
      Height = 13
      Caption = 'Port du serveur :'
      Visible = False
    end
    object stopServer: TButton
      Left = 16
      Top = 47
      Width = 75
      Height = 25
      Caption = 'Stop'
      TabOrder = 0
      Visible = False
      OnClick = stopServerClick
    end
    object startServer: TButton
      Left = 16
      Top = 16
      Width = 75
      Height = 25
      Caption = 'Start'
      TabOrder = 1
      OnClick = startServerClick
    end
  end
  object GroupBoxCapteur: TGroupBox
    Left = 292
    Top = 8
    Width = 561
    Height = 513
    Caption = 'Capteurs'
    TabOrder = 1
    object StringGridCapteur: TStringGrid
      Left = 72
      Top = 23
      Width = 401
      Height = 466
      ColCount = 2
      DefaultColWidth = 200
      DefaultRowHeight = 45
      RowCount = 10
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object TimerAffichageCapteur: TTimer
    Interval = 10
    OnTimer = TimerAffichageCapteurTimer
    Left = 8
    Top = 504
  end
end
