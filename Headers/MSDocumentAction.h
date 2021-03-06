//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAction.h"

#import "NSMenuDelegate.h"

@class MSDocument, NSString;

@interface MSDocumentAction : MSAction <NSMenuDelegate>
{
    MSDocument *_document;
    id <MSBasicDelegate> _delegate;
}

@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)contextForActionObservers;
@property(readonly, nonatomic) NSString *historyMomentTitle;
- (void)doPerformAction:(id)arg1;
- (void)refreshOverlayOfViews;
- (id)contentDrawView;
- (id)currentPage;
- (void)switchToNormalHandler;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (id)currentHandler;
- (BOOL)isInNormalHandler;
- (id)currentHandlerKey;
- (id)selectedLayers;
- (id)initWithDocument:(id)arg1;
- (id)menu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

