//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableStyledLayer.h"

#import "MSStyledLayer.h"

@class MSImmutableStyle, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableStyledLayer : _MSImmutableStyledLayer <MSStyledLayer>
{
}

+ (unsigned long long)traits;
- (unsigned long long)windingRule;
@property(readonly, nonatomic) BOOL hasBitmapStylesEnabled;
@property(readonly, nonatomic) MSImmutableStyle *usedStyle;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (void)trackColorsForBasicFill:(id)arg1 tracker:(id)arg2;
- (void)trackColors:(id)arg1;
- (BOOL)shouldSkipDrawing;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)renderBitmapEffects:(id)arg1;
- (id)addGroupContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addGradientsToDocument:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric; // @dynamic styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

