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
  object ShapeEtatServeurSQL: TShape
    Left = 568
    Top = 8
    Width = 49
    Height = 49
    Brush.Color = clRed
  end
  object ButtonInsertDonnerCapteur: TButton
    Left = 48
    Top = 32
    Width = 145
    Height = 25
    Caption = 'InsertDonnerCapteur'
    TabOrder = 0
    OnClick = ButtonInsertDonnerCapteurClick
  end
  object ButtonSelectDonner: TButton
    Left = 48
    Top = 72
    Width = 145
    Height = 25
    Caption = 'Select Donner'
    TabOrder = 1
    OnClick = ButtonSelectDonnerClick
  end
  object Memo1: TMemo
    Left = 200
    Top = 136
    Width = 257
    Height = 137
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
end
