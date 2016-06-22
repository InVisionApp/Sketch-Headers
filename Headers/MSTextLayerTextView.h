//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class MSHangingGlyphView, NSDictionary, NSTimer;

@interface MSTextLayerTextView : NSTextView
{
    MSHangingGlyphView *_hangingGlyphView;
    NSTimer *_hideSelectionTimer;
    NSDictionary *_selectedTextAttributesBackup;
}

@property(copy, nonatomic) NSDictionary *selectedTextAttributesBackup; // @synthesize selectedTextAttributesBackup=_selectedTextAttributesBackup;
@property(retain, nonatomic) NSTimer *hideSelectionTimer; // @synthesize hideSelectionTimer=_hideSelectionTimer;
@property(nonatomic) __weak MSHangingGlyphView *hangingGlyphView; // @synthesize hangingGlyphView=_hangingGlyphView;
- (void).cxx_destruct;
- (struct CGRect)rectForSelectedRange;
- (void)dealloc;
- (void)didChangeSelection:(id)arg1;
- (void)didChangeText;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)selectSimilar:(id)arg1;
- (void)hideSelectionTimerFired:(id)arg1;
- (id)makeHideSelectionTimer;
- (void)paste:(id)arg1;
- (id)readablePasteboardTypes;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (void)hideSelectionTemporarily;
- (void)mouseDown:(id)arg1;
- (BOOL)hitTestFromEvent:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

