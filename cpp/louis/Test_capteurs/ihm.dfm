﻿object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'test_capteurs'
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
  object label_humidite: TLabel
    Left = 96
    Top = 8
    Width = 41
    Height = 13
    Caption = 'Humidit'#233
    OnClick = label_humiditeClick
  end
  object Label_temperature: TLabel
    Left = 272
    Top = 8
    Width = 62
    Height = 13
    Caption = 'Temperature'
  end
  object Label_luminosite: TLabel
    Left = 520
    Top = 8
    Width = 50
    Height = 13
    Caption = 'Luminosit'#233
  end
  object Edit_humidité: TEdit
    Left = 72
    Top = 40
    Width = 105
    Height = 53
    TabOrder = 0
    Text = 'Edit_humidit'#233
  end
  object Edit_temperature: TEdit
    Left = 256
    Top = 40
    Width = 105
    Height = 53
    TabOrder = 1
    Text = 'Edit_temperature'
    OnChange = Edit_temperatureChange
  end
  object Edit_luminosite: TEdit
    Left = 488
    Top = 40
    Width = 105
    Height = 53
    TabOrder = 2
    Text = 'Edit_luminosite'
  end
end
