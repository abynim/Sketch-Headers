#import "NSObject.h"

@class MSContentTile;

@interface MSContentTileRefreshCollector : NSObject
{
    BOOL isCoalescingRefreshes;
    BOOL isFirstRefresh;
    struct CGRect refreshRect;
    MSContentTile *_contentTile;
}

@property(retain, nonatomic) MSContentTile *contentTile; // @synthesize contentTile=_contentTile;
- (void).cxx_destruct;
- (void)endRefreshCoalescing;
- (void)beginRefreshCoalescing;
- (void)coalesceRefreshRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(id)arg1;

@end

