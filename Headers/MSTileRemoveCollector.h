#import "NSObject.h"

#import "MSTileDelegate.h"

@class CALayer, NSString;

@interface MSTileRemoveCollector : NSObject <MSTileDelegate>
{
    long long _tilesToFinishRendering;
    CALayer *_masterTile;
    id <MSTileRemoveCollector> _delegate;
}

@property(nonatomic) __weak id <MSTileRemoveCollector> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CALayer *masterTile; // @synthesize masterTile=_masterTile;
- (void).cxx_destruct;
- (void)clear;
- (void)collectTiles:(id)arg1;
- (void)tileDidDraw:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

