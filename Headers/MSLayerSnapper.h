#import "NSObject.h"

@class MSLayerSnapperData;

@interface MSLayerSnapper : NSObject
{
    BOOL _useAlignmentGuides;
    id <MSBasicDelegate> _delegate;
    double _zoomValue;
    MSLayerSnapperData *_snapperData;
}

@property(retain, nonatomic) MSLayerSnapperData *snapperData; // @synthesize snapperData=_snapperData;
@property(nonatomic) BOOL useAlignmentGuides; // @synthesize useAlignmentGuides=_useAlignmentGuides;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)snapsForLayers:(id)arg1 skipLayers:(id)arg2;
- (void)snapLayer:(id)arg1 enumerations:(id)arg2 lines:(id)arg3 visible:(BOOL)arg4 snap:(BOOL)arg5 resize:(BOOL)arg6 edgesMask:(long long)arg7;
- (void)snapLayer:(id)arg1 toLines:(id)arg2 visible:(BOOL)arg3 snap:(BOOL)arg4 resize:(BOOL)arg5 edges:(unsigned long long)arg6;
- (void)changeLayer:(id)arg1 forLine:(id)arg2 visible:(BOOL)arg3 direction:(id)arg4 snap:(BOOL)arg5 block:(CDUnknownBlockType)arg6;
- (void)snapLayer:(id)arg1 snap:(BOOL)arg2 resize:(BOOL)arg3 rulersVisible:(BOOL)arg4 edges:(unsigned long long)arg5;
- (id)snapLayerKeys:(id)arg1 rulersVisible:(BOOL)arg2;
- (id)snapLayerResize:(id)arg1 rulersVisible:(BOOL)arg2 edges:(unsigned long long)arg3;
- (id)snapLayerDragged:(id)arg1 rulersVisible:(BOOL)arg2;
- (BOOL)snapLayerSize:(id)arg1 snap:(BOOL)arg2 edges:(long long)arg3;
- (BOOL)rect:(struct CGRect)arg1 isOnLineWithRect:(struct CGRect)arg2 inDirection:(long long)arg3;
- (void)snapLayer:(id)arg1 againstLayers:(id)arg2 inDirection:(id)arg3 resize:(BOOL)arg4;
- (id)distanceRectangleBetweenLayer:(id)arg1 andLayer:(id)arg2 inDirection:(id)arg3;
- (id)distanceRectanglesBetweenLayers:(id)arg1 inDirection:(id)arg2;
- (id)layersOnLineFromLayer:(id)arg1 inDirection:(id)arg2 order:(long long)arg3;
- (void)snapLayer:(id)arg1 onAxis:(id)arg2 resize:(BOOL)arg3;
- (BOOL)snapLayerDistance:(id)arg1 edges:(long long)arg2 resize:(BOOL)arg3;

@end

