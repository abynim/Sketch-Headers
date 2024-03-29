//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSLayer.h>

#import <SketchControllers/MSDataApplicable-Protocol.h>
#import <SketchControllers/MSHoverableItem-Protocol.h>
#import <SketchControllers/MSLayerDataType-Protocol.h>
#import <SketchControllers/MSLayerListLayerExtensions-Protocol.h>
#import <SketchControllers/MSSnappable-Protocol.h>

@class MSLayoutDimension, MSLayoutPosition, MSModelObject, MSPath, NSString;
@protocol BCSortable><MSSharedObjectStyling;

@interface MSLayer (ReplaceWithSymbol) <MSHoverableItem, MSSnappable, MSDataApplicable, MSLayerDataType, MSLayerListLayerExtensions>
+ (void)alignLayers:(id)arg1 toValue:(double)arg2 forKey:(id)arg3;
+ (struct CGRect)alignmentRectForLayers:(id)arg1;
+ (void)alignLayers:(id)arg1 withMode:(unsigned long long)arg2 toKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)alignmentPathsForLayers:(id)arg1 withMode:(unsigned long long)arg2 toKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)alignmentPathsForLayers:(id)arg1 toValue:(double)arg2 forKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)translatedPathsForLayerUnion:(id)arg1 alignmentValue:(double)arg2 key:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)translatedPathForLayer:(id)arg1 alignmentValue:(double)arg2 key:(id)arg3 pixelFit:(BOOL)arg4;
+ (void)adjustAbsoluteRepresentationForLayerRepresentation:(id)arg1 absoluteRect:(struct CGRect)arg2 alignmentValue:(double)arg3 key:(id)arg4 shouldPixelFit:(BOOL)arg5;
+ (id)layerOfDataType:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingNodeName;
- (id)replaceWithInstanceOfSymbol:(id)arg1;
- (BOOL)canConvertToOutlines;
- (id)layersByConvertingToOutlines;
- (BOOL)matchesLayerListNode:(id)arg1;
@property(readonly, nonatomic) MSLayer *hoveredLayer;
- (BOOL)canBeHoveredOnPage:(id)arg1;
@property(readonly) MSPath *hoverPath;
- (BOOL)canSnap:(unsigned long long)arg1 toLayer:(id)arg2;
@property(readonly, nonatomic) MSLayer *coordinateSpace;
@property(readonly, nonatomic) MSLayoutPosition *midXHeightAnchor;
@property(readonly, nonatomic) MSLayoutPosition *baselineAnchor;
@property(readonly, nonatomic) MSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) MSLayoutDimension *widthAnchor;
@property(readonly, nonatomic) MSLayoutPosition *centerYAnchor;
@property(readonly, nonatomic) MSLayoutPosition *centerXAnchor;
@property(readonly, nonatomic) MSLayoutPosition *bottomAnchor;
@property(readonly, nonatomic) MSLayoutPosition *topAnchor;
@property(readonly, nonatomic) MSLayoutPosition *rightAnchor;
@property(readonly, nonatomic) MSLayoutPosition *leftAnchor;
- (void)enumerateAnchorsForSnappingWithMask:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MSModelObject<BCSortable><MSSharedObjectStyling> *sharedMaster;
@property(readonly, nonatomic) unsigned long long shareableObjectType;
- (void)applyData:(id)arg1 fromDataSupplier:(id)arg2 identifier:(id)arg3;
@property(readonly, nonatomic) BOOL isActivePartInBooleanOperation;
@property(readonly, nonatomic) BOOL canChangeBooleanOperation;
- (id)parentForInsertingLayers;
- (id)displayName;
- (void)changeColor:(id)arg1;
- (BOOL)supportsMultipleShadows;
- (BOOL)supportsInnerOuterBorders;
- (id)absolutePathTranslatedBy:(struct CGPoint)arg1;
- (void)fillEmptyLayerWithData:(id)arg1 fromSupplier:(id)arg2;
- (id)applicableDataSupplierIdentifier;
- (BOOL)hasRefreshableDataWithDataManager:(id)arg1;
- (unsigned long long)applicableDataTypes;
@property(readonly, nonatomic) unsigned long long dataType;
- (void)calculateLayerListPreviewForState:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)cachedPreviewIconWithState:(unsigned long long)arg1;
- (id)layerListPreviewCacheKeyForTraits:(long long)arg1;
- (long long)calculatePreviewIconTraitsForState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long badgeType;
- (id)childrenForLayerList;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
- (id)cloneDictionaryReplacingImages:(id)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isMasked;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
@property(readonly, nonatomic) BOOL lockedOnCanvas;
@property(readonly, nonatomic) BOOL containedByHiddenAncestorNode;
@property(readonly, nonatomic) BOOL canBeHidden;
@property(readonly, nonatomic) BOOL hiddenOnCanvas;
@property(readonly, nonatomic) BOOL isSelectedInLayerList;
@property(readonly, nonatomic) BOOL expandableInLayerList;
@property(readonly, nonatomic) NSString *outlineViewNodeIdentifier;
- (BOOL)validateNodeName:(id *)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *nodeName;
- (id)badgeMenuConfigurator;
- (id)maskIconWithState:(unsigned long long)arg1;
- (void)layerListPreviewForState:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)previewIconWithState:(unsigned long long)arg1;
- (long long)previewIconTraitsForState:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isPreviewDependentOnExpansionState;
@property(readonly, nonatomic) BOOL previewShouldIndicateSharedStyle;
@property(readonly, nonatomic) BOOL hasBadgedIcon;
@property(readonly, nonatomic) BOOL isEditableInLayerList;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) unsigned long long filterTypeMask;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic) id layerListImmutable;
- (id)boundingBoxPath:(BOOL)arg1;
- (id)canvasOverlayPath:(BOOL)arg1;
- (struct CGRect)minimumAdjustedRectForValue:(double)arg1 axis:(unsigned long long)arg2 anchor:(long long)arg3;
- (struct CGRect)boundsOfParentLayer;
- (void)layerDidResizeFromInspector:(unsigned long long)arg1;
- (id)styleForBooleanOperation;

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGPoint center;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isExpanded;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly) Class superclass;
@end

