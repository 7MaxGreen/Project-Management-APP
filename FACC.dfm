object Form8: TForm8
  Left = 0
  Top = 0
  Caption = 'Form8'
  ClientHeight = 293
  ClientWidth = 668
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 668
    Height = 41
    Align = alTop
    Color = clMaroon
    ParentBackground = False
    TabOrder = 0
    ExplicitWidth = 664
  end
  object Panel2: TPanel
    Left = 0
    Top = 41
    Width = 185
    Height = 252
    Align = alLeft
    Color = clMaroon
    ParentBackground = False
    TabOrder = 1
    ExplicitHeight = 283
    object SpeedButton1: TSpeedButton
      Left = 40
      Top = 96
      Width = 113
      Height = 57
      Caption = 'SELECT'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tempus Sans ITC'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton1Click
    end
  end
  object Panel3: TPanel
    Left = 185
    Top = 41
    Width = 483
    Height = 252
    Align = alClient
    TabOrder = 2
    ExplicitWidth = 479
    ExplicitHeight = 283
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 481
      Height = 250
      Align = alClient
      DataSource = DM.DSQACC
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'ACCESS_TYPE'
          Title.Caption = 'ACCESS TYPE'
          Title.Font.Charset = ANSI_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -11
          Title.Font.Name = 'Tempus Sans ITC'
          Title.Font.Style = [fsBold]
          Width = 121
          Visible = True
        end>
    end
  end
end
