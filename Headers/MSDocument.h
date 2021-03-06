//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "MSBasicDelegate.h"
#import "MSDocumentDataDelegate.h"
#import "MSEventHandlerManagerDelegate.h"
#import "MSPageDelegate.h"
#import "MSSidebarControllerDelegate.h"
#import "NSMenuDelegate.h"
#import "NSToolbarDelegate.h"
#import "NSWindowDelegate.h"

@class BCSideBarViewController, MSActionController, MSBackButtonWindowController, MSContentDrawViewController, MSDocumentData, MSEventHandlerManager, MSFontList, MSHistoryMaker, MSImmutableDocumentData, MSInspectorController, MSLayerArray, MSMainSplitViewController, MSToolbarConstructor, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSView, NSWindow;

@interface MSDocument : NSDocument <MSSidebarControllerDelegate, MSEventHandlerManagerDelegate, NSMenuDelegate, NSToolbarDelegate, NSWindowDelegate, MSBasicDelegate, MSDocumentDataDelegate, MSPageDelegate>
{
    BOOL _hasOpenedImageFile;
    BOOL _nextReadFromURLIsReload;
    BOOL _temporarilyDisableSelectionHiding;
    NSArray *_exportableLayerSelection;
    NSWindow *_documentWindow;
    NSView *_messageView;
    MSMainSplitViewController *_splitViewController;
    NSView *_inspectorPlaceholderView;
    NSView *_canvasPlaceholderView;
    MSToolbarConstructor *_toolbarConstructor;
    MSActionController *_actionsController;
    MSDocumentData *_documentData;
    MSEventHandlerManager *_eventHandlerManager;
    MSHistoryMaker *_historyMaker;
    MSInspectorController *_inspectorController;
    MSFontList *_fontList;
    MSLayerArray *_selectedLayersA;
    MSContentDrawViewController *_currentContentViewController;
    BCSideBarViewController *_sidebarController;
    NSMutableSet *_layersWithHiddenSelectionHandles;
    NSTimer *_resetHiddenSelectionHandlesTimer;
    NSMutableDictionary *_mutableUIMetadata;
    MSBackButtonWindowController *_backButtonController;
    NSMutableDictionary *_originalViewportsForEditedSymbols;
}

+ (id)currentDocument;
+ (BOOL)isNativeType:(id)arg1;
+ (id)writableTypes;
+ (id)readableTypes;
+ (BOOL)autosavesInPlace;
@property(retain, nonatomic) NSMutableDictionary *originalViewportsForEditedSymbols; // @synthesize originalViewportsForEditedSymbols=_originalViewportsForEditedSymbols;
@property(retain, nonatomic) MSBackButtonWindowController *backButtonController; // @synthesize backButtonController=_backButtonController;
@property(retain, nonatomic) NSMutableDictionary *mutableUIMetadata; // @synthesize mutableUIMetadata=_mutableUIMetadata;
@property(retain, nonatomic) NSTimer *resetHiddenSelectionHandlesTimer; // @synthesize resetHiddenSelectionHandlesTimer=_resetHiddenSelectionHandlesTimer;
@property(retain, nonatomic) NSMutableSet *layersWithHiddenSelectionHandles; // @synthesize layersWithHiddenSelectionHandles=_layersWithHiddenSelectionHandles;
@property(nonatomic) BOOL temporarilyDisableSelectionHiding; // @synthesize temporarilyDisableSelectionHiding=_temporarilyDisableSelectionHiding;
@property(retain, nonatomic) BCSideBarViewController *sidebarController; // @synthesize sidebarController=_sidebarController;
@property(nonatomic) BOOL nextReadFromURLIsReload; // @synthesize nextReadFromURLIsReload=_nextReadFromURLIsReload;
@property(retain, nonatomic) MSContentDrawViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(nonatomic) BOOL hasOpenedImageFile; // @synthesize hasOpenedImageFile=_hasOpenedImageFile;
@property(copy, nonatomic) MSLayerArray *selectedLayersA; // @synthesize selectedLayersA=_selectedLayersA;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(retain, nonatomic) MSInspectorController *inspectorController; // @synthesize inspectorController=_inspectorController;
@property(retain, nonatomic) MSHistoryMaker *historyMaker; // @synthesize historyMaker=_historyMaker;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSActionController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) MSToolbarConstructor *toolbarConstructor; // @synthesize toolbarConstructor=_toolbarConstructor;
@property(retain, nonatomic) NSView *canvasPlaceholderView; // @synthesize canvasPlaceholderView=_canvasPlaceholderView;
@property(retain, nonatomic) NSView *inspectorPlaceholderView; // @synthesize inspectorPlaceholderView=_inspectorPlaceholderView;
@property(nonatomic) __weak MSMainSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) NSView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSWindow *documentWindow; // @synthesize documentWindow=_documentWindow;
- (void).cxx_destruct;
- (void)copySVG:(id)arg1;
- (id)documentData:(id)arg1 metadataForKey:(id)arg2 object:(id)arg3;
- (void)documentData:(id)arg1 storeMetadata:(id)arg2 forKey:(id)arg3 object:(id)arg4;
@property(retain, nonatomic) NSDictionary *UIMetadata;
- (void)setFileURL:(id)arg1;
- (void)removeViewportForArtboard:(id)arg1;
- (BOOL)canRestoreViewportAfterArtboardEdit:(id)arg1;
- (void)restoreViewportAfterArtboardEdit:(id)arg1;
- (void)storeViewport:(id)arg1 andInstance:(id)arg2 forArtboard:(id)arg3;
- (void)resetHiddenSelectionHandlesTimerAction:(id)arg1;
- (void)documentData:(id)arg1 immediatelyShowSelectionForLayer:(id)arg2;
- (void)documentData:(id)arg1 temporarilyHideSelectionForLayer:(id)arg2;
- (void)temporarilyDisableSelectionHidingDuringBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldDrawSelectionForLayer:(id)arg1;
- (void)onAddPage:(id)arg1;
- (void)flagsChangedNotification:(id)arg1;
- (id)extensionForExportingLayer:(id)arg1;
- (void)sidebarController:(id)arg1 hoveredLayerDidChangeTo:(id)arg2;
- (id)sidebarController:(id)arg1 exportLayers:(id)arg2;
- (id)sidebarControllerContextMenuItemsForCurrentSelection:(id)arg1;
- (void)sidebarController:(id)arg1 validateRemovalOfPage:(id)arg2 withRemovalBlock:(CDUnknownBlockType)arg3;
- (void)sidebarControllerSelectionDidChange:(id)arg1;
- (void)sidebarControllerDidUpdate:(id)arg1;
- (void)showPagesList;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (void)updateSliceCount;
- (void)debugCountObject:(id)arg1 counts:(id)arg2;
- (void)debugCountObjects:(id)arg1;
- (void)logBuggyBezierPaths;
- (void)determineCurrentArtboard;
- (void)layerSelectionDidChange;
- (void)layerTreeLayoutDidChange;
- (void)willRemovePage:(id)arg1;
- (void)didAddPage:(id)arg1;
- (void)didAddArtboard:(id)arg1 toPage:(id)arg2;
- (void)willRemoveArtboard:(id)arg1 fromPage:(id)arg2;
- (void)didUpdateDetailsForArtboard:(id)arg1;
- (void)didUpdateDetailsForPage:(id)arg1;
- (void)currentArtboardDidChange;
- (void)sliceDidChangeVisibility:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)debugStressTestRendering:(id)arg1;
- (void)layerPositionPossiblyChanged;
- (void)startBackgroundCaching;
- (id)addBlankPage;
- (void)toggleClickThrough:(id)arg1;
- (void)findLayer:(id)arg1;
- (void)toggleLayersAndInspectorVisibility:(id)arg1;
- (void)toggleInspectorVisibility:(id)arg1;
- (BOOL)isInPresentationMode;
- (void)toggleLayerListVisibility:(id)arg1;
- (BOOL)isLayerListVisible;
- (void)renameLayer:(id)arg1;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowDidEnterVersionBrowser:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)isRulersVisible;
- (void)toggleRulers;
- (BOOL)currentPopoverHandlesColorMagnifier;
- (void)copyCSSAttributes:(id)arg1;
- (id)pages;
- (id)layerStyles;
- (void)removePage:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (id)artboards;
- (id)grid;
- (id)document;
- (void)pasteStyle:(id)arg1;
- (void)copyStyle:(id)arg1;
- (void)layoutSettings:(id)arg1;
- (void)gridSettings:(id)arg1;
- (void)setStyleAsDefault:(id)arg1;
- (void)returnToDefaultHandler:(id)arg1;
- (id)defaultHandler;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (void)reloadInspector;
- (void)reloadView;
- (void)refreshOverlayOfViews;
- (void)refreshOverlayInAbsoluteRect:(struct CGRect)arg1;
- (id)rootDelegate;
- (void)refreshAfterArtboardDeletion;
- (void)deleteSymbolMasters:(id)arg1;
- (void)closePath:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)historyMakerDidProgressHistory:(id)arg1;
- (void)historyMakerDidRevertHistory:(id)arg1;
- (void)historyMaker:(id)arg1 didApplyHistoryUpdate:(unsigned long long)arg2;
- (void)redoAction:(id)arg1;
- (void)undoAction:(id)arg1;
- (void)documentDidChange:(id)arg1;
- (void)registerHistoryMomentTitle:(id)arg1;
- (void)updateSelectionFollowingChangeToImmutableDocumentData;
- (void)changeToImmutableDocumentData:(id)arg1 pageChanged:(BOOL)arg2;
- (void)setupHistory;
- (id)currentVerticalRulerData;
- (id)currentHorizontalRulerData;
- (void)zoomValueDidChange;
- (void)documentData:(id)arg1 sharedObjectDidChange:(id)arg2;
- (void)performPostPageSwitchUpdates;
- (void)documentData:(id)arg1 didChangeToPage:(id)arg2;
- (BOOL)inspectorIsMain;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (id)closestVisibleIdentifierInToolbarForIdentifier:(id)arg1;
- (BOOL)isSeparatorIdentifier:(id)arg1;
- (void)reversePath:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (id)publisherFileName;
- (void)windowDidResize:(id)arg1;
- (id)currentHandlerKey;
- (id)currentHandler;
- (void)updateFilterSettings;
- (void)onFilterChanged:(id)arg1;
- (void)toggleSliceInteraction:(id)arg1;
- (void)toggleLayerInteraction:(id)arg1;
- (void)toggleLayerHighlight:(id)arg1;
- (void)toggleSelection:(id)arg1;
- (void)validateMenuItemTitleAndState:(id)arg1;
- (BOOL)shouldEnableLocalSharing;
- (BOOL)hasArtboards;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)layerWouldOverlapExistingLayer:(id)arg1 inGroup:(id)arg2;
- (void)offsetLayerIfNecessary:(id)arg1 forInsertingInGroup:(id)arg2;
- (void)addLayer:(id)arg1 changeName:(BOOL)arg2;
- (void)addLayer:(id)arg1;
- (id)findCurrentArtboardGroup;
- (void)coalescedDetermineArtboardNotification:(id)arg1;
- (void)putSelectionBackInCanvasIfPossible;
- (void)coalescedSelectionDidChangeNotification:(id)arg1;
- (id)findSelectedLayers;
- (id)currentPage;
- (void)exportPDFBook:(id)arg1;
- (void)exportSliceLayers:(id)arg1;
@property(retain, nonatomic) NSArray *exportableLayerSelection; // @synthesize exportableLayerSelection=_exportableLayerSelection;
- (id)allExportableLayers;
- (void)returnToNormalHandler;
- (void)currentHandlerChanged;
- (id)windowNibName;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (id)toolbar;
- (BOOL)shouldCreateToolbar;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)loadLayerListPanel;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentData;
- (void)resetDocumentData:(id)arg1;
- (void)unbindLayerSliceInteraction;
- (void)bindLayerSliceInteraction;
- (void)loadInspectorPanel;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)awakeFromNib;
- (void)updateCountDownButton;
- (void)wireDocumentDataToUI;
- (id)currentView;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (id)window;
- (void)dealloc;
- (void)close;
- (void)setDelegatesToNil;
- (void)createActions;
- (void)setSelectedLayers:(id)arg1;
- (id)selectedLayers;
- (id)init;
- (id)exportFramerWithOptions:(id)arg1;
- (id)exportFramer;
- (void)hideMessage:(id)arg1;
- (void)hideMessage;
- (id)shadowViewForContentView:(id)arg1 cornerRadius:(double)arg2;
- (void)displayMessage:(id)arg1 timeout:(double)arg2;
- (void)displayMessage:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)stopAccessingFolderToken:(id)arg1;
- (id)startAccessingFolder:(id)arg1 tokenName:(id)arg2;
- (id)dataForRequest:(id)arg1 ofType:(id)arg2;
- (void)saveExportRequest:(id)arg1 toFile:(id)arg2;
- (id)exportRequestForArtboardOrSlice:(id)arg1;
- (void)saveArtboardOrSlice:(id)arg1 toFile:(id)arg2;
- (id)askForUserInput:(id)arg1 ofType:(long long)arg2 initialValue:(id)arg3;
- (id)askForUserInput:(id)arg1 initialValue:(id)arg2;
- (void)warnAboutOldVersion;
- (BOOL)askToOpenDocumentRepairingMetadata;
- (BOOL)askToOpenDocumentWithMissingFonts:(id)arg1 savingWillChangeFonts:(BOOL)arg2;
- (void)alertDocumentCorruptionWasDetected;
- (void)resetImportedDocument:(id)arg1;
- (BOOL)readImageFromPath:(id)arg1 error:(id *)arg2;
- (id)bitmapLayerWithImageAtURL:(id)arg1;
- (id)addBitmapLayerWithImageAtURL:(id)arg1 toGroup:(id)arg2 fitPixels:(BOOL)arg3 error:(id *)arg4;
- (void)migrateUIMetadataWithDocumentData:(id)arg1;
- (BOOL)readFromDocumentWrapper:(id)arg1 ofType:(id)arg2 wasMigrated:(BOOL)arg3 corruptionDetected:(char *)arg4 error:(id *)arg5;
- (BOOL)processValidationCode:(unsigned long long)arg1 wrapper:(id)arg2 missingFonts:(id)arg3 error:(id *)arg4;
- (id)migrateWithXPCFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)validateWrapperWithXPC:(id)arg1 error:(id *)arg2;
- (BOOL)validateLocallyWithWrapper:(id)arg1 error:(id *)arg2;
- (BOOL)readDocumentFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readEPSFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readPDFFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readSVGFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)reportSaveActionAtURL:(id)arg1 wasAutosave:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)actionClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

