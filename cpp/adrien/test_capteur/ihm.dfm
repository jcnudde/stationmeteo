object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 391
  ClientWidth = 790
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
    Left = 72
    Top = 24
    Width = 44
    Height = 13
    Caption = 'Jour/Nuit'
  end
  object Label2: TLabel
    Left = 328
    Top = 24
    Width = 88
    Height = 13
    Caption = 'Detecteur de pluie'
  end
  object Label3: TLabel
    Left = 624
    Top = 24
    Width = 58
    Height = 13
    Caption = 'Pluiviometre'
  end
  object Edit_jn: TEdit
    Left = 40
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit_jour/nuit'
  end
  object Editpluie: TEdit
    Left = 320
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit_pluie'
  end
  object Editpluiviometre: TEdit
    Left = 592
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit_pluiviometre'
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 32
    Top = 328
  end
end
