#import "_MSTextLayer.h"

#import "MSFirstLineTypesetterDelegate.h"
#import "NSTextStorageDelegate.h"

@class MSColor, NSBezierPath, NSDictionary, NSString, NSTextStorage;

@interface MSTextLayer : _MSTextLayer <NSTextStorageDelegate, MSFirstLineTypesetterDelegate>
{
    BOOL isEditingText;
    int ignoreDelegateNotificationsCounter;
    NSBezierPath *_cachedBezierRepresentation;
    NSTextStorage *_storageBeforeDragging;
    long long _heightBeforeResizing;
    id <MSTextLayerEditingDelegate> _editingDelegate;
    NSBezierPath *_lightweightFirstUnderlyingShapePath;
    double _lightweightFontSize;
    struct CGRect _previousRectCache;
}

+ (Class)layerSnapperObjectClass;
@property(nonatomic) double lightweightFontSize; // @synthesize lightweightFontSize=_lightweightFontSize;
@property(retain, nonatomic) NSBezierPath *lightweightFirstUnderlyingShapePath; // @synthesize lightweightFirstUnderlyingShapePath=_lightweightFirstUnderlyingShapePath;
@property(nonatomic) __weak id <MSTextLayerEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(nonatomic) long long heightBeforeResizing; // @synthesize heightBeforeResizing=_heightBeforeResizing;
@property(copy, nonatomic) NSTextStorage *storageBeforeDragging; // @synthesize storageBeforeDragging=_storageBeforeDragging;
@property(nonatomic) struct CGRect previousRectCache; // @synthesize previousRectCache=_previousRectCache;
@property(retain, nonatomic) NSBezierPath *cachedBezierRepresentation; // @synthesize cachedBezierRepresentation=_cachedBezierRepresentation;
- (void).cxx_destruct;
- (BOOL)constrainProportions;
- (id)usedFonts;
- (void)resizeToFitNewWidthComingFrom:(double)arg1;
- (void)resizeTextToFitNewHeight:(long long)arg1;
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
- (struct CGRect)dirtyRectForBounds;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)recordRelativeRect;
- (id)bezierPathFromGlyphsInBounds;
- (id)bezierPathFromGlyphsInFrame;
- (id)bezierPath;
- (id)bezierPathWithTransforms;
- (double)startingPositionOnPath:(id)arg1;
- (double)defaultLineHeight;
- (id)font;
- (void)changeFont:(id)arg1;
- (id)handlerName;
- (BOOL)shouldDrawSelection;
- (unsigned long long)selectionCornerMask;
- (id)textContainer;
- (id)layoutManager;
- (id)shapeToUseForTextOnPath;
- (void)setIsEditingText:(BOOL)arg1;
- (BOOL)isEditingText;
- (void)prepareForUndo;
- (void)setStorageContents:(id)arg1;
- (void)setRectAccountingForClipped:(struct CGRect)arg1;
- (void)adjustFrameToFit;
- (void)finishEditing;
- (void)refreshForPropertyChanged:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (double)baselineAdjustmentForTypesetter:(id)arg1;
- (void)syncTextStyleAttributes;
- (struct CGSize)textContainerSize;
- (id)createTextContainer;
- (id)createLayoutManager;
- (void)setUpText;
- (void)rectWidthDidChange:(id)arg1;
- (void)layerSizeDidChangeFromCorner:(long long)arg1;
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
- (id)CSSAttributes;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (id)commonColors;
- (id)inspectorViewControllerNames;
- (void)drawHoverWithZoom:(double)arg1;
- (void)changeTextColorTo:(id)arg1;
- (void)changeColor:(id)arg1;
- (BOOL)supportsInnerOuterBorders;
- (id)supportedPasteboardTypesForStyleCopying;
- (void)migratePropertiesFromV44OrEarlierWithCoder:(id)arg1;
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

