#import "_MSArtboardGroup.h"

#import "MSLayerWithBackgroundColour.h"
#import "MSRootLayer.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid, NSString;

@interface MSArtboardGroup : _MSArtboardGroup <MSRootLayer, MSLayerWithBackgroundColour>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (id)rootForNameUniqueing;
- (void)layerDidResizeFromRect:(struct CGRect)arg1;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveToEmptyLocation;
- (void)removeFromParent;
- (BOOL)resizeRoot:(BOOL)arg1;
- (id)parentRoot;
- (id)parentArtboard;
- (id)slice;
- (struct CGRect)calculateDirtyRectForBounds;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
@property(nonatomic) struct CGPoint rulerBase;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
- (double)rotation;
- (BOOL)isOpen;
- (BOOL)canBeTransformed;
- (BOOL)canBeContainedByGroup;
- (BOOL)enableAutomaticScaling;
- (BOOL)hasClickThrough;
- (id)layersBelowPoint:(struct CGPoint)arg1 forceClickThrough:(BOOL)arg2 keepLockedLayers:(BOOL)arg3;
- (void)setName:(id)arg1;
- (id)defaultName;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (id)defaultArtboardStyle;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (void)initEmptyObject;
- (id)inspectorViewControllerNames;
- (id)parentForInsertingLayers;
- (id)displayName;
- (id)parentRootForAbsoluteRect;
- (Class)rendererClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

