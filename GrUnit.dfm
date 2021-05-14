object Grafik: TGrafik
  Left = 883
  Top = 111
  Width = 945
  Height = 443
  HorzScrollBar.Tracking = True
  Caption = #1043#1088#1072#1092#1080#1082' '#1089#1090#1072#1090#1080#1089#1090#1080#1082#1080
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Icon.Data = {
    0000010001002020100000000000E80200001600000028000000200000004000
    0000010004000000000080020000000000000000000000000000000000000000
    000000008000008000000080800080000000800080008080000080808000C0C0
    C0000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF000000
    000000000000000000000000000000000000000000000000000000000000000C
    CCCC0000000000000000CCC0000000CCCCCCC00000000000000CCCCC000000CC
    CCCCCC000000000000CCCCCCC00000CCCCCCCCC0000000000CCCCCCCC00000CC
    CCCCCCCC000000000CCCCCCCC00000CCCCCCCCCCC00000000CCCCCCCC00000CC
    CCCCCCCCCC0000000CCCCCCCC00000CCCCCCCCCCCCC000000CCCCCCCC00000CC
    CCCCCCCCCCCC00000CCCCCCCC00000CCCCCCCCCCCCCCC0000CCCCCCCC00000CC
    CCCCCCCCCCCCCC000CCCCCCCC00000CCCCCCCCCCCCCCCCC00CCCCCCCC00000CC
    CCCCCCCCCCCCCCCC0CCCCCCCC00000CCCCCCCCCCCCCCCCCCCCCCCCCCC00000CC
    CCCCCCCCCCCCCCCCCCCCCCCCC00000CCCCCCCCCCCCCCCCCCCCCCCCCCC00000CC
    CCCCCCCCCCCCCCCCCCCCCCCCC00000CCCCCCCCC0CCCCCCCCCCCCCCCCC00000CC
    CCCCCCC00CCCCCCCCCCCCCCCC00000CCCCCCCCC000CCCCCCCCCCCCCCC00000CC
    CCCCCCC0000CCCCCCCCCCCCCC00000CCCCCCCCC00000CCCCCCCCCCCCC00000CC
    CCCCCCC000000CCCCCCCCCCCC00000CCCCCCCCC0000000CCCCCCCCCCC00000CC
    CCCCCCC00000000CCCCCCCCCC00000CCCCCCCCC000000000CCCCCCCCC00000CC
    CCCCCCC0000000000CCCCCCCC000000CCCCCCC000000000000CCCCCCC0000000
    CCCCC00000000000000CCCCC000000000000000000000000000000000000FFFF
    FFFFFFFFFFFFE0FFFF1FC07FFE0FC03FFC07C01FF807C00FF807C007F807C003
    F807C001F807C000F807C0007807C0003807C0001807C0000807C0000007C000
    0007C0000007C0000007C0100007C0180007C01C0007C01E0007C01F0007C01F
    8007C01FC007C01FE007C01FF007C01FF807E03FFC07F07FFE0FFFFFFFFF}
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Chart1: TChart
    Left = 16
    Top = 16
    Width = 9450
    Height = 377
    BackWall.Brush.Color = clWhite
    BackWall.Brush.Style = bsClear
    MarginLeft = 0
    MarginRight = 1
    Title.Text.Strings = (
      #1043#1088#1072#1092#1080#1082' '#1087#1086#1087#1072#1076#1072#1085#1080#1081)
    BottomAxis.Automatic = False
    BottomAxis.AutomaticMaximum = False
    BottomAxis.AutomaticMinimum = False
    BottomAxis.Grid.Style = psSolid
    BottomAxis.Grid.SmallDots = True
    BottomAxis.Maximum = 2000
    BottomAxis.MinorTickCount = 9
    LeftAxis.Automatic = False
    LeftAxis.AutomaticMaximum = False
    LeftAxis.AutomaticMinimum = False
    LeftAxis.Grid.Style = psDashDotDot
    LeftAxis.Grid.SmallDots = True
    LeftAxis.Maximum = 30
    LeftAxis.Minimum = -30
    Legend.Visible = False
    View3D = False
    BevelOuter = bvNone
    TabOrder = 0
    object Series1: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clNavy
      ShowInLegend = False
      Pointer.Brush.Color = clLime
      Pointer.HorizSize = 2
      Pointer.InflateMargins = True
      Pointer.Pen.Color = clBlue
      Pointer.Style = psCircle
      Pointer.VertSize = 2
      Pointer.Visible = True
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
      object TeeFunction1: TAddTeeFunction
      end
    end
    object Series2: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clBlack
      ShowInLegend = False
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series3: TBarSeries
      Marks.ArrowLength = 0
      Marks.Font.Charset = DEFAULT_CHARSET
      Marks.Font.Color = clBlack
      Marks.Font.Height = -8
      Marks.Font.Name = 'Arial'
      Marks.Font.Style = []
      Marks.Frame.Visible = False
      Marks.Visible = True
      SeriesColor = clGreen
      BarPen.Visible = False
      BarWidthPercent = 1
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Bar'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series4: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clPurple
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series5: TBarSeries
      Marks.Arrow.Color = clFuchsia
      Marks.ArrowLength = 20
      Marks.BackColor = 16744703
      Marks.Font.Charset = DEFAULT_CHARSET
      Marks.Font.Color = clBlack
      Marks.Font.Height = -9
      Marks.Font.Name = 'Arial'
      Marks.Font.Style = []
      Marks.Frame.Visible = False
      Marks.Visible = True
      SeriesColor = clPurple
      BarPen.Visible = False
      BarWidthPercent = 1
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Bar'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
  end
end
