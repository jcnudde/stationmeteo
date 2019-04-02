object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'GestionMeteo'
  ClientHeight = 300
  ClientWidth = 635
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
    Width = 233
    Height = 129
    Caption = 'Server'
    TabOrder = 0
    object voyantEtatServer: TShape
      Left = 144
      Top = 16
      Width = 65
      Height = 56
      Brush.Color = clRed
      Shape = stCircle
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
    object ParamServer: TButton
      Left = 16
      Top = 88
      Width = 193
      Height = 25
      Caption = 'ParamServer'
      TabOrder = 2
    end
  end
end
