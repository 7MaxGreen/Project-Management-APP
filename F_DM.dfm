object DM: TDM
  OldCreateOrder = False
  Height = 653
  Width = 758
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Database=PROJECT_MANAGEMENT'
      'Server=LAPTOP-JIO8U7CS'
      'OSAuthent=Yes'
      'DriverID=MSSQL')
    Connected = True
    LoginPrompt = False
    Left = 24
    Top = 16
  end
  object QEDIT: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'SELECT * FROM SOLUTION S INNER JOIN PROJECT_MANAGEMENT PM ON S.S' +
        'OLUTION_ID=PM.SOLUTION_ID'
      
        '                 INNER JOIN PROJECT_STATUS PS ON PS.PROJECT_STAT' +
        'US_ID=PM.PROJECT_STATUS_ID'
      #9#9' INNER JOIN PROJECT P ON P.PROJECT_ID=PM.PROJECT_ID'
      #9#9' INNER JOIN CLIENT C ON C.CLIENT_ID=PM.CLIENT_ID'
      
        #9#9' INNER JOIN INTERMEDIARY I ON I.INTERMEDIARY_ID=PM.INTERMEDIAR' +
        'Y_ID'
      #9#9' INNER JOIN ENTITIES E ON E.ENTITIES_ID=I.ENTITIES_ID')
    Left = 24
    Top = 80
  end
  object DSQEDIT: TDataSource
    DataSet = QEDIT
    Left = 80
    Top = 80
  end
  object QTEAMS: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT E.*,'
      '       E.NAME AS NAME,'
      '       E.SURNAME AS SURNAME,'
      '            F.*,F.NAME AS FUNCTIE, '
      #9#9#9'D.*,D.NAME AS DEPARTMENT FROM EMPLOYMENT E '
      
        '         INNER JOIN EMPLOYEE EE ON E.EMPLOYMENT_ID=EE.EMPLOYMENT' +
        '_ID'
      
        '         INNER JOIN FUNCTIONS F ON F.FUNCTIONS_ID=EE.FUNCTIONS_I' +
        'D'
      
        #9'     INNER JOIN DEPARTMENT D ON D.DEPARTMENT_ID=EE.DEPARTMENT_I' +
        'D')
    Left = 24
    Top = 136
  end
  object DSQTEAMS: TDataSource
    DataSet = QTEAMS
    Left = 80
    Top = 136
  end
  object QPM: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT E.*,E.NAME AS ENTITIES,'
      '       PS.*,'
      '       P.*,P.NAME AS PROJECT,'
      '       S.*,S.NAME AS SOLUTION,'
      
        #9'   C.*, C.COMPANY_NAME AS COMPANY,C.COMPANY_REPRESENTATIVE AS R' +
        'EPRESENTATIVE,C.PHONE AS PHONE,C.EMAIL AS EMAIL,'
      
        #9'   I.*,I.COMPANY_NAME AS INTERMEDIARY,I.COMPANY_REPRESENTATIVE ' +
        'AS I_REPRESENTATIVE,I.PHONE AS I_PHONE,I.EMAIL AS I_EMAIL,'
      
        #9'   PM.*,PM.PROJECT_START_DATE AS START , PM.PROJECT_END_DATE AS' +
        ' FINISH'
      
        'FROM SOLUTION S INNER JOIN PROJECT_MANAGEMENT PM ON S.SOLUTION_I' +
        'D=PM.SOLUTION_ID'
      
        #9'            INNER JOIN PROJECT_STATUS PS ON PS.PROJECT_STATUS_I' +
        'D=PM.PROJECT_STATUS_ID'
      #9#9#9#9'INNER JOIN PROJECT P ON P.PROJECT_ID=PM.PROJECT_ID'
      #9#9#9#9'INNER JOIN CLIENT C ON C.CLIENT_ID=PM.CLIENT_ID'
      
        #9#9#9#9'INNER JOIN INTERMEDIARY I ON I.INTERMEDIARY_ID=PM.INTERMEDIA' +
        'RY_ID'
      #9#9#9#9'INNER JOIN ENTITIES E ON E.ENTITIES_ID=I.ENTITIES_ID')
    Left = 24
    Top = 208
  end
  object DSQPM: TDataSource
    DataSet = QPM
    Left = 80
    Top = 208
  end
  object QP_T: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT P.NAME AS PROJECT,'
      '        S.NAME AS SOLUTION,'
      #9#9'PM.PROJECT_START_DATE AS START,'
      #9#9'C.COMPANY_NAME AS CLIENT,'
      #9#9'I.COMPANY_NAME AS INTERMEDIARY,'
      
        #9#9'P.DETAILS AS DETAILS FROM SOLUTION S INNER JOIN PROJECT_MANAGE' +
        'MENT PM ON S.SOLUTION_ID=PM.SOLUTION_ID'
      
        '         INNER JOIN PROJECT_STATUS PS ON PS.PROJECT_STATUS_ID=PM' +
        '.PROJECT_STATUS_ID'
      #9#9' INNER JOIN PROJECT P ON P.PROJECT_ID=PM.PROJECT_ID'
      #9#9' INNER JOIN CLIENT C ON C.CLIENT_ID=PM.CLIENT_ID'
      
        #9#9' INNER JOIN INTERMEDIARY I ON I.INTERMEDIARY_ID=PM.INTERMEDIAR' +
        'Y_ID'
      #9#9' INNER JOIN ENTITIES E ON E.ENTITIES_ID=I.ENTITIES_ID'
      #9#9' WHERE PS.STATUS_TYPE IN('#39'IN PROGRESS'#39' , '#39'POSTPONED'#39');')
    Left = 24
    Top = 272
  end
  object DSQP_T: TDataSource
    DataSet = QP_T
    Left = 80
    Top = 272
  end
  object QLIBER: TFDQuery
    Connection = FDConnection1
    Left = 32
    Top = 344
  end
  object QTASK: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT P.*,P.NAME AS PROJECT,'
      '       PM.*,'
      '       T.*,T.NAME AS TASK,'
      '       TS.*,'
      '       TP.NAME AS PRIORITY,'
      '       E.*,'
      
        '       EM.NAME AS NAME,EM.SURNAME AS SURNAME FROM EMPLOYMENT EM ' +
        'INNER JOIN EMPLOYEE E ON EM.EMPLOYMENT_ID=E.EMPLOYMENT_ID'
      #9'   INNER JOIN TASK T ON T.EMPLOYEE_ID=E.EMPLOYMENT_ID'
      
        #9'   INNER JOIN TASK_STATUS TS ON TS.TASK_STATUS_ID=T.TASK_STATUS' +
        '_ID'
      
        #9'   INNER JOIN TASK_PRIORITY TP ON TP.TASK_PRIORITY_ID=T.TASK_PR' +
        'IORITY_ID'
      
        #9'   INNER JOIN PROJECT_MANAGEMENT PM ON PM.PROJECT_MANAGEMENT_ID' +
        '=T.PROJECT_MANAGEMENT_ID'
      #9'   INNER JOIN PROJECT P ON P.PROJECT_ID=PM.PROJECT_ID')
    Left = 176
    Top = 80
  end
  object DSQTASK: TDataSource
    DataSet = QTASK
    Left = 240
    Top = 80
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    Left = 120
    Top = 344
  end
  object QDEP: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT COUNT(*) AS NR,NAME FROM DEPARTMENT GROUP BY NAME')
    Left = 416
    Top = 16
  end
  object DSQDEP: TDataSource
    DataSet = QDEP
    Left = 472
    Top = 16
  end
  object QFUN: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT NAME FROM FUNCTIONS ')
    Left = 416
    Top = 80
  end
  object DSQFUN: TDataSource
    DataSet = QFUN
    Left = 760
    Top = 128
  end
  object QACC: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT ACCESS_TYPE FROM EMPLOYMENT ')
    Left = 416
    Top = 144
  end
  object DSQACC: TDataSource
    DataSet = QACC
    Left = 472
    Top = 144
  end
  object QPRIOR: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM TASK_PRIORITY')
    Left = 424
    Top = 216
  end
  object QTYPE: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM TASK_STATUS')
    Left = 424
    Top = 288
  end
  object DSQPRIOR: TDataSource
    DataSet = QPRIOR
    Left = 480
    Top = 216
  end
  object DSQTYPE: TDataSource
    DataSet = QTYPE
    Left = 480
    Top = 288
  end
  object QSTATUS: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM PROJECT_STATUS')
    Left = 616
    Top = 16
  end
  object QINTERMEDIARY: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM INTERMEDIARY')
    Left = 616
    Top = 72
  end
  object QDENTITIES: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM ENTITIES')
    Left = 616
    Top = 136
  end
  object QSOLUTION: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM SOLUTION')
    Left = 616
    Top = 208
  end
  object DSQSTATUS: TDataSource
    DataSet = QSTATUS
    Left = 680
    Top = 16
  end
  object DSINTERMEDIARY: TDataSource
    DataSet = QINTERMEDIARY
    Left = 680
    Top = 72
  end
  object DSENTITIES: TDataSource
    DataSet = QDENTITIES
    Left = 688
    Top = 136
  end
  object DSSOLUTION: TDataSource
    DataSet = QSOLUTION
    Left = 688
    Top = 208
  end
  object frxReport1: TfrxReport
    Version = '5.3.14'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44479.555779074100000000
    ReportOptions.LastChange = 44479.578262395800000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 232
    Top = 216
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 98.267780000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo1: TfrxMemoView
          Left = 170.078850000000000000
          Top = 30.236240000000000000
          Width = 427.086890000000000000
          Height = 60.472480000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'REPORT PROJECT / MONTH')
          ParentFont = False
        end
      end
      object PageHeader1: TfrxPageHeader
        FillType = ftBrush
        Height = 60.472480000000000000
        Top = 139.842610000000000000
        Width = 718.110700000000000000
        object Memo3: TfrxMemoView
          Width = 207.874150000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'PROJECT')
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = 207.874150000000000000
          Width = 147.401670000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'CLIENT')
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = 355.275820000000000000
          Width = 192.756030000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'SOLUTION')
          ParentFont = False
        end
        object Memo6: TfrxMemoView
          Left = 548.031850000000000000
          Width = 154.960730000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'START')
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 56.692950000000000000
        Top = 260.787570000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Gradient1: TfrxGradientView
          Left = 3.779530000000000000
          Top = 52.913420000000000000
          Width = 699.213050000000000000
          Height = 18.897650000000000000
          Style = gsHorizontal
          Color = clSilver
        end
        object Memo9: TfrxMemoView
          Top = 15.118120000000000000
          Width = 207.874150000000000000
          Height = 37.795300000000000000
          DataField = 'PROJECT'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."PROJECT"]')
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 207.874150000000000000
          Top = 15.118120000000000000
          Width = 147.401670000000000000
          Height = 37.795300000000000000
          DataField = 'CLIENT'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."CLIENT"]')
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 355.275820000000000000
          Top = 15.118120000000000000
          Width = 192.756030000000000000
          Height = 37.795300000000000000
          DataField = 'SOLUTION'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."SOLUTION"]')
          ParentFont = False
        end
        object Memo12: TfrxMemoView
          Left = 548.031850000000000000
          Top = 15.118120000000000000
          Width = 154.960730000000000000
          Height = 37.795300000000000000
          DataField = 'START'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."START"]')
          ParentFont = False
        end
      end
      object Chart1: TfrxChartView
        Left = 185.196970000000000000
        Top = 400.630180000000000000
        Width = 359.055350000000000000
        Height = 291.023810000000000000
        HighlightColor = clBlack
        Chart = {
          5450463006544368617274054368617274044C656674020003546F7002000557
          696474680390010648656967687403FA00144261636B57616C6C2E50656E2E56
          697369626C65080D4672616D652E56697369626C6508165669657733444F7074
          696F6E732E526F746174696F6E02000A426576656C4F75746572070662764E6F
          6E6505436F6C6F720707636C57686974650D44656661756C7443616E76617306
          0E54474449506C757343616E76617311436F6C6F7250616C65747465496E6465
          78020D000C5447616E747453657269657307536572696573310D436C69636B61
          626C654C696E650816506F696E7465722E496E666C6174654D617267696E7309
          0D506F696E7465722E5374796C65070B707352656374616E676C650C5856616C
          7565732E4E616D65060553746172740D5856616C7565732E4F72646572070B6C
          6F417363656E64696E670C5956616C7565732E4E616D650601590D5956616C75
          65732E4F7264657207066C6F4E6F6E650D43616C6C6F75742E5374796C65070F
          70735269676874547269616E676C651543616C6C6F75742E4172726F772E5669
          7369626C650810537461727456616C7565732E4E616D65060553746172741153
          7461727456616C7565732E4F72646572070B6C6F417363656E64696E670E456E
          6456616C7565732E4E616D650603456E640F456E6456616C7565732E4F726465
          7207066C6F4E6F6E650D4E6578745461736B2E4E616D6506084E657874546173
          6B0E4E6578745461736B2E4F7264657207066C6F4E6F6E65000000}
        ChartElevation = 345
        SeriesData = <
          item
            InheritedName = 'TfrxSeriesItem2'
            DataType = dtDBData
            DataSet = frxDBDataset1
            DataSetName = 'frxDBDataset1'
            SortOrder = soNone
            TopN = 0
            XType = xtText
            Source1 = 'frxDBDataset1."PROJECT"'
            Source2 = 'frxDBDataset1."SOLUTION"'
            Source3 = 'frxDBDataset1."CLIENT"'
            XSource = 'frxDBDataset1."PROJECT"'
            YSource = 'frxDBDataset1."SOLUTION"'
          end>
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = QP_T
    BCDToCurrency = False
    Left = 304
    Top = 224
  end
end
