//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MSImmutableArtboardGroup, MSImmutableDocumentData, MSImmutablePage;

@interface MSIOSRefreshRendererOperation : NSOperation
{
    MSImmutableArtboardGroup *_artboardCopy;
    MSImmutablePage *_pageCopy;
    MSImmutableDocumentData *_documentCopy;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) MSImmutableDocumentData *documentCopy; // @synthesize documentCopy=_documentCopy;
@property(retain, nonatomic) MSImmutablePage *pageCopy; // @synthesize pageCopy=_pageCopy;
@property(retain, nonatomic) MSImmutableArtboardGroup *artboardCopy; // @synthesize artboardCopy=_artboardCopy;
- (void).cxx_destruct;
- (id)sliceForArtboard:(id)arg1;
- (void)main;

@end
