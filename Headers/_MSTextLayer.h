//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class MSAttributedString, MSImageData;

@interface _MSTextLayer : MSStyledLayer
{
    BOOL _automaticallyDrawOnUnderlyingPath;
    BOOL _dontSynchroniseWithSymbol;
    BOOL _heightIsClipped;
    MSAttributedString *_attributedString;
    long long _lineSpacingBehaviour;
    MSImageData *_preview;
    long long _textBehaviour;
    struct CGRect _glyphBounds;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveTextBehaviour:(long long)arg1;
- (long long)primitiveTextBehaviour;
- (void)setPrimitivePreview:(id)arg1;
- (id)primitivePreview;
- (void)setPrimitiveLineSpacingBehaviour:(long long)arg1;
- (long long)primitiveLineSpacingBehaviour;
- (void)setPrimitiveHeightIsClipped:(BOOL)arg1;
- (BOOL)primitiveHeightIsClipped;
- (void)setPrimitiveGlyphBounds:(struct CGRect)arg1;
- (struct CGRect)primitiveGlyphBounds;
- (void)setPrimitiveDontSynchroniseWithSymbol:(BOOL)arg1;
- (BOOL)primitiveDontSynchroniseWithSymbol;
- (void)setPrimitiveAutomaticallyDrawOnUnderlyingPath:(BOOL)arg1;
- (BOOL)primitiveAutomaticallyDrawOnUnderlyingPath;
- (void)setPrimitiveAttributedString:(id)arg1;
- (id)primitiveAttributedString;
@property(nonatomic) long long textBehaviour; // @synthesize textBehaviour=_textBehaviour;
@property(retain, nonatomic) MSImageData *preview; // @synthesize preview=_preview;
@property(nonatomic) long long lineSpacingBehaviour; // @synthesize lineSpacingBehaviour=_lineSpacingBehaviour;
@property(nonatomic) BOOL heightIsClipped; // @synthesize heightIsClipped=_heightIsClipped;
@property(nonatomic) struct CGRect glyphBounds; // @synthesize glyphBounds=_glyphBounds;
@property(nonatomic) BOOL dontSynchroniseWithSymbol; // @synthesize dontSynchroniseWithSymbol=_dontSynchroniseWithSymbol;
@property(nonatomic) BOOL automaticallyDrawOnUnderlyingPath; // @synthesize automaticallyDrawOnUnderlyingPath=_automaticallyDrawOnUnderlyingPath;
@property(retain, nonatomic) MSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

