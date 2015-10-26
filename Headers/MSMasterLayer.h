#import "CALayer.h"

@class NSSet;

@interface MSMasterLayer : CALayer
{
    double _originalZoomLevel;
    NSSet *_tilesToObserve;
    unsigned long long _finishedTileCount;
}

+ (id)masterLayerAtZoomLevel:(double)arg1;
@property(nonatomic) unsigned long long finishedTileCount; // @synthesize finishedTileCount=_finishedTileCount;
@property(retain, nonatomic) NSSet *tilesToObserve; // @synthesize tilesToObserve=_tilesToObserve;
@property(nonatomic) double originalZoomLevel; // @synthesize originalZoomLevel=_originalZoomLevel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopRemovalObserving;
- (void)clear;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeWhenNewTilesAreFinished:(id)arg1;
- (double)layerZoom;
@property(readonly, nonatomic) BOOL hasZoomed;
- (void)zoomBy:(double)arg1;
@property(readonly, nonatomic) double currentZoomLevel;

@end

