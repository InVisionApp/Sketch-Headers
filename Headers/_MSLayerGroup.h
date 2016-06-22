//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class NSArray, NSMutableArray, NSObject<NSCopying><NSCoding>;

@interface _MSLayerGroup : MSStyledLayer
{
    BOOL _hasClickThrough;
    struct NSObject *_sharedObjectID;
    NSMutableArray *_layers;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)replaceAllLayersWithLayers:(id)arg1;
- (void)moveLayerIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllLayers;
- (void)removeLayersAtIndexes:(id)arg1;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertLayer:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addLayers:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveLayers:(id)arg1;
- (id)primitiveLayers;
- (void)setPrimitiveSharedObjectID:(struct NSObject *)arg1;
- (struct NSObject *)primitiveSharedObjectID;
- (void)setPrimitiveHasClickThrough:(BOOL)arg1;
- (BOOL)primitiveHasClickThrough;
- (void)setLayers:(id)arg1;
@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(nonatomic) BOOL hasClickThrough; // @synthesize hasClickThrough=_hasClickThrough;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

