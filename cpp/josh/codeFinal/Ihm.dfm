object Tihm: TTihm
  Left = 0
  Top = 0
  Caption = 'GestionMeteo'
  ClientHeight = 528
  ClientWidth = 864
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBoxServer: TGroupBox
    Left = 21
    Top = 8
    Width = 249
    Height = 177
    Caption = 'TcpServeur'
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
      Left = 142
      Top = 16
      Width = 104
      Height = 13
      Caption = 'Etat du serveur TCP :'
    end
    object LabelAfficheIp: TLabel
      Left = 145
      Top = 104
      Width = 4
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object LabelAffichePort: TLabel
      Left = 145
      Top = 136
      Width = 4
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object LabelIp: TLabel
      Left = 24
      Top = 104
      Width = 85
      Height = 16
      Caption = 'IP du serveur :'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Visible = False
    end
    object LabelPort: TLabel
      Left = 24
      Top = 136
      Width = 97
      Height = 16
      Caption = 'Port du serveur :'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
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
      Left = 24
      Top = 35
      Width = 513
      Height = 466
      ColCount = 2
      DefaultColWidth = 250
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
