#import "_MSTextLayer.h"

#import "MSColorUser.h"
#import "MSFirstLineTypesetterDelegate.h"
#import "NSTextStorageDelegate.h"

@class MSColor, NSBezierPath, NSDictionary, NSString, NSTextStorage;

@interface MSTextLayer : _MSTextLayer <MSColorUser, NSTextStorageDelegate, MSFirstLineTypesetterDelegate>
{
    BOOL isEditingText;
    int ignoreDelegateNotificationsCounter;
    NSBezierPath *_cachedBezierRepresentation;
    NSTextStorage *_storageBeforeResize;
    id <MSTextLayerEditingDelegate> _editingDelegate;
    NSBezierPath *_lightweightFirstUnderlyingShapePath;
    double _lightweightFontSize;
    struct CGSize _sizeBeforeResize;
    struct CGRect _previousRectCache;
}

+ (unsigned long long)traits;
+ (void)setTextAlignment:(unsigned long long)arg1 forLayers:(id)arg2;
@property(nonatomic) struct CGSize sizeBeforeResize; // @synthesize sizeBeforeResize=_sizeBeforeResize;
@property(nonatomic) double lightweightFontSize; // @synthesize lightweightFontSize=_lightweightFontSize;
@property(retain, nonatomic) NSBezierPath *lightweightFirstUnderlyingShapePath; // @synthesize lightweightFirstUnderlyingShapePath=_lightweightFirstUnderlyingShapePath;
@property(nonatomic) __weak id <MSTextLayerEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(copy, nonatomic) NSTextStorage *storageBeforeResize; // @synthesize storageBeforeResize=_storageBeforeResize;
@property(nonatomic) struct CGRect previousRectCache; // @synthesize previousRectCache=_previousRectCache;
@property(retain, nonatomic) NSBezierPath *cachedBezierRepresentation; // @synthesize cachedBezierRepresentation=_cachedBezierRepresentation;
- (void).cxx_destruct;
- (BOOL)useProportionalResizingFromCorner:(long long)arg1;
- (BOOL)constrainProportions;
- (id)usedFonts;
- (BOOL)treatAsShiftedForCorner:(long long)arg1 onlyForFlexible:(BOOL)arg2;
- (void)calculateTextIsClippedAfterResizeFromCorner:(long long)arg1;
- (void)resizeFontToFitFromRect:(struct CGRect)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (void)replaceTextStorageTextBy:(id)arg1;
- (void)makeLowercase:(id)arg1;
- (void)makeUppercase:(id)arg1;
- (void)multiplyBy:(double)arg1;
- (id)attributeForKey:(id)arg1;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (void)addAttributes:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)setAttributes:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 forRange:(struct _NSRange)arg3;
- (void)ignoreDelegateNotificationsInBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *stringValue;
- (void)setStringValueWithoutUndo:(id)arg1;
- (BOOL)isFrameEqualForSync:(id)arg1;
- (BOOL)textStorageIsEqual:(id)arg1;
- (void)syncTextStorageTo:(id)arg1;
- (void)copyTextStorageTo:(id)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (void)layerStyleDidChange;
- (BOOL)isEmpty;
- (BOOL)shouldUseCachedBezierRepresentation;
@property(copy, nonatomic) NSDictionary *styleAttributes;
- (void)setNilValueForKey:(id)arg1;
@property(copy, nonatomic) MSColor *textColor;
@property(nonatomic) double lineSpacing;
- (double)baseLineHeight;
@property(nonatomic) double characterSpacing;
@property(retain, nonatomic) NSString *fontPostscriptName;
- (void)setFont:(id)arg1;
@property(nonatomic) double fontSize;
@property(nonatomic) unsigned long long textAlignment;
- (void)setLeading:(double)arg1;
- (double)leading;
- (id)paragraphStyle;
- (void)setKerning:(float)arg1;
- (float)kerning;
- (double)totalHeightOfFont:(id)arg1;
- (struct CGRect)influenceRectForBounds;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)layerWillResize;
- (id)bezierPathFromGlyphsInBounds;
- (id)bezierPathFromGlyphsInFrame;
- (id)bezierPath;
- (id)bezierPathWithTransforms;
- (double)startingPositionOnPath:(id)arg1;
- (double)defaultLineHeight;
- (id)font;
- (void)changeFont:(id)arg1;
- (BOOL)shouldDrawSelection;
- (unsigned long long)selectionCornerMaskWithZoomValue:(double)arg1;
- (id)textContainer;
- (id)layoutManager;
- (id)shapeToUseForTextOnPath;
- (void)setIsEditingText:(BOOL)arg1;
- (BOOL)isEditingText;
- (void)changeListType:(id)arg1;
- (void)prepareForUndo;
- (void)setStorageContents:(id)arg1;
- (void)setRectAccountingForClipped:(struct CGRect)arg1;
- (void)adjustFrameToFit;
- (void)parentWillResizeLayerToRect:(struct CGRect)arg1;
- (void)finishEditing;
- (void)textStorageDidProcessEditing:(id)arg1;
- (double)baselineAdjustmentForTypesetter:(id)arg1;
- (BOOL)compareAttributes:(id)arg1 withAttributes:(id)arg2;
- (void)syncTextStyleAttributes;
- (struct CGSize)textContainerSize;
- (id)createTextContainer;
- (id)createLayoutManager;
- (void)setUpText;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)adjustContainerWidthTo:(double)arg1;
- (void)setupBehaviour:(BOOL)arg1;
- (void)setTextBehaviour:(long long)arg1;
- (id)defaultName;
- (void)sanityCheckText;
- (void)setStyle:(id)arg1;
- (void)initObjectWithCoder:(id)arg1;
- (void)objectDidInit;
- (void)initEmptyObject;
- (id)initWithFrame:(struct CGRect)arg1 attributes:(id)arg2 type:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)handlerName;
- (id)CSSAttributes;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (void)layerDidResizeFromInspector;
- (id)inspectorViewControllerNames;
- (void)drawHoverWithZoom:(double)arg1;
- (Class)layerSnapperObjectClass;
- (void)changeTextColorTo:(id)arg1;
- (void)changeColor:(id)arg1;
- (BOOL)supportsInnerOuterBorders;
- (id)supportedPasteboardTypesForStyleCopying;
- (void)migratePropertiesFromV44OrEarlierWithCoder:(id)arg1;
- (void)updateColorCounter:(id)arg1;
- (void)trackColors:(id)arg1;
- (void)setupWithLayerBuilderDictionary:(id)arg1;
- (unsigned long long)shouldDraw;
- (BOOL)shouldRenderInTransparencyLayer;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)elementForSpan:(id)arg1 origin:(struct CGPoint)arg2 exporter:(id)arg3 text:(id)arg4;
- (id)spanInfoForRun:(struct _NSRange)arg1 charAttributes:(id)arg2 text:(id)arg3;
- (void)addSVGAttributes:(id)arg1 forCharacterAttributes:(id)arg2 forExporter:(id)arg3 origin:(struct CGPoint *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)svgStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

