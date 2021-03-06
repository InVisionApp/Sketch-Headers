//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCustomShapeLayer.h"

@interface _MSStarShape : MSCustomShapeLayer
{
    long long _numberOfPoints;
    double _radius;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveRadius:(double)arg1;
- (double)primitiveRadius;
- (void)setPrimitiveNumberOfPoints:(long long)arg1;
- (long long)primitiveNumberOfPoints;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) long long numberOfPoints; // @synthesize numberOfPoints=_numberOfPoints;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

