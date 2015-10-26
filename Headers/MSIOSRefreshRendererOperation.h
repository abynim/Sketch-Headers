#import "NSOperation.h"

@class MSArtboardGroup, MSPage;

@interface MSIOSRefreshRendererOperation : NSOperation
{
    MSArtboardGroup *_artboardCopy;
    MSPage *_pageCopy;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) MSPage *pageCopy; // @synthesize pageCopy=_pageCopy;
@property(retain, nonatomic) MSArtboardGroup *artboardCopy; // @synthesize artboardCopy=_artboardCopy;
- (void).cxx_destruct;
- (id)sliceForArtboard:(id)arg1;
- (void)main;

@end

