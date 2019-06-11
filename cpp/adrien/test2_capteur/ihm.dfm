object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
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
  object Label1: TLabel
    Left = 80
    Top = 88
    Width = 44
    Height = 13
    Caption = 'Jour/Nuit'
  end
  object Label2: TLabel
    Left = 296
    Top = 88
    Width = 22
    Height = 13
    Caption = 'Pluie'
  end
  object Label3: TLabel
    Left = 472
    Top = 88
    Width = 58
    Height = 13
    Caption = 'Pluiviometre'
  end
  object Shape_pluiv: TShape
    Left = 472
    Top = 120
    Width = 65
    Height = 65
  end
  object Shape_jn: TShape
    Left = 72
    Top = 120
    Width = 65
    Height = 65
  end
  object Shape_pluie: TShape
    Left = 272
    Top = 120
    Width = 65
    Height = 65
  end
  object Label4: TLabel
    Left = 240
    Top = 32
    Width = 137
    Height = 13
    Caption = 'Module de test Capteur TOR'
  end
  object Timer1: TTimer
    Interval = 100
    OnTimer = Timer1Timer
    Left = 360
    Top = 232
  end
end
