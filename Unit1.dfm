object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 361
  ClientWidth = 666
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnMouseDown = FormMouseDown
  OnMouseMove = FormMouseMove
  OnMouseUp = FormMouseUp
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 256
    Width = 24
    Height = 13
    Caption = 'Info:'
  end
  object Button1: TButton
    Left = 456
    Top = 16
    Width = 57
    Height = 25
    Caption = 'rectangle'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 552
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Hide'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 190
    Top = 304
    Width = 75
    Height = 25
    Caption = 'printInf'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 552
    Top = 112
    Width = 75
    Height = 25
    Caption = 'MoveC'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 552
    Top = 272
    Width = 75
    Height = 25
    Caption = 'Change'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 552
    Top = 154
    Width = 75
    Height = 25
    Caption = 'Movement'
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button8: TButton
    Left = 552
    Top = 193
    Width = 75
    Height = 25
    Caption = 'Decrease'
    TabOrder = 6
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 552
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Increase'
    TabOrder = 7
    OnClick = Button9Click
  end
  object Button7: TButton
    Left = 552
    Top = 312
    Width = 75
    Height = 25
    Caption = 'stop timers'
    TabOrder = 8
    OnClick = Button7Click
  end
  object Button10: TButton
    Left = 456
    Top = 47
    Width = 57
    Height = 25
    Caption = 'ellipse'
    TabOrder = 9
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 456
    Top = 78
    Width = 57
    Height = 25
    Caption = 'circle'
    TabOrder = 10
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 456
    Top = 112
    Width = 57
    Height = 25
    Caption = 'square'
    TabOrder = 11
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 456
    Top = 154
    Width = 57
    Height = 25
    Caption = 'Polygon'
    TabOrder = 12
    OnClick = Button13Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 632
    Top = 232
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 50
    OnTimer = Timer2Timer
    Left = 632
    Top = 280
  end
end
