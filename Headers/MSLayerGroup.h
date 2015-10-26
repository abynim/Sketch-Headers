#import "_MSLayerGroup.h"

#import "MSArrayDelegate.h"
#import "MSSharedObjectInstance.h"

@class NSArray, NSString;

@interface MSLayerGroup : _MSLayerGroup <MSArrayDelegate, MSSharedObjectInstance>
{
    long long ignoreChildrenRefreshCalls;
    BOOL _enableAutomaticScaling;
    BOOL _isOpen;
    BOOL _ignoreNextClickThrough;
    BOOL _ignoreNextSymbolSyncChange;
    BOOL _lightweightContainsSelectedItem;
    long long _hasLayerWithMaskMode;
    long long _preCalculatedHasSelectedLayer;
    NSArray *_relativeChildFrames;
}

+ (unsigned long long)traits;
+ (BOOL)groupBoundsShouldBeIntegral;
+ (struct CGRect)groupBoundsForLayers:(id)arg1;
+ (void)setIgnoreLayerListDelegateCalls:(BOOL)arg1;
+ (id)symbolIDsFromLayers:(id)arg1;
+ (void)moveLayers:(id)arg1 intoGroup:(id)arg2;
+ (id)groupNameForLayers:(id)arg1;
+ (id)groupFromLayers:(id)arg1;
@property(retain, nonatomic) NSArray *relativeChildFrames; // @synthesize relativeChildFrames=_relativeChildFrames;
@property(nonatomic) long long preCalculatedHasSelectedLayer; // @synthesize preCalculatedHasSelectedLayer=_preCalculatedHasSelectedLayer;
@property(nonatomic) BOOL lightweightContainsSelectedItem; // @synthesize lightweightContainsSelectedItem=_lightweightContainsSelectedItem;
@property(nonatomic) BOOL ignoreNextSymbolSyncChange; // @synthesize ignoreNextSymbolSyncChange=_ignoreNextSymbolSyncChange;
@property(nonatomic) BOOL ignoreNextClickThrough; // @synthesize ignoreNextClickThrough=_ignoreNextClickThrough;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) long long hasLayerWithMaskMode; // @synthesize hasLayerWithMaskMode=_hasLayerWithMaskMode;
@property(nonatomic) BOOL enableAutomaticScaling; // @synthesize enableAutomaticScaling=_enableAutomaticScaling;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)addSlice:(id)arg1;
- (void)assignWithOriginalLinkedStyleIfNecessary;
- (id)children;
- (id)layerWithId:(id)arg1;
- (void)dataArray:(id)arg1 didRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (BOOL)calculateHasBlendedLayer;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)resizeChildLayer:(id)arg1 atIndex:(unsigned long long)arg2 oldParentSize:(struct CGSize)arg3 widthChanged:(BOOL)arg4 heightChanged:(BOOL)arg5;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (BOOL)hitTestCornerOfSelectedLayer:(id)arg1 mouse:(struct CGPoint)arg2 zoomValue:(double)arg3;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 force:(BOOL)arg2 zoomValue:(double)arg3;
- (id)layersBelowPoint:(struct CGPoint)arg1 forceClickThrough:(BOOL)arg2 keepLockedLayers:(BOOL)arg3 zoomValue:(double)arg4;
- (id)allLayersWithForcedClickThrough:(BOOL)arg1;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)multiplyBy:(double)arg1;
- (id)layersSharingStyle:(id)arg1;
- (BOOL)resizeRoot:(BOOL)arg1;
- (struct CGRect)requiredRect;
- (BOOL)handleDoubleClick;
- (void)setIsHovering:(BOOL)arg1;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
- (void)deselectAllLayers;
- (void)selectLayers:(id)arg1;
- (BOOL)containsSelectedItem;
- (void)layerFinishedResize;
- (void)layerWillResize;
- (void)deselectLayerAndParent;
- (void)prepareObjectCopy:(id)arg1;
- (struct CGRect)calculateInfluenceRectForBounds;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (void)setLayers:(id)arg1;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)setStyle:(id)arg1;
- (BOOL)hasClickThrough;
- (id)bezierPath;
- (id)defaultStyle;
- (id)defaultName;
- (void)invalidateLightweightCopy:(id)arg1;
- (BOOL)isSharedObject;
- (id)parentGroupRecursive;
- (void)objectDidInit;
- (void)initEmptyObject;
- (id)handlerName;
- (id)CSSAttributeString;
- (BOOL)isExpandedInLayerList;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (id)inspectorViewControllerNames;
- (void)drawHoverWithZoom:(double)arg1;
- (BOOL)canSnapSizeToLayer:(id)arg1;
- (id)addLayerOfType:(id)arg1;
- (void)prepareAsMaskContainer;
- (id)sharedObjectOfType:(unsigned long long)arg1;
- (void)translateChildrenFrameToLayers:(id)arg1;
- (void)moveTransformsToChildren:(id)arg1;
- (id)moveLayersToParent;
- (void)unregisterAsSymbolIfNecessary;
- (id)ungroup;
- (void)setUpNewGroup;
- (void)removeAllLayers;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (void)replaceLayersWithLayers:(id)arg1;
- (void)addLayers:(id)arg1;
- (BOOL)wouldInsertSymbolIntoItself:(id)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)closestSymbolInstance;
- (BOOL)isInstanceOfSameSymbolAs:(id)arg1;
- (BOOL)parentOrSelfIsSymbolWithID:(id)arg1;
- (BOOL)isSymbol;
- (BOOL)isActualSymbol;
- (BOOL)containsSymbols;
- (BOOL)parentOrSelfIsSymbol;
- (BOOL)canBeUsedAsSymbolDirectly;
- (unsigned long long)shouldDraw;
- (Class)rendererClass;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *sharedObjectID;
@property(readonly) Class superclass;

@end

