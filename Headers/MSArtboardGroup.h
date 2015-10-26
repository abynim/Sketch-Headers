#import "_MSArtboardGroup.h"

#import "MSLayerWithBackgroundColour.h"
#import "MSRootLayer.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid, NSString;

@interface MSArtboardGroup : _MSArtboardGroup <MSRootLayer, MSLayerWithBackgroundColour>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

+ (unsigned long long)traits;
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)rootForNameUniqueing;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveToEmptyLocation;
- (void)setRect:(struct CGRect)arg1;
- (void)removeFromParent;
- (BOOL)resizeRoot:(BOOL)arg1;
- (id)parentRoot;
- (id)parentArtboard;
- (id)slice;
- (struct CGRect)calculateInfluenceRectForBounds;
- (BOOL)hasGuides;
- (struct CGRect)influenceRectForBounds;
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
- (id)layersBelowPoint:(struct CGPoint)arg1 forceClickThrough:(BOOL)arg2 keepLockedLayers:(BOOL)arg3 zoomValue:(double)arg4;
- (void)setName:(id)arg1;
- (id)defaultName;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 force:(BOOL)arg2 zoomValue:(double)arg3;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)includeInLayersBelowPoint;
- (BOOL)hitTest:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (id)defaultArtboardStyle;
- (void)invalidateLightweightCopy:(id)arg1;
- (void)initEmptyObject;
- (BOOL)canBeHidden;
- (id)inspectorViewControllerNames;
- (id)badgeMap;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)previewImages;
- (unsigned long long)displayType;
- (id)parentForInsertingLayers;
- (id)displayName;
- (id)webExporterRepresentationOnPage:(id)arg1;
- (id)parentRootForAbsoluteRect;
- (void)migratePropertiesFromV57OrEarlierWithCoder:(id)arg1;
- (BOOL)canBePartOfSymbol;
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

