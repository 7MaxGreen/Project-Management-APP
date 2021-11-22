object Form7: TForm7
  Left = 0
  Top = 0
  Caption = 'Form7'
  ClientHeight = 335
  ClientWidth = 809
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 809
    Height = 41
    Align = alTop
    Color = clTeal
    ParentBackground = False
    TabOrder = 0
    ExplicitWidth = 671
  end
  object Panel2: TPanel
    Left = 0
    Top = 41
    Width = 185
    Height = 294
    Align = alLeft
    Color = clTeal
    ParentBackground = False
    TabOrder = 1
    object SELECT: TSpeedButton
      Left = 32
      Top = 120
      Width = 113
      Height = 49
      Caption = 'SELECT'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tempus Sans ITC'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SELECTClick
    end
  end
  object Panel3: TPanel
    Left = 185
    Top = 41
    Width = 624
    Height = 294
    Align = alClient
    TabOrder = 2
    ExplicitWidth = 486
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 200
      Height = 292
      Align = alLeft
      DataSource = DM.DSQFUN
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'NAME'
          Title.Caption = 'FUNCTION'
          Title.Font.Charset = ANSI_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -11
          Title.Font.Name = 'Tempus Sans ITC'
          Title.Font.Style = [fsBold]
          Width = 187
          Visible = True
        end>
    end
    object DBGrid2: TDBGrid
      Left = 201
      Top = 1
      Width = 200
      Height = 292
      Align = alLeft
      DataSource = DM.DSQDEP
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'NAME'
          Title.Caption = 'DEPARTMENT'
          Title.Font.Charset = ANSI_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -11
          Title.Font.Name = 'Tempus Sans ITC'
          Title.Font.Style = [fsBold]
          Width = 186
          Visible = True
        end>
    end
    object DBGrid3: TDBGrid
      Left = 401
      Top = 1
      Width = 222
      Height = 292
      Align = alClient
      DataSource = DM.DSQACC
      TabOrder = 2
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
