object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'ModuledeTestPrevision'
  ClientHeight = 211
  ClientWidth = 514
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelAfficheProtocolePrevi: TLabel
    Left = 8
    Top = 88
    Width = 225
    Height = 19
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ButtonObtenPrevi: TButton
    Left = 304
    Top = 72
    Width = 193
    Height = 57
    Caption = 'Obtenir la prevision la m'#233'teo '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = ButtonObtenPreviClick
  end
end
