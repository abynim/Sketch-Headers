#import "CHViewController.h"

#import "MSSectionProtocol.h"
#import "NSMenuDelegate.h"

@class MSElementsInspectorSection, NSArray, NSButton, NSNumberFormatter, NSString, NSTextField, NSView;

@interface MSLayerInspectorViewController : CHViewController <MSSectionProtocol, NSMenuDelegate>
{
    BOOL _shouldShowPositions;
    BOOL _shouldShowSharedStyles;
    BOOL _shouldShowLayerSpecificProperties;
    BOOL _shouldShowBlendingProperties;
    NSArray *_layers;
    NSView *_positionView;
    NSView *_lineView;
    NSView *_artboardView;
    NSTextField *_xTextField;
    NSTextField *_yTextField;
    NSTextField *_artboardXField;
    NSTextField *_artboardYField;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSTextField *_artboardWidthField;
    NSTextField *_artboardHeightField;
    NSButton *_lockProportionsButton;
    MSElementsInspectorSection *_sharedStyleController;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) MSElementsInspectorSection *sharedStyleController; // @synthesize sharedStyleController=_sharedStyleController;
@property(nonatomic) BOOL shouldShowBlendingProperties; // @synthesize shouldShowBlendingProperties=_shouldShowBlendingProperties;
@property(nonatomic) BOOL shouldShowLayerSpecificProperties; // @synthesize shouldShowLayerSpecificProperties=_shouldShowLayerSpecificProperties;
@property(nonatomic) BOOL shouldShowSharedStyles; // @synthesize shouldShowSharedStyles=_shouldShowSharedStyles;
@property(nonatomic) BOOL shouldShowPositions; // @synthesize shouldShowPositions=_shouldShowPositions;
@property(nonatomic) __weak NSButton *lockProportionsButton; // @synthesize lockProportionsButton=_lockProportionsButton;
@property(nonatomic) __weak NSTextField *artboardHeightField; // @synthesize artboardHeightField=_artboardHeightField;
@property(nonatomic) __weak NSTextField *artboardWidthField; // @synthesize artboardWidthField=_artboardWidthField;
@property(nonatomic) __weak NSTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(nonatomic) __weak NSTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
@property(nonatomic) __weak NSTextField *artboardYField; // @synthesize artboardYField=_artboardYField;
@property(nonatomic) __weak NSTextField *artboardXField; // @synthesize artboardXField=_artboardXField;
@property(nonatomic) __weak NSTextField *yTextField; // @synthesize yTextField=_yTextField;
@property(nonatomic) __weak NSTextField *xTextField; // @synthesize xTextField=_xTextField;
@property(retain, nonatomic) NSView *artboardView; // @synthesize artboardView=_artboardView;
@property(retain, nonatomic) NSView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSView *positionView; // @synthesize positionView=_positionView;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (BOOL)hasLineShapeLayer;
- (BOOL)layerIsGroup;
- (BOOL)layerIsArtboardOrSlice;
- (id)views;
- (id)valueForUndefinedKey:(id)arg1;
- (id)document;
- (void)refreshAction:(id)arg1;
- (id)inspectorsWithProperContent;
- (id)layerOrContentsOfLayer:(id)arg1 ifKindOfClass:(Class)arg2;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)changeTextLayerFont:(id)arg1;
- (struct CGRect)boundsForParentOf:(id)arg1;
- (long long)anchorFromString:(id)arg1 axis:(unsigned long long)arg2;
- (void)setLayerSizeFromString:(id)arg1 onAxis:(unsigned long long)arg2;
- (void)setHeightAction:(id)arg1;
- (void)setWidthAction:(id)arg1;
- (void)setYAction:(id)arg1;
- (void)setXAction:(id)arg1;
- (double)layerSizeOnAxis:(unsigned long long)arg1;
- (double)rulerOriginXForLayer:(id)arg1;
- (double)rulerOriginYForLayer:(id)arg1;
- (double)absoluteYForLayers;
- (double)absoluteXForLayers;
- (void)setValue:(double)arg1 forFields:(id)arg2;
- (void)refreshBindingsOnShape:(id)arg1;
- (void)clearPositionAndSizeFields;
- (void)layerPositionPossiblyChanged;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

