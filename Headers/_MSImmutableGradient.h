//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class MSPointArray, NSArray;

@interface _MSImmutableGradient : MSImmutableModelObject
{
    double _elipseLength;
    struct CGPoint _from;
    long long _gradientType;
    MSPointArray *_points;
    BOOL _shouldSmoothenOpacity;
    struct CGPoint _to;
    NSArray *_stops;
}

+ (Class)mutableClass;
@property(retain, nonatomic) NSArray *stops; // @synthesize stops=_stops;
@property(nonatomic) struct CGPoint to; // @synthesize to=_to;
@property(nonatomic) BOOL shouldSmoothenOpacity; // @synthesize shouldSmoothenOpacity=_shouldSmoothenOpacity;
@property(retain, nonatomic) MSPointArray *points; // @synthesize points=_points;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) struct CGPoint from; // @synthesize from=_from;
@property(nonatomic) double elipseLength; // @synthesize elipseLength=_elipseLength;
- (void).cxx_destruct;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

