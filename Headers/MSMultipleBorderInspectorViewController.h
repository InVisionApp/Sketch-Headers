//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMultipleStylePartInspectorViewController.h"

#import "BCPopoverDelegate.h"

@class BCPopover, MSBorderOptionsInspectorViewController, MSTextLabelForUpDownField, NSButton, NSString;

@interface MSMultipleBorderInspectorViewController : MSMultipleStylePartInspectorViewController <BCPopoverDelegate>
{
    MSTextLabelForUpDownField *_thicknessLabel;
    NSButton *_addStylePartButton;
    NSButton *_advancedOptionsButton;
    MSBorderOptionsInspectorViewController *_borderOptionsController;
    BCPopover *_popover;
}

@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSBorderOptionsInspectorViewController *borderOptionsController; // @synthesize borderOptionsController=_borderOptionsController;
@property(retain, nonatomic) NSButton *advancedOptionsButton; // @synthesize advancedOptionsButton=_advancedOptionsButton;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *thicknessLabel; // @synthesize thicknessLabel=_thicknessLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (BOOL)shouldShowAdvancedOptionsButton;
- (BOOL)shouldHideAddStylePartButton;
- (void)setLayers:(id)arg1;
- (void)styleDidEnableOrDisable;
- (void)dismissViewController:(id)arg1;
- (void)showAdvancedOptionsAction:(id)arg1;
- (void)prepare;
- (unsigned long long)stylePartType;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

