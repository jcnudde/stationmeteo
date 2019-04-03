object Form1: TForm1
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
    Height = 21
    TabOrder = 0
    Text = 'Edit_humidit'#233
  end
  object Edit_temperature: TEdit
    Left = 256
    Top = 40
    Width = 105
    Height = 21
    TabOrder = 1
    Text = 'Edit_temperature'
    OnChange = Edit_temperatureChange
  end
  object Edit_luminosite: TEdit
    Left = 488
    Top = 40
    Width = 105
    Height = 21
    TabOrder = 2
    Text = 'Edit_luminosite'
  end
  object Edit_hygrometrie: TEdit
    Left = 72
    Top = 67
    Width = 105
    Height = 21
    TabOrder = 3
    Text = 'Edit_hygrometrie'
  end
  object Edit_thermometre: TEdit
    Left = 256
    Top = 67
    Width = 105
    Height = 21
    TabOrder = 4
    Text = 'Edit_thermometre'
  end
  object Edit_luxmetre: TEdit
    Left = 488
    Top = 67
    Width = 105
    Height = 21
    TabOrder = 5
    Text = 'Edit_luxmetre'
    OnChange = Edit_luxmetreChange
  end
  object Timer: TTimer
    OnTimer = TimerTimer
    Left = 24
    Top = 216
  end
end
