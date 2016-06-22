//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPasteboardReader.h"
#import "MSPasteboardWriter.h"

@class NSString;

@interface MSPasteboardLayersReaderWriter : NSObject <MSPasteboardReader, MSPasteboardWriter>
{
}

- (void)addObjectIDToNameMappingForCellOverrides:(id)arg1 toMapping:(id)arg2 document:(id)arg3;
- (void)addObjectIDToNameMappingForOverrides:(id)arg1 toMapping:(id)arg2 document:(id)arg3;
- (id)objectIDToLayerNameMappingFromLayers:(id)arg1 symbols:(id)arg2 document:(id)arg3;
- (id)usedSharedObjectsInDocument:(id)arg1 layers:(id)arg2;
- (id)usedSymbolsInContainer:(id)arg1 document:(id)arg2 skip:(id)arg3;
- (id)usedSymbolsInContainer:(id)arg1 document:(id)arg2;
- (id)dataForPasteboardData:(id)arg1;
- (void)writeData:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)canWriteDataToPasteboard:(id)arg1;
- (id)pasteboardDataFromData:(id)arg1;
- (id)pasteboardDataFromPasteboard:(id)arg1 sender:(id)arg2;
- (id)supportedPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

