object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 
    'Circular Linked list with single & stack & queue functions by ch' +
    'ien wei hui 2020/11/25 ver1.0'
  ClientHeight = 401
  ClientWidth = 652
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 0
    Top = 193
    Width = 652
    Height = 3
    Cursor = crVSplit
    Align = alTop
    ExplicitTop = 73
    ExplicitWidth = 328
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 652
    Height = 193
    Align = alTop
    Caption = 'Panel1'
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 1
      Top = 1
      Width = 650
      Height = 191
      ActivePage = TabSheet1
      Align = alClient
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = 'Singly linked list'
        object Label1: TLabel
          Left = 16
          Top = 16
          Width = 66
          Height = 17
          Caption = 'ELEMENT :'
        end
        object Label2: TLabel
          Left = 240
          Top = 16
          Width = 49
          Height = 17
          Caption = 'Target :'
        end
        object Label3: TLabel
          Left = 473
          Top = 6
          Width = 25
          Height = 25
          Caption = 'n :'
        end
        object Label4: TLabel
          Left = 463
          Top = 34
          Width = 35
          Height = 13
          Caption = 'range :'
        end
        object Button1: TButton
          Left = 16
          Top = 56
          Width = 201
          Height = 41
          Caption = 'INSERT FIRST'
          TabOrder = 0
          OnClick = Button1Click
        end
        object Edit1: TEdit
          Left = 88
          Top = 13
          Width = 129
          Height = 28
          TabOrder = 1
          Text = '10'
        end
        object Button2: TButton
          Left = 16
          Top = 103
          Width = 201
          Height = 42
          Caption = 'INSERT LAST'
          TabOrder = 2
          OnClick = Button2Click
        end
        object Button3: TButton
          Left = 240
          Top = 56
          Width = 105
          Height = 41
          Caption = 'Search Target'
          TabOrder = 3
          OnClick = Button3Click
        end
        object Edit2: TEdit
          Left = 296
          Top = 16
          Width = 121
          Height = 21
          TabOrder = 4
          Text = '10'
        end
        object Button4: TButton
          Left = 240
          Top = 103
          Width = 105
          Height = 42
          Caption = 'Search(Insert After)'
          TabOrder = 5
          OnClick = Button4Click
        end
        object Button5: TButton
          Left = 351
          Top = 103
          Width = 98
          Height = 42
          Caption = 'Search(Insert Before)'
          TabOrder = 6
          OnClick = Button5Click
        end
        object Button6: TButton
          Left = 351
          Top = 56
          Width = 98
          Height = 41
          Caption = 'Search Delete'
          TabOrder = 7
          OnClick = Button6Click
        end
        object Edit3: TEdit
          Left = 504
          Top = 3
          Width = 121
          Height = 21
          TabOrder = 8
          Text = '10'
        end
        object Edit4: TEdit
          Left = 504
          Top = 30
          Width = 121
          Height = 21
          TabOrder = 9
          Text = '1000'
        end
        object Button7: TButton
          Left = 472
          Top = 64
          Width = 153
          Height = 33
          Caption = 'Insert n Random Number'
          TabOrder = 10
          OnClick = Button7Click
        end
        object Button8: TButton
          Left = 473
          Top = 103
          Width = 152
          Height = 34
          Caption = 'Clear List'
          TabOrder = 11
          OnClick = Button8Click
        end
      end
      object TabSheet2: TTabSheet
        Caption = 'Linked stack'
        ImageIndex = 1
        object Label5: TLabel
          Left = 24
          Top = 24
          Width = 45
          Height = 13
          Caption = 'Element :'
        end
        object Edit5: TEdit
          Left = 88
          Top = 21
          Width = 121
          Height = 21
          TabOrder = 0
          Text = '10'
        end
        object Button9: TButton
          Left = 248
          Top = 16
          Width = 113
          Height = 33
          Caption = 'Push'
          TabOrder = 1
          OnClick = Button9Click
        end
        object Button10: TButton
          Left = 248
          Top = 72
          Width = 113
          Height = 33
          Caption = 'Pop'
          TabOrder = 2
          OnClick = Button10Click
        end
      end
      object TabSheet3: TTabSheet
        Caption = 'Linked queue'
        ImageIndex = 2
        object Label6: TLabel
          Left = 24
          Top = 24
          Width = 45
          Height = 13
          Caption = 'Element :'
        end
        object Edit6: TEdit
          Left = 88
          Top = 21
          Width = 121
          Height = 21
          TabOrder = 0
          Text = '10'
        end
        object Button11: TButton
          Left = 248
          Top = 16
          Width = 129
          Height = 41
          Caption = 'InsertQ'
          TabOrder = 1
          OnClick = Button11Click
        end
        object Button12: TButton
          Left = 248
          Top = 80
          Width = 129
          Height = 41
          Caption = 'DeleteQ'
          TabOrder = 2
          OnClick = Button12Click
        end
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 196
    Width = 652
    Height = 205
    Align = alClient
    Caption = 'Panel2'
    TabOrder = 1
    object PageControl2: TPageControl
      Left = 1
      Top = 1
      Width = 650
      Height = 203
      ActivePage = TabSheet5
      Align = alClient
      TabOrder = 0
      object TabSheet4: TTabSheet
        Caption = 'linked list output'
        object Memo1: TMemo
          Left = 0
          Top = 0
          Width = 642
          Height = 175
          Align = alClient
          Lines.Strings = (
            'Memo1')
          TabOrder = 0
          ExplicitLeft = 1
          ExplicitTop = 1
          ExplicitWidth = 650
          ExplicitHeight = 203
        end
      end
      object TabSheet5: TTabSheet
        Caption = 'linked stack output'
        ImageIndex = 1
        object Memo2: TMemo
          Left = 0
          Top = 0
          Width = 642
          Height = 175
          Align = alClient
          Lines.Strings = (
            'Memo2')
          TabOrder = 0
        end
      end
      object TabSheet6: TTabSheet
        Caption = 'linked queue output'
        ImageIndex = 2
        object Memo3: TMemo
          Left = 0
          Top = 0
          Width = 642
          Height = 175
          Align = alClient
          Lines.Strings = (
            'Memo3')
          TabOrder = 0
          ExplicitLeft = 256
          ExplicitTop = 16
          ExplicitWidth = 185
          ExplicitHeight = 89
        end
      end
    end
  end
end
