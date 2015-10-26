#import "MSStylePartInspectorViewController.h"

@class MSShareButtonHandler, NSArray, NSButton, NSView;

@interface MSExportInspectorViewController : MSStylePartInspectorViewController
{
    NSArray *_layers;
    NSView *_topFillerView;
    NSView *_bottomLabelView;
    NSView *_exportButtonView;
    NSView *_separatorView;
    NSView *_separatorView2;
    NSView *_bigExportLabel;
    NSButton *_addExportSizeButton;
    NSButton *_shareButton;
    NSButton *_exportButton;
    NSButton *_knifeButton;
    NSArray *_sizeViewControllers;
    MSShareButtonHandler *_shareButtonHandler;
}

@property(retain, nonatomic) MSShareButtonHandler *shareButtonHandler; // @synthesize shareButtonHandler=_shareButtonHandler;
@property(copy, nonatomic) NSArray *sizeViewControllers; // @synthesize sizeViewControllers=_sizeViewControllers;
@property(retain, nonatomic) NSButton *knifeButton; // @synthesize knifeButton=_knifeButton;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSButton *addExportSizeButton; // @synthesize addExportSizeButton=_addExportSizeButton;
@property(retain, nonatomic) NSView *bigExportLabel; // @synthesize bigExportLabel=_bigExportLabel;
@property(retain, nonatomic) NSView *separatorView2; // @synthesize separatorView2=_separatorView2;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSView *exportButtonView; // @synthesize exportButtonView=_exportButtonView;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
@property(retain, nonatomic) NSView *topFillerView; // @synthesize topFillerView=_topFillerView;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForDisplay;
- (void)exportSingleSlice:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)createSliceAction:(id)arg1;
- (void)addExportSize:(id)arg1;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (id)views;
- (id)view;
- (BOOL)hasEnabledStyle;
- (void)applyDisplayNameToExportButton;
- (void)prepare;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;

@end
