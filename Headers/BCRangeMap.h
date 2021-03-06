//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableIndexSet;

@interface BCRangeMap : NSObject
{
    NSMutableIndexSet *_locations;
    NSMutableDictionary *_locationsToEntries;
}

@property(retain, nonatomic) NSMutableDictionary *locationsToEntries; // @synthesize locationsToEntries=_locationsToEntries;
@property(retain, nonatomic) NSMutableIndexSet *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (void)removeObjectsAtOrBeyondLocation:(unsigned long long)arg1;
- (struct _NSRange)rangeForLocation:(unsigned long long)arg1;
- (id)objectForLocation:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forRange:(struct _NSRange)arg2;
- (id)allObjects;
- (id)allRanges;
- (id)init;

@end

